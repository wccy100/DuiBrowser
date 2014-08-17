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

#include "JSDocumentFragment.h"

#include <wtf/GetPtr.h>

#include "DocumentFragment.h"
#include "Element.h"
#include "NodeList.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSDocumentFragment)

/* Hash table */

static const HashTableValue JSDocumentFragmentTableValues[2] =
{
    { "constructor", (intptr_t)JSDocumentFragment::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSDocumentFragmentTable = { 0, JSDocumentFragmentTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSDocumentFragmentConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSDocumentFragmentConstructorTable = { 0, JSDocumentFragmentConstructorTableValues, 0 };

class JSDocumentFragmentConstructor : public DOMObject {
public:
    JSDocumentFragmentConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSDocumentFragmentPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSDocumentFragmentConstructor::s_info = { "DocumentFragmentConstructor", 0, &JSDocumentFragmentConstructorTable, 0 };

bool JSDocumentFragmentConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDocumentFragmentConstructor, DOMObject>(exec, &JSDocumentFragmentConstructorTable, this, propertyName, slot);
}

JSValue* JSDocumentFragmentConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSDocumentFragmentPrototypeTableValues[3] =
{
    { "querySelector", (intptr_t)jsDocumentFragmentPrototypeFunctionQuerySelector, DontDelete|Function, 2 },
    { "querySelectorAll", (intptr_t)jsDocumentFragmentPrototypeFunctionQuerySelectorAll, DontDelete|Function, 2 },
    { 0, 0, 0, 0 }
};

static const HashTable JSDocumentFragmentPrototypeTable = { 1, JSDocumentFragmentPrototypeTableValues, 0 };

const ClassInfo JSDocumentFragmentPrototype::s_info = { "DocumentFragmentPrototype", 0, &JSDocumentFragmentPrototypeTable, 0 };

JSObject* JSDocumentFragmentPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSDocumentFragment.prototype]]");
    return JSC::cacheGlobalObject<JSDocumentFragmentPrototype>(exec, *prototypeIdentifier);
}

bool JSDocumentFragmentPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSDocumentFragmentPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSDocumentFragment::s_info = { "DocumentFragment", &JSEventTargetNode::s_info, &JSDocumentFragmentTable , 0 };

JSDocumentFragment::JSDocumentFragment(JSObject* prototype, DocumentFragment* impl)
    : JSEventTargetNode(prototype, impl)
{
}

bool JSDocumentFragment::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDocumentFragment, Base>(exec, &JSDocumentFragmentTable, this, propertyName, slot);
}

JSValue* JSDocumentFragment::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSDocumentFragment::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[DocumentFragment.constructor]]");
    return JSC::cacheGlobalObject<JSDocumentFragmentConstructor>(exec, *constructorIdentifier);
}

JSValue* jsDocumentFragmentPrototypeFunctionQuerySelector(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDocumentFragment::s_info))
        return throwError(exec, TypeError);
    JSDocumentFragment* castedThisObj = static_cast<JSDocumentFragment*>(thisValue);
    return castedThisObj->querySelector(exec, args);
}

JSValue* jsDocumentFragmentPrototypeFunctionQuerySelectorAll(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDocumentFragment::s_info))
        return throwError(exec, TypeError);
    JSDocumentFragment* castedThisObj = static_cast<JSDocumentFragment*>(thisValue);
    return castedThisObj->querySelectorAll(exec, args);
}


}
