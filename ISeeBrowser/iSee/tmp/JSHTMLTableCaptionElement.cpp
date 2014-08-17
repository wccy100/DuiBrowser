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

#include "JSHTMLTableCaptionElement.h"

#include <wtf/GetPtr.h>

#include "HTMLTableCaptionElement.h"
#include "KURL.h"

#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLTableCaptionElement)

/* Hash table */

static const HashTableValue JSHTMLTableCaptionElementTableValues[3] =
{
    { "align", (intptr_t)JSHTMLTableCaptionElement::AlignAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLTableCaptionElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTableCaptionElementTable = { 7, JSHTMLTableCaptionElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLTableCaptionElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTableCaptionElementConstructorTable = { 0, JSHTMLTableCaptionElementConstructorTableValues, 0 };

class JSHTMLTableCaptionElementConstructor : public DOMObject {
public:
    JSHTMLTableCaptionElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLTableCaptionElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLTableCaptionElementConstructor::s_info = { "HTMLTableCaptionElementConstructor", 0, &JSHTMLTableCaptionElementConstructorTable, 0 };

bool JSHTMLTableCaptionElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableCaptionElementConstructor, DOMObject>(exec, &JSHTMLTableCaptionElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLTableCaptionElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLTableCaptionElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTableCaptionElementPrototypeTable = { 0, JSHTMLTableCaptionElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLTableCaptionElementPrototype::s_info = { "HTMLTableCaptionElementPrototype", 0, &JSHTMLTableCaptionElementPrototypeTable, 0 };

JSObject* JSHTMLTableCaptionElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSHTMLTableCaptionElement.prototype]]");
    return JSC::cacheGlobalObject<JSHTMLTableCaptionElementPrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSHTMLTableCaptionElement::s_info = { "HTMLTableCaptionElement", &JSHTMLElement::s_info, &JSHTMLTableCaptionElementTable , 0 };

JSHTMLTableCaptionElement::JSHTMLTableCaptionElement(JSObject* prototype, HTMLTableCaptionElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLTableCaptionElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableCaptionElement, Base>(exec, &JSHTMLTableCaptionElementTable, this, propertyName, slot);
}

JSValue* JSHTMLTableCaptionElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case AlignAttrNum: {
        HTMLTableCaptionElement* imp = static_cast<HTMLTableCaptionElement*>(impl());
        return jsString(exec, imp->align());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLTableCaptionElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLTableCaptionElement, Base>(exec, propertyName, value, &JSHTMLTableCaptionElementTable, this, slot);
}

void JSHTMLTableCaptionElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case AlignAttrNum: {
        HTMLTableCaptionElement* imp = static_cast<HTMLTableCaptionElement*>(impl());
        imp->setAlign(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLTableCaptionElement::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[HTMLTableCaptionElement.constructor]]");
    return JSC::cacheGlobalObject<JSHTMLTableCaptionElementConstructor>(exec, *constructorIdentifier);
}

HTMLTableCaptionElement* toHTMLTableCaptionElement(JSC::JSValue* val)
{
    return val->isObject(&JSHTMLTableCaptionElement::s_info) ? static_cast<JSHTMLTableCaptionElement*>(val)->impl() : 0;
}

}
