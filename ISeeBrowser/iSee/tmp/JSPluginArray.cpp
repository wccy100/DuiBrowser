/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#include "JSPluginArray.h"

#include <wtf/GetPtr.h>

#include <kjs/PropertyNameArray.h>
#include "AtomicString.h"
#include "PluginArray.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSPluginArray)

/* Hash table */

static const HashTableValue JSPluginArrayTableValues[2] =
{
    { "length", (intptr_t)JSPluginArray::LengthAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSPluginArrayTable = { 0, JSPluginArrayTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSPluginArrayPrototypeTableValues[2] =
{
    { "refresh", (intptr_t)jsPluginArrayPrototypeFunctionRefresh, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSPluginArrayPrototypeTable = { 0, JSPluginArrayPrototypeTableValues, 0 };

const ClassInfo JSPluginArrayPrototype::s_info = { "PluginArrayPrototype", 0, &JSPluginArrayPrototypeTable, 0 };

JSObject* JSPluginArrayPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSPluginArray.prototype]]");
    return JSC::cacheGlobalObject<JSPluginArrayPrototype>(exec, *prototypeIdentifier);
}

bool JSPluginArrayPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSPluginArrayPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSPluginArray::s_info = { "PluginArray", 0, &JSPluginArrayTable , 0 };

JSPluginArray::JSPluginArray(JSObject* prototype, PluginArray* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSPluginArray::~JSPluginArray()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSPluginArray::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSPluginArrayTable.entry(exec, propertyName);
    if (entry) {
        slot.setStaticEntry(this, entry, staticValueGetter<JSPluginArray>);
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<PluginArray*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<PluginArray*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    return getStaticValueSlot<JSPluginArray, Base>(exec, &JSPluginArrayTable, this, propertyName, slot);
}

bool JSPluginArray::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<PluginArray*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue* JSPluginArray::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case LengthAttrNum: {
        PluginArray* imp = static_cast<PluginArray*>(impl());
        return jsNumber(exec, imp->length());
    }
    }
    return 0;
}

void JSPluginArray::getPropertyNames(ExecState* exec, PropertyNameArray& propertyNames)
{
    for (unsigned i = 0; i < static_cast<PluginArray*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getPropertyNames(exec, propertyNames);
}

JSValue* jsPluginArrayPrototypeFunctionRefresh(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSPluginArray::s_info))
        return throwError(exec, TypeError);
    JSPluginArray* castedThisObj = static_cast<JSPluginArray*>(thisValue);
    PluginArray* imp = static_cast<PluginArray*>(castedThisObj->impl());
    bool reload = args.at(exec, 0)->toBoolean(exec);

    imp->refresh(reload);
    return jsUndefined();
}


JSValue* JSPluginArray::indexGetter(ExecState* exec, const Identifier& propertyName, const PropertySlot& slot)
{
    JSPluginArray* thisObj = static_cast<JSPluginArray*>(slot.slotBase());
    return toJS(exec, static_cast<PluginArray*>(thisObj->impl())->item(slot.index()));
}
JSC::JSValue* toJS(JSC::ExecState* exec, PluginArray* obj)
{
    return cacheDOMObject<PluginArray, JSPluginArray, JSPluginArrayPrototype>(exec, obj);
}
PluginArray* toPluginArray(JSC::JSValue* val)
{
    return val->isObject(&JSPluginArray::s_info) ? static_cast<JSPluginArray*>(val)->impl() : 0;
}

}
