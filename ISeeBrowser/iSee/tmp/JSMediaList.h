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

#ifndef JSMediaList_h
#define JSMediaList_h

#include "JSDOMBinding.h"
#include <kjs/JSGlobalObject.h>
#include <kjs/ObjectPrototype.h>

namespace WebCore {

class MediaList;

class JSMediaList : public DOMObject {
    typedef DOMObject Base;
public:
    JSMediaList(JSC::JSObject* prototype, MediaList*);
    virtual ~JSMediaList();
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertySlot(JSC::ExecState*, unsigned propertyName, JSC::PropertySlot&);
    JSC::JSValue* getValueProperty(JSC::ExecState*, int token) const;
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue*, JSC::PutPropertySlot&);
    void putValueProperty(JSC::ExecState*, int, JSC::JSValue*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    virtual void getPropertyNames(JSC::ExecState*, JSC::PropertyNameArray&);
    static JSC::JSValue* getConstructor(JSC::ExecState*);
    enum {
        // Attributes
        MediaTextAttrNum, LengthAttrNum, 

        // The Constructor Attribute
        ConstructorAttrNum
    };
    MediaList* impl() const { return m_impl.get(); }

private:
    RefPtr<MediaList> m_impl;
    static JSC::JSValue* indexGetter(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
};

JSC::JSValue* toJS(JSC::ExecState*, MediaList*);
MediaList* toMediaList(JSC::JSValue*);

class JSMediaListPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    JSMediaListPrototype(JSC::ExecState* exec)
        : JSC::JSObject(exec->lexicalGlobalObject()->objectPrototype()) { }
};

// Functions

JSC::JSValue* jsMediaListPrototypeFunctionItem(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsMediaListPrototypeFunctionDeleteMedium(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsMediaListPrototypeFunctionAppendMedium(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
} // namespace WebCore

#endif
