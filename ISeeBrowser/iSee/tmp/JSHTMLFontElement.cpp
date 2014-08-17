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

#include "JSHTMLFontElement.h"

#include <wtf/GetPtr.h>

#include "HTMLFontElement.h"
#include "KURL.h"

#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLFontElement)

/* Hash table */

static const HashTableValue JSHTMLFontElementTableValues[5] =
{
    { "color", (intptr_t)JSHTMLFontElement::ColorAttrNum, DontDelete, 0 },
    { "face", (intptr_t)JSHTMLFontElement::FaceAttrNum, DontDelete, 0 },
    { "size", (intptr_t)JSHTMLFontElement::SizeAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLFontElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLFontElementTable = { 15, JSHTMLFontElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLFontElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLFontElementConstructorTable = { 0, JSHTMLFontElementConstructorTableValues, 0 };

class JSHTMLFontElementConstructor : public DOMObject {
public:
    JSHTMLFontElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLFontElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLFontElementConstructor::s_info = { "HTMLFontElementConstructor", 0, &JSHTMLFontElementConstructorTable, 0 };

bool JSHTMLFontElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLFontElementConstructor, DOMObject>(exec, &JSHTMLFontElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLFontElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLFontElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLFontElementPrototypeTable = { 0, JSHTMLFontElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLFontElementPrototype::s_info = { "HTMLFontElementPrototype", 0, &JSHTMLFontElementPrototypeTable, 0 };

JSObject* JSHTMLFontElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSHTMLFontElement.prototype]]");
    return JSC::cacheGlobalObject<JSHTMLFontElementPrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSHTMLFontElement::s_info = { "HTMLFontElement", &JSHTMLElement::s_info, &JSHTMLFontElementTable , 0 };

JSHTMLFontElement::JSHTMLFontElement(JSObject* prototype, HTMLFontElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLFontElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLFontElement, Base>(exec, &JSHTMLFontElementTable, this, propertyName, slot);
}

JSValue* JSHTMLFontElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ColorAttrNum: {
        HTMLFontElement* imp = static_cast<HTMLFontElement*>(impl());
        return jsString(exec, imp->color());
    }
    case FaceAttrNum: {
        HTMLFontElement* imp = static_cast<HTMLFontElement*>(impl());
        return jsString(exec, imp->face());
    }
    case SizeAttrNum: {
        HTMLFontElement* imp = static_cast<HTMLFontElement*>(impl());
        return jsString(exec, imp->size());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLFontElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLFontElement, Base>(exec, propertyName, value, &JSHTMLFontElementTable, this, slot);
}

void JSHTMLFontElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case ColorAttrNum: {
        HTMLFontElement* imp = static_cast<HTMLFontElement*>(impl());
        imp->setColor(valueToStringWithNullCheck(exec, value));
        break;
    }
    case FaceAttrNum: {
        HTMLFontElement* imp = static_cast<HTMLFontElement*>(impl());
        imp->setFace(valueToStringWithNullCheck(exec, value));
        break;
    }
    case SizeAttrNum: {
        HTMLFontElement* imp = static_cast<HTMLFontElement*>(impl());
        imp->setSize(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLFontElement::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[HTMLFontElement.constructor]]");
    return JSC::cacheGlobalObject<JSHTMLFontElementConstructor>(exec, *constructorIdentifier);
}


}
