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

#include "JSConsole.h"

#include <wtf/GetPtr.h>

#include "Console.h"

using namespace KJS;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSConsolePrototypeTableValues[9] =
{
    { "debug", (intptr_t)jsConsolePrototypeFunctionDebug, DontDelete|Function, 0 },
    { "error", (intptr_t)jsConsolePrototypeFunctionError, DontDelete|Function, 0 },
    { "info", (intptr_t)jsConsolePrototypeFunctionInfo, DontDelete|Function, 0 },
    { "log", (intptr_t)jsConsolePrototypeFunctionLog, DontDelete|Function, 0 },
    { "warn", (intptr_t)jsConsolePrototypeFunctionWarn, DontDelete|Function, 0 },
    { "assert", (intptr_t)jsConsolePrototypeFunctionAssert, DontDelete|Function, 1 },
    { "profile", (intptr_t)jsConsolePrototypeFunctionProfile, DontDelete|Function, 1 },
    { "profileEnd", (intptr_t)jsConsolePrototypeFunctionProfileEnd, DontDelete|Function, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSConsolePrototypeTable = { 31, JSConsolePrototypeTableValues, 0 };

const ClassInfo JSConsolePrototype::s_info = { "ConsolePrototype", 0, &JSConsolePrototypeTable, 0 };

JSObject* JSConsolePrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSConsole.prototype]]");
    return KJS::cacheGlobalObject<JSConsolePrototype>(exec, prototypeIdentifier);
}

bool JSConsolePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSConsolePrototypeTable, this, propertyName, slot);
}

const ClassInfo JSConsole::s_info = { "Console", 0, 0 , 0 };

JSConsole::JSConsole(JSObject* prototype, Console* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSConsole::~JSConsole()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

JSValue* jsConsolePrototypeFunctionDebug(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(thisValue);
    return castedThisObj->debug(exec, args);
}

JSValue* jsConsolePrototypeFunctionError(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(thisValue);
    return castedThisObj->error(exec, args);
}

JSValue* jsConsolePrototypeFunctionInfo(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(thisValue);
    return castedThisObj->info(exec, args);
}

JSValue* jsConsolePrototypeFunctionLog(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(thisValue);
    return castedThisObj->log(exec, args);
}

JSValue* jsConsolePrototypeFunctionWarn(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(thisValue);
    return castedThisObj->warn(exec, args);
}

JSValue* jsConsolePrototypeFunctionAssert(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(thisValue);
    return castedThisObj->assertCondition(exec, args);
}

JSValue* jsConsolePrototypeFunctionProfile(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(thisValue);
    return castedThisObj->profile(exec, args);
}

JSValue* jsConsolePrototypeFunctionProfileEnd(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSConsole::s_info))
        return throwError(exec, TypeError);
    JSConsole* castedThisObj = static_cast<JSConsole*>(thisValue);
    return castedThisObj->profileEnd(exec, args);
}

KJS::JSValue* toJS(KJS::ExecState* exec, Console* obj)
{
    return cacheDOMObject<Console, JSConsole, JSConsolePrototype>(exec, obj);
}
Console* toConsole(KJS::JSValue* val)
{
    return val->isObject(&JSConsole::s_info) ? static_cast<JSConsole*>(val)->impl() : 0;
}

}
