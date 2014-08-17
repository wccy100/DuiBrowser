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

/*
* This file was modified by Electronic Arts Inc Copyright � 2009-2010
*/

#include "config.h"

#include "JSCSSCharsetRule.h"

#include <wtf/GetPtr.h>

#include "CSSCharsetRule.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSCSSCharsetRuleTableValues[3] =
{
    { "encoding", (intptr_t)JSCSSCharsetRule::EncodingAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSCSSCharsetRule::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSCharsetRuleTable = { 3, JSCSSCharsetRuleTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSCSSCharsetRuleConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSCharsetRuleConstructorTable = { 0, JSCSSCharsetRuleConstructorTableValues, 0 };

class JSCSSCharsetRuleConstructor : public DOMObject {
public:
    JSCSSCharsetRuleConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSCSSCharsetRulePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSCSSCharsetRuleConstructor::s_info = { "CSSCharsetRuleConstructor", 0, &JSCSSCharsetRuleConstructorTable, 0 };

bool JSCSSCharsetRuleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSCharsetRuleConstructor, DOMObject>(exec, &JSCSSCharsetRuleConstructorTable, this, propertyName, slot);
}

JSValue* JSCSSCharsetRuleConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSCSSCharsetRulePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSCharsetRulePrototypeTable = { 0, JSCSSCharsetRulePrototypeTableValues, 0 };

const ClassInfo JSCSSCharsetRulePrototype::s_info = { "CSSCharsetRulePrototype", 0, &JSCSSCharsetRulePrototypeTable, 0 };

JSObject* JSCSSCharsetRulePrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSCSSCharsetRule.prototype]]");
    return KJS::cacheGlobalObject<JSCSSCharsetRulePrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSCSSCharsetRule::s_info = { "CSSCharsetRule", &JSCSSRule::s_info, &JSCSSCharsetRuleTable , 0 };

JSCSSCharsetRule::JSCSSCharsetRule(JSObject* prototype, CSSCharsetRule* impl)
    : JSCSSRule(prototype, impl)
{
}

bool JSCSSCharsetRule::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSCharsetRule, Base>(exec, &JSCSSCharsetRuleTable, this, propertyName, slot);
}

JSValue* JSCSSCharsetRule::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case EncodingAttrNum: {
        CSSCharsetRule* imp = static_cast<CSSCharsetRule*>(impl());
        return jsStringOrNull(exec, imp->encoding());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSCSSCharsetRule::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSCSSCharsetRule, Base>(exec, propertyName, value, &JSCSSCharsetRuleTable, this);
}

void JSCSSCharsetRule::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case EncodingAttrNum: {
        CSSCharsetRule* imp = static_cast<CSSCharsetRule*>(impl());
        ExceptionCode ec = 0;
        imp->setEncoding(valueToStringWithNullCheck(exec, value), ec);
        setDOMException(exec, ec);
        break;
    }
    }
}

JSValue* JSCSSCharsetRule::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[CSSCharsetRule.constructor]]");
    return KJS::cacheGlobalObject<JSCSSCharsetRuleConstructor>(exec, constructorIdentifier);
}


}
