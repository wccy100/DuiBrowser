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

#include "JSMutationEvent.h"

#include <wtf/GetPtr.h>

#include "JSNode.h"
#include "KURL.h"
#include "MutationEvent.h"
#include "Node.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSMutationEvent)

/* Hash table */

static const HashTableValue JSMutationEventTableValues[7] =
{
    { "relatedNode", (intptr_t)JSMutationEvent::RelatedNodeAttrNum, DontDelete|ReadOnly, 0 },
    { "prevValue", (intptr_t)JSMutationEvent::PrevValueAttrNum, DontDelete|ReadOnly, 0 },
    { "newValue", (intptr_t)JSMutationEvent::NewValueAttrNum, DontDelete|ReadOnly, 0 },
    { "attrName", (intptr_t)JSMutationEvent::AttrNameAttrNum, DontDelete|ReadOnly, 0 },
    { "attrChange", (intptr_t)JSMutationEvent::AttrChangeAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSMutationEvent::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSMutationEventTable = { 127, JSMutationEventTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSMutationEventConstructorTableValues[4] =
{
    { "MODIFICATION", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "ADDITION", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "REMOVAL", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSMutationEventConstructorTable = { 7, JSMutationEventConstructorTableValues, 0 };

class JSMutationEventConstructor : public DOMObject {
public:
    JSMutationEventConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSMutationEventPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSMutationEventConstructor::s_info = { "MutationEventConstructor", 0, &JSMutationEventConstructorTable, 0 };

bool JSMutationEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMutationEventConstructor, DOMObject>(exec, &JSMutationEventConstructorTable, this, propertyName, slot);
}

JSValue* JSMutationEventConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSMutationEventPrototypeTableValues[5] =
{
    { "MODIFICATION", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "ADDITION", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "REMOVAL", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { "initMutationEvent", (intptr_t)jsMutationEventPrototypeFunctionInitMutationEvent, DontDelete|Function, 8 },
    { 0, 0, 0, 0 }
};

static const HashTable JSMutationEventPrototypeTable = { 7, JSMutationEventPrototypeTableValues, 0 };

const ClassInfo JSMutationEventPrototype::s_info = { "MutationEventPrototype", 0, &JSMutationEventPrototypeTable, 0 };

JSObject* JSMutationEventPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSMutationEvent.prototype]]");
    return JSC::cacheGlobalObject<JSMutationEventPrototype>(exec, *prototypeIdentifier);
}

bool JSMutationEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSMutationEventPrototype, JSObject>(exec, &JSMutationEventPrototypeTable, this, propertyName, slot);
}

JSValue* JSMutationEventPrototype::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

const ClassInfo JSMutationEvent::s_info = { "MutationEvent", &JSEvent::s_info, &JSMutationEventTable , 0 };

JSMutationEvent::JSMutationEvent(JSObject* prototype, MutationEvent* impl)
    : JSEvent(prototype, impl)
{
}

bool JSMutationEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMutationEvent, Base>(exec, &JSMutationEventTable, this, propertyName, slot);
}

JSValue* JSMutationEvent::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case RelatedNodeAttrNum: {
        MutationEvent* imp = static_cast<MutationEvent*>(impl());
        return toJS(exec, WTF::getPtr(imp->relatedNode()));
    }
    case PrevValueAttrNum: {
        MutationEvent* imp = static_cast<MutationEvent*>(impl());
        return jsString(exec, imp->prevValue());
    }
    case NewValueAttrNum: {
        MutationEvent* imp = static_cast<MutationEvent*>(impl());
        return jsString(exec, imp->newValue());
    }
    case AttrNameAttrNum: {
        MutationEvent* imp = static_cast<MutationEvent*>(impl());
        return jsString(exec, imp->attrName());
    }
    case AttrChangeAttrNum: {
        MutationEvent* imp = static_cast<MutationEvent*>(impl());
        return jsNumber(exec, imp->attrChange());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSMutationEvent::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[MutationEvent.constructor]]");
    return JSC::cacheGlobalObject<JSMutationEventConstructor>(exec, *constructorIdentifier);
}

JSValue* jsMutationEventPrototypeFunctionInitMutationEvent(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSMutationEvent::s_info))
        return throwError(exec, TypeError);
    JSMutationEvent* castedThisObj = static_cast<JSMutationEvent*>(thisValue);
    MutationEvent* imp = static_cast<MutationEvent*>(castedThisObj->impl());
    const UString& type = args.at(exec, 0)->toString(exec);
    bool canBubble = args.at(exec, 1)->toBoolean(exec);
    bool cancelable = args.at(exec, 2)->toBoolean(exec);
    Node* relatedNode = toNode(args.at(exec, 3));
    const UString& prevValue = args.at(exec, 4)->toString(exec);
    const UString& newValue = args.at(exec, 5)->toString(exec);
    const UString& attrName = args.at(exec, 6)->toString(exec);
    unsigned short attrChange = args.at(exec, 7)->toInt32(exec);

    imp->initMutationEvent(type, canBubble, cancelable, relatedNode, prevValue, newValue, attrName, attrChange);
    return jsUndefined();
}


}
