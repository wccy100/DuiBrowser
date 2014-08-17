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

#include "JSTreeWalker.h"

#include <wtf/GetPtr.h>

#include "JSNode.h"
#include "JSNodeFilter.h"
#include "Node.h"
#include "NodeFilter.h"
#include "TreeWalker.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSTreeWalker)

/* Hash table */

static const HashTableValue JSTreeWalkerTableValues[6] =
{
    { "root", (intptr_t)JSTreeWalker::RootAttrNum, DontDelete|ReadOnly, 0 },
    { "whatToShow", (intptr_t)JSTreeWalker::WhatToShowAttrNum, DontDelete|ReadOnly, 0 },
    { "filter", (intptr_t)JSTreeWalker::FilterAttrNum, DontDelete|ReadOnly, 0 },
    { "expandEntityReferences", (intptr_t)JSTreeWalker::ExpandEntityReferencesAttrNum, DontDelete|ReadOnly, 0 },
    { "currentNode", (intptr_t)JSTreeWalker::CurrentNodeAttrNum, DontDelete, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSTreeWalkerTable = { 255, JSTreeWalkerTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSTreeWalkerPrototypeTableValues[8] =
{
    { "parentNode", (intptr_t)jsTreeWalkerPrototypeFunctionParentNode, DontDelete|Function, 0 },
    { "firstChild", (intptr_t)jsTreeWalkerPrototypeFunctionFirstChild, DontDelete|Function, 0 },
    { "lastChild", (intptr_t)jsTreeWalkerPrototypeFunctionLastChild, DontDelete|Function, 0 },
    { "previousSibling", (intptr_t)jsTreeWalkerPrototypeFunctionPreviousSibling, DontDelete|Function, 0 },
    { "nextSibling", (intptr_t)jsTreeWalkerPrototypeFunctionNextSibling, DontDelete|Function, 0 },
    { "previousNode", (intptr_t)jsTreeWalkerPrototypeFunctionPreviousNode, DontDelete|Function, 0 },
    { "nextNode", (intptr_t)jsTreeWalkerPrototypeFunctionNextNode, DontDelete|Function, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSTreeWalkerPrototypeTable = { 15, JSTreeWalkerPrototypeTableValues, 0 };

const ClassInfo JSTreeWalkerPrototype::s_info = { "TreeWalkerPrototype", 0, &JSTreeWalkerPrototypeTable, 0 };

JSObject* JSTreeWalkerPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSTreeWalker.prototype]]");
    return JSC::cacheGlobalObject<JSTreeWalkerPrototype>(exec, *prototypeIdentifier);
}

bool JSTreeWalkerPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSTreeWalkerPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSTreeWalker::s_info = { "TreeWalker", 0, &JSTreeWalkerTable , 0 };

JSTreeWalker::JSTreeWalker(JSObject* prototype, TreeWalker* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSTreeWalker::~JSTreeWalker()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSTreeWalker::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTreeWalker, Base>(exec, &JSTreeWalkerTable, this, propertyName, slot);
}

JSValue* JSTreeWalker::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case RootAttrNum: {
        TreeWalker* imp = static_cast<TreeWalker*>(impl());
        return toJS(exec, WTF::getPtr(imp->root()));
    }
    case WhatToShowAttrNum: {
        TreeWalker* imp = static_cast<TreeWalker*>(impl());
        return jsNumber(exec, imp->whatToShow());
    }
    case FilterAttrNum: {
        TreeWalker* imp = static_cast<TreeWalker*>(impl());
        return toJS(exec, WTF::getPtr(imp->filter()));
    }
    case ExpandEntityReferencesAttrNum: {
        TreeWalker* imp = static_cast<TreeWalker*>(impl());
        return jsBoolean(imp->expandEntityReferences());
    }
    case CurrentNodeAttrNum: {
        TreeWalker* imp = static_cast<TreeWalker*>(impl());
        return toJS(exec, WTF::getPtr(imp->currentNode()));
    }
    }
    return 0;
}

void JSTreeWalker::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSTreeWalker, Base>(exec, propertyName, value, &JSTreeWalkerTable, this, slot);
}

void JSTreeWalker::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case CurrentNodeAttrNum: {
        TreeWalker* imp = static_cast<TreeWalker*>(impl());
        ExceptionCode ec = 0;
        imp->setCurrentNode(toNode(value), ec);
        setDOMException(exec, ec);
        break;
    }
    }
}

JSValue* jsTreeWalkerPrototypeFunctionParentNode(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSTreeWalker::s_info))
        return throwError(exec, TypeError);
    JSTreeWalker* castedThisObj = static_cast<JSTreeWalker*>(thisValue);
    return castedThisObj->parentNode(exec, args);
}

JSValue* jsTreeWalkerPrototypeFunctionFirstChild(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSTreeWalker::s_info))
        return throwError(exec, TypeError);
    JSTreeWalker* castedThisObj = static_cast<JSTreeWalker*>(thisValue);
    return castedThisObj->firstChild(exec, args);
}

JSValue* jsTreeWalkerPrototypeFunctionLastChild(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSTreeWalker::s_info))
        return throwError(exec, TypeError);
    JSTreeWalker* castedThisObj = static_cast<JSTreeWalker*>(thisValue);
    return castedThisObj->lastChild(exec, args);
}

JSValue* jsTreeWalkerPrototypeFunctionPreviousSibling(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSTreeWalker::s_info))
        return throwError(exec, TypeError);
    JSTreeWalker* castedThisObj = static_cast<JSTreeWalker*>(thisValue);
    return castedThisObj->previousSibling(exec, args);
}

JSValue* jsTreeWalkerPrototypeFunctionNextSibling(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSTreeWalker::s_info))
        return throwError(exec, TypeError);
    JSTreeWalker* castedThisObj = static_cast<JSTreeWalker*>(thisValue);
    return castedThisObj->nextSibling(exec, args);
}

JSValue* jsTreeWalkerPrototypeFunctionPreviousNode(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSTreeWalker::s_info))
        return throwError(exec, TypeError);
    JSTreeWalker* castedThisObj = static_cast<JSTreeWalker*>(thisValue);
    return castedThisObj->previousNode(exec, args);
}

JSValue* jsTreeWalkerPrototypeFunctionNextNode(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSTreeWalker::s_info))
        return throwError(exec, TypeError);
    JSTreeWalker* castedThisObj = static_cast<JSTreeWalker*>(thisValue);
    return castedThisObj->nextNode(exec, args);
}

JSC::JSValue* toJS(JSC::ExecState* exec, TreeWalker* obj)
{
    return cacheDOMObject<TreeWalker, JSTreeWalker, JSTreeWalkerPrototype>(exec, obj);
}
TreeWalker* toTreeWalker(JSC::JSValue* val)
{
    return val->isObject(&JSTreeWalker::s_info) ? static_cast<JSTreeWalker*>(val)->impl() : 0;
}

}
