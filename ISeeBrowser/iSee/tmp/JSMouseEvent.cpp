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

#include "JSMouseEvent.h"

#include <wtf/GetPtr.h>

#include "Clipboard.h"
#include "EventTargetNode.h"
#include "JSClipboard.h"
#include "JSDOMWindow.h"
#include "JSEventTargetNode.h"
#include "JSNode.h"
#include "MouseEvent.h"
#include "Node.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSMouseEvent)

/* Hash table */

static const HashTableValue JSMouseEventTableValues[19] =
{
    { "screenX", (intptr_t)JSMouseEvent::ScreenXAttrNum, DontDelete|ReadOnly, 0 },
    { "screenY", (intptr_t)JSMouseEvent::ScreenYAttrNum, DontDelete|ReadOnly, 0 },
    { "clientX", (intptr_t)JSMouseEvent::ClientXAttrNum, DontDelete|ReadOnly, 0 },
    { "clientY", (intptr_t)JSMouseEvent::ClientYAttrNum, DontDelete|ReadOnly, 0 },
    { "ctrlKey", (intptr_t)JSMouseEvent::CtrlKeyAttrNum, DontDelete|ReadOnly, 0 },
    { "shiftKey", (intptr_t)JSMouseEvent::ShiftKeyAttrNum, DontDelete|ReadOnly, 0 },
    { "altKey", (intptr_t)JSMouseEvent::AltKeyAttrNum, DontDelete|ReadOnly, 0 },
    { "metaKey", (intptr_t)JSMouseEvent::MetaKeyAttrNum, DontDelete|ReadOnly, 0 },
    { "button", (intptr_t)JSMouseEvent::ButtonAttrNum, DontDelete|ReadOnly, 0 },
    { "relatedTarget", (intptr_t)JSMouseEvent::RelatedTargetAttrNum, DontDelete|ReadOnly, 0 },
    { "offsetX", (intptr_t)JSMouseEvent::OffsetXAttrNum, DontDelete|ReadOnly, 0 },
    { "offsetY", (intptr_t)JSMouseEvent::OffsetYAttrNum, DontDelete|ReadOnly, 0 },
    { "x", (intptr_t)JSMouseEvent::XAttrNum, DontDelete|ReadOnly, 0 },
    { "y", (intptr_t)JSMouseEvent::YAttrNum, DontDelete|ReadOnly, 0 },
    { "fromElement", (intptr_t)JSMouseEvent::FromElementAttrNum, DontDelete|ReadOnly, 0 },
    { "toElement", (intptr_t)JSMouseEvent::ToElementAttrNum, DontDelete|ReadOnly, 0 },
    { "dataTransfer", (intptr_t)JSMouseEvent::DataTransferAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSMouseEvent::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSMouseEventTable = { 127, JSMouseEventTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSMouseEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSMouseEventConstructorTable = { 0, JSMouseEventConstructorTableValues, 0 };

class JSMouseEventConstructor : public DOMObject {
public:
    JSMouseEventConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSMouseEventPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSMouseEventConstructor::s_info = { "MouseEventConstructor", 0, &JSMouseEventConstructorTable, 0 };

bool JSMouseEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMouseEventConstructor, DOMObject>(exec, &JSMouseEventConstructorTable, this, propertyName, slot);
}

JSValue* JSMouseEventConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSMouseEventPrototypeTableValues[2] =
{
    { "initMouseEvent", (intptr_t)jsMouseEventPrototypeFunctionInitMouseEvent, DontDelete|Function, 15 },
    { 0, 0, 0, 0 }
};

static const HashTable JSMouseEventPrototypeTable = { 0, JSMouseEventPrototypeTableValues, 0 };

const ClassInfo JSMouseEventPrototype::s_info = { "MouseEventPrototype", 0, &JSMouseEventPrototypeTable, 0 };

JSObject* JSMouseEventPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSMouseEvent.prototype]]");
    return JSC::cacheGlobalObject<JSMouseEventPrototype>(exec, *prototypeIdentifier);
}

bool JSMouseEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSMouseEventPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSMouseEvent::s_info = { "MouseEvent", &JSUIEvent::s_info, &JSMouseEventTable , 0 };

JSMouseEvent::JSMouseEvent(JSObject* prototype, MouseEvent* impl)
    : JSUIEvent(prototype, impl)
{
}

bool JSMouseEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMouseEvent, Base>(exec, &JSMouseEventTable, this, propertyName, slot);
}

JSValue* JSMouseEvent::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ScreenXAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return jsNumber(exec, imp->screenX());
    }
    case ScreenYAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return jsNumber(exec, imp->screenY());
    }
    case ClientXAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return jsNumber(exec, imp->clientX());
    }
    case ClientYAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return jsNumber(exec, imp->clientY());
    }
    case CtrlKeyAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return jsBoolean(imp->ctrlKey());
    }
    case ShiftKeyAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return jsBoolean(imp->shiftKey());
    }
    case AltKeyAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return jsBoolean(imp->altKey());
    }
    case MetaKeyAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return jsBoolean(imp->metaKey());
    }
    case ButtonAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return jsNumber(exec, imp->button());
    }
    case RelatedTargetAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return toJS(exec, WTF::getPtr(imp->relatedTarget()));
    }
    case OffsetXAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return jsNumber(exec, imp->offsetX());
    }
    case OffsetYAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return jsNumber(exec, imp->offsetY());
    }
    case XAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return jsNumber(exec, imp->x());
    }
    case YAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return jsNumber(exec, imp->y());
    }
    case FromElementAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return toJS(exec, WTF::getPtr(imp->fromElement()));
    }
    case ToElementAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return toJS(exec, WTF::getPtr(imp->toElement()));
    }
    case DataTransferAttrNum: {
        MouseEvent* imp = static_cast<MouseEvent*>(impl());
        return toJS(exec, WTF::getPtr(imp->dataTransfer()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSMouseEvent::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[MouseEvent.constructor]]");
    return JSC::cacheGlobalObject<JSMouseEventConstructor>(exec, *constructorIdentifier);
}

JSValue* jsMouseEventPrototypeFunctionInitMouseEvent(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSMouseEvent::s_info))
        return throwError(exec, TypeError);
    JSMouseEvent* castedThisObj = static_cast<JSMouseEvent*>(thisValue);
    MouseEvent* imp = static_cast<MouseEvent*>(castedThisObj->impl());
    const UString& type = args.at(exec, 0)->toString(exec);
    bool canBubble = args.at(exec, 1)->toBoolean(exec);
    bool cancelable = args.at(exec, 2)->toBoolean(exec);
    DOMWindow* view = toDOMWindow(args.at(exec, 3));
    int detail = args.at(exec, 4)->toInt32(exec);
    int screenX = args.at(exec, 5)->toInt32(exec);
    int screenY = args.at(exec, 6)->toInt32(exec);
    int clientX = args.at(exec, 7)->toInt32(exec);
    int clientY = args.at(exec, 8)->toInt32(exec);
    bool ctrlKey = args.at(exec, 9)->toBoolean(exec);
    bool altKey = args.at(exec, 10)->toBoolean(exec);
    bool shiftKey = args.at(exec, 11)->toBoolean(exec);
    bool metaKey = args.at(exec, 12)->toBoolean(exec);
    unsigned short button = args.at(exec, 13)->toInt32(exec);
    EventTargetNode* relatedTarget = toEventTargetNode(args.at(exec, 14));

    imp->initMouseEvent(type, canBubble, cancelable, view, detail, screenX, screenY, clientX, clientY, ctrlKey, altKey, shiftKey, metaKey, button, relatedTarget);
    return jsUndefined();
}


}
