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

#include "JSHTMLTableSectionElement.h"

#include <wtf/GetPtr.h>

#include "HTMLCollection.h"
#include "HTMLElement.h"
#include "HTMLTableSectionElement.h"
#include "JSHTMLCollection.h"
#include "JSHTMLElement.h"
#include "KURL.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLTableSectionElement)

/* Hash table */

static const HashTableValue JSHTMLTableSectionElementTableValues[7] =
{
    { "align", (intptr_t)JSHTMLTableSectionElement::AlignAttrNum, DontDelete, 0 },
    { "ch", (intptr_t)JSHTMLTableSectionElement::ChAttrNum, DontDelete, 0 },
    { "chOff", (intptr_t)JSHTMLTableSectionElement::ChOffAttrNum, DontDelete, 0 },
    { "vAlign", (intptr_t)JSHTMLTableSectionElement::VAlignAttrNum, DontDelete, 0 },
    { "rows", (intptr_t)JSHTMLTableSectionElement::RowsAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSHTMLTableSectionElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTableSectionElementTable = { 7, JSHTMLTableSectionElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLTableSectionElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTableSectionElementConstructorTable = { 0, JSHTMLTableSectionElementConstructorTableValues, 0 };

class JSHTMLTableSectionElementConstructor : public DOMObject {
public:
    JSHTMLTableSectionElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLTableSectionElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLTableSectionElementConstructor::s_info = { "HTMLTableSectionElementConstructor", 0, &JSHTMLTableSectionElementConstructorTable, 0 };

bool JSHTMLTableSectionElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableSectionElementConstructor, DOMObject>(exec, &JSHTMLTableSectionElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLTableSectionElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLTableSectionElementPrototypeTableValues[3] =
{
    { "insertRow", (intptr_t)jsHTMLTableSectionElementPrototypeFunctionInsertRow, DontDelete|Function, 1 },
    { "deleteRow", (intptr_t)jsHTMLTableSectionElementPrototypeFunctionDeleteRow, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTableSectionElementPrototypeTable = { 15, JSHTMLTableSectionElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLTableSectionElementPrototype::s_info = { "HTMLTableSectionElementPrototype", 0, &JSHTMLTableSectionElementPrototypeTable, 0 };

JSObject* JSHTMLTableSectionElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSHTMLTableSectionElement.prototype]]");
    return JSC::cacheGlobalObject<JSHTMLTableSectionElementPrototype>(exec, *prototypeIdentifier);
}

bool JSHTMLTableSectionElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLTableSectionElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSHTMLTableSectionElement::s_info = { "HTMLTableSectionElement", &JSHTMLElement::s_info, &JSHTMLTableSectionElementTable , 0 };

JSHTMLTableSectionElement::JSHTMLTableSectionElement(JSObject* prototype, HTMLTableSectionElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLTableSectionElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableSectionElement, Base>(exec, &JSHTMLTableSectionElementTable, this, propertyName, slot);
}

JSValue* JSHTMLTableSectionElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case AlignAttrNum: {
        HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(impl());
        return jsString(exec, imp->align());
    }
    case ChAttrNum: {
        HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(impl());
        return jsString(exec, imp->ch());
    }
    case ChOffAttrNum: {
        HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(impl());
        return jsString(exec, imp->chOff());
    }
    case VAlignAttrNum: {
        HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(impl());
        return jsString(exec, imp->vAlign());
    }
    case RowsAttrNum: {
        HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->rows()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLTableSectionElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLTableSectionElement, Base>(exec, propertyName, value, &JSHTMLTableSectionElementTable, this, slot);
}

void JSHTMLTableSectionElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case AlignAttrNum: {
        HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(impl());
        imp->setAlign(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ChAttrNum: {
        HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(impl());
        imp->setCh(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ChOffAttrNum: {
        HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(impl());
        imp->setChOff(valueToStringWithNullCheck(exec, value));
        break;
    }
    case VAlignAttrNum: {
        HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(impl());
        imp->setVAlign(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLTableSectionElement::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[HTMLTableSectionElement.constructor]]");
    return JSC::cacheGlobalObject<JSHTMLTableSectionElementConstructor>(exec, *constructorIdentifier);
}

JSValue* jsHTMLTableSectionElementPrototypeFunctionInsertRow(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLTableSectionElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLTableSectionElement* castedThisObj = static_cast<JSHTMLTableSectionElement*>(thisValue);
    HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    int index = args.at(exec, 0)->toInt32(exec);


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->insertRow(index, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsHTMLTableSectionElementPrototypeFunctionDeleteRow(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLTableSectionElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLTableSectionElement* castedThisObj = static_cast<JSHTMLTableSectionElement*>(thisValue);
    HTMLTableSectionElement* imp = static_cast<HTMLTableSectionElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    int index = args.at(exec, 0)->toInt32(exec);

    imp->deleteRow(index, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

HTMLTableSectionElement* toHTMLTableSectionElement(JSC::JSValue* val)
{
    return val->isObject(&JSHTMLTableSectionElement::s_info) ? static_cast<JSHTMLTableSectionElement*>(val)->impl() : 0;
}

}
