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

#include "JSCSSImportRule.h"

#include <wtf/GetPtr.h>

#include "CSSImportRule.h"
#include "CSSStyleSheet.h"
#include "JSCSSStyleSheet.h"
#include "JSMediaList.h"
#include "KURL.h"
#include "MediaList.h"

#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCSSImportRule)

/* Hash table */

static const HashTableValue JSCSSImportRuleTableValues[5] =
{
    { "href", (intptr_t)JSCSSImportRule::HrefAttrNum, DontDelete|ReadOnly, 0 },
    { "media", (intptr_t)JSCSSImportRule::MediaAttrNum, DontDelete|ReadOnly, 0 },
    { "styleSheet", (intptr_t)JSCSSImportRule::StyleSheetAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSCSSImportRule::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSImportRuleTable = { 7, JSCSSImportRuleTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSCSSImportRuleConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSImportRuleConstructorTable = { 0, JSCSSImportRuleConstructorTableValues, 0 };

class JSCSSImportRuleConstructor : public DOMObject {
public:
    JSCSSImportRuleConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSCSSImportRulePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSCSSImportRuleConstructor::s_info = { "CSSImportRuleConstructor", 0, &JSCSSImportRuleConstructorTable, 0 };

bool JSCSSImportRuleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSImportRuleConstructor, DOMObject>(exec, &JSCSSImportRuleConstructorTable, this, propertyName, slot);
}

JSValue* JSCSSImportRuleConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSCSSImportRulePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSImportRulePrototypeTable = { 0, JSCSSImportRulePrototypeTableValues, 0 };

const ClassInfo JSCSSImportRulePrototype::s_info = { "CSSImportRulePrototype", 0, &JSCSSImportRulePrototypeTable, 0 };

JSObject* JSCSSImportRulePrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSCSSImportRule.prototype]]");
    return JSC::cacheGlobalObject<JSCSSImportRulePrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSCSSImportRule::s_info = { "CSSImportRule", &JSCSSRule::s_info, &JSCSSImportRuleTable , 0 };

JSCSSImportRule::JSCSSImportRule(JSObject* prototype, CSSImportRule* impl)
    : JSCSSRule(prototype, impl)
{
}

bool JSCSSImportRule::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSImportRule, Base>(exec, &JSCSSImportRuleTable, this, propertyName, slot);
}

JSValue* JSCSSImportRule::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case HrefAttrNum: {
        CSSImportRule* imp = static_cast<CSSImportRule*>(impl());
        return jsStringOrNull(exec, imp->href());
    }
    case MediaAttrNum: {
        CSSImportRule* imp = static_cast<CSSImportRule*>(impl());
        return toJS(exec, WTF::getPtr(imp->media()));
    }
    case StyleSheetAttrNum: {
        CSSImportRule* imp = static_cast<CSSImportRule*>(impl());
        return toJS(exec, WTF::getPtr(imp->styleSheet()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSCSSImportRule::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[CSSImportRule.constructor]]");
    return JSC::cacheGlobalObject<JSCSSImportRuleConstructor>(exec, *constructorIdentifier);
}


}
