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

#include "JSKeyboardEvent.h"

#include <wtf/GetPtr.h>

#include "JSDOMWindow.h"
#include "KURL.h"
#include "KeyboardEvent.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSKeyboardEvent)

/* Hash table */

static const HashTableValue JSKeyboardEventTableValues[9] =
{
    { "keyIdentifier", (intptr_t)JSKeyboardEvent::KeyIdentifierAttrNum, DontDelete|ReadOnly, 0 },
    { "keyLocation", (intptr_t)JSKeyboardEvent::KeyLocationAttrNum, DontDelete|ReadOnly, 0 },
    { "ctrlKey", (intptr_t)JSKeyboardEvent::CtrlKeyAttrNum, DontDelete|ReadOnly, 0 },
    { "shiftKey", (intptr_t)JSKeyboardEvent::ShiftKeyAttrNum, DontDelete|ReadOnly, 0 },
    { "altKey", (intptr_t)JSKeyboardEvent::AltKeyAttrNum, DontDelete|ReadOnly, 0 },
    { "metaKey", (intptr_t)JSKeyboardEvent::MetaKeyAttrNum, DontDelete|ReadOnly, 0 },
    { "altGraphKey", (intptr_t)JSKeyboardEvent::AltGraphKeyAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSKeyboardEvent::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSKeyboardEventTable = { 31, JSKeyboardEventTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSKeyboardEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSKeyboardEventConstructorTable = { 0, JSKeyboardEventConstructorTableValues, 0 };

class JSKeyboardEventConstructor : public DOMObject {
public:
    JSKeyboardEventConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSKeyboardEventPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSKeyboardEventConstructor::s_info = { "KeyboardEventConstructor", 0, &JSKeyboardEventConstructorTable, 0 };

bool JSKeyboardEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSKeyboardEventConstructor, DOMObject>(exec, &JSKeyboardEventConstructorTable, this, propertyName, slot);
}

JSValue* JSKeyboardEventConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSKeyboardEventPrototypeTableValues[2] =
{
    { "initKeyboardEvent", (intptr_t)jsKeyboardEventPrototypeFunctionInitKeyboardEvent, DontDelete|Function, 11 },
    { 0, 0, 0, 0 }
};

static const HashTable JSKeyboardEventPrototypeTable = { 0, JSKeyboardEventPrototypeTableValues, 0 };

const ClassInfo JSKeyboardEventPrototype::s_info = { "KeyboardEventPrototype", 0, &JSKeyboardEventPrototypeTable, 0 };

JSObject* JSKeyboardEventPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSKeyboardEvent.prototype]]");
    return JSC::cacheGlobalObject<JSKeyboardEventPrototype>(exec, *prototypeIdentifier);
}

bool JSKeyboardEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSKeyboardEventPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSKeyboardEvent::s_info = { "KeyboardEvent", &JSUIEvent::s_info, &JSKeyboardEventTable , 0 };

JSKeyboardEvent::JSKeyboardEvent(JSObject* prototype, KeyboardEvent* impl)
    : JSUIEvent(prototype, impl)
{
}

bool JSKeyboardEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSKeyboardEvent, Base>(exec, &JSKeyboardEventTable, this, propertyName, slot);
}

JSValue* JSKeyboardEvent::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case KeyIdentifierAttrNum: {
        KeyboardEvent* imp = static_cast<KeyboardEvent*>(impl());
        return jsString(exec, imp->keyIdentifier());
    }
    case KeyLocationAttrNum: {
        KeyboardEvent* imp = static_cast<KeyboardEvent*>(impl());
        return jsNumber(exec, imp->keyLocation());
    }
    case CtrlKeyAttrNum: {
        KeyboardEvent* imp = static_cast<KeyboardEvent*>(impl());
        return jsBoolean(imp->ctrlKey());
    }
    case ShiftKeyAttrNum: {
        KeyboardEvent* imp = static_cast<KeyboardEvent*>(impl());
        return jsBoolean(imp->shiftKey());
    }
    case AltKeyAttrNum: {
        KeyboardEvent* imp = static_cast<KeyboardEvent*>(impl());
        return jsBoolean(imp->altKey());
    }
    case MetaKeyAttrNum: {
        KeyboardEvent* imp = static_cast<KeyboardEvent*>(impl());
        return jsBoolean(imp->metaKey());
    }
    case AltGraphKeyAttrNum: {
        KeyboardEvent* imp = static_cast<KeyboardEvent*>(impl());
        return jsBoolean(imp->altGraphKey());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSKeyboardEvent::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[KeyboardEvent.constructor]]");
    return JSC::cacheGlobalObject<JSKeyboardEventConstructor>(exec, *constructorIdentifier);
}

JSValue* jsKeyboardEventPrototypeFunctionInitKeyboardEvent(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSKeyboardEvent::s_info))
        return throwError(exec, TypeError);
    JSKeyboardEvent* castedThisObj = static_cast<JSKeyboardEvent*>(thisValue);
    KeyboardEvent* imp = static_cast<KeyboardEvent*>(castedThisObj->impl());
    const UString& type = args.at(exec, 0)->toString(exec);
    bool canBubble = args.at(exec, 1)->toBoolean(exec);
    bool cancelable = args.at(exec, 2)->toBoolean(exec);
    DOMWindow* view = toDOMWindow(args.at(exec, 3));
    const UString& keyIdentifier = args.at(exec, 4)->toString(exec);
    unsigned keyLocation = args.at(exec, 5)->toInt32(exec);
    bool ctrlKey = args.at(exec, 6)->toBoolean(exec);
    bool altKey = args.at(exec, 7)->toBoolean(exec);
    bool shiftKey = args.at(exec, 8)->toBoolean(exec);
    bool metaKey = args.at(exec, 9)->toBoolean(exec);
    bool altGraphKey = args.at(exec, 10)->toBoolean(exec);

    imp->initKeyboardEvent(type, canBubble, cancelable, view, keyIdentifier, keyLocation, ctrlKey, altKey, shiftKey, metaKey, altGraphKey);
    return jsUndefined();
}


}
