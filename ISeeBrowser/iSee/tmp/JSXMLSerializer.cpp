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

#include "JSXMLSerializer.h"

#include <wtf/GetPtr.h>

#include "JSNode.h"
#include "KURL.h"
#include "XMLSerializer.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSXMLSerializer)

/* Hash table */

static const HashTableValue JSXMLSerializerTableValues[2] =
{
    { "constructor", (intptr_t)JSXMLSerializer::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSXMLSerializerTable = { 0, JSXMLSerializerTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSXMLSerializerConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSXMLSerializerConstructorTable = { 0, JSXMLSerializerConstructorTableValues, 0 };

class JSXMLSerializerConstructor : public DOMObject {
public:
    JSXMLSerializerConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSXMLSerializerPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
    static JSObject* construct(ExecState* exec, JSObject*, const ArgList&)
    {
        return static_cast<JSObject*>(toJS(exec, XMLSerializer::create()));
    }
    virtual ConstructType getConstructData(ConstructData& constructData)
    {
        constructData.native.function = construct;
        return ConstructTypeHost;
    }
};

const ClassInfo JSXMLSerializerConstructor::s_info = { "XMLSerializerConstructor", 0, &JSXMLSerializerConstructorTable, 0 };

bool JSXMLSerializerConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLSerializerConstructor, DOMObject>(exec, &JSXMLSerializerConstructorTable, this, propertyName, slot);
}

JSValue* JSXMLSerializerConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSXMLSerializerPrototypeTableValues[2] =
{
    { "serializeToString", (intptr_t)jsXMLSerializerPrototypeFunctionSerializeToString, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSXMLSerializerPrototypeTable = { 0, JSXMLSerializerPrototypeTableValues, 0 };

const ClassInfo JSXMLSerializerPrototype::s_info = { "XMLSerializerPrototype", 0, &JSXMLSerializerPrototypeTable, 0 };

JSObject* JSXMLSerializerPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSXMLSerializer.prototype]]");
    return JSC::cacheGlobalObject<JSXMLSerializerPrototype>(exec, *prototypeIdentifier);
}

bool JSXMLSerializerPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSXMLSerializerPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSXMLSerializer::s_info = { "XMLSerializer", 0, &JSXMLSerializerTable , 0 };

JSXMLSerializer::JSXMLSerializer(JSObject* prototype, XMLSerializer* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSXMLSerializer::~JSXMLSerializer()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSXMLSerializer::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLSerializer, Base>(exec, &JSXMLSerializerTable, this, propertyName, slot);
}

JSValue* JSXMLSerializer::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSXMLSerializer::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[XMLSerializer.constructor]]");
    return JSC::cacheGlobalObject<JSXMLSerializerConstructor>(exec, *constructorIdentifier);
}

JSValue* jsXMLSerializerPrototypeFunctionSerializeToString(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLSerializer::s_info))
        return throwError(exec, TypeError);
    JSXMLSerializer* castedThisObj = static_cast<JSXMLSerializer*>(thisValue);
    XMLSerializer* imp = static_cast<XMLSerializer*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* node = toNode(args.at(exec, 0));


    JSC::JSValue* result = jsString(exec, imp->serializeToString(node, ec));
    setDOMException(exec, ec);
    return result;
}

JSC::JSValue* toJS(JSC::ExecState* exec, XMLSerializer* obj)
{
    return cacheDOMObject<XMLSerializer, JSXMLSerializer, JSXMLSerializerPrototype>(exec, obj);
}
XMLSerializer* toXMLSerializer(JSC::JSValue* val)
{
    return val->isObject(&JSXMLSerializer::s_info) ? static_cast<JSXMLSerializer*>(val)->impl() : 0;
}

}
