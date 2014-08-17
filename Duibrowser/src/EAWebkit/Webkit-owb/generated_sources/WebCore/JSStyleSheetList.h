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

#ifndef JSStyleSheetList_h
#define JSStyleSheetList_h

#include "JSDOMBinding.h"
#include <kjs/JSGlobalObject.h>
#include <kjs/ObjectPrototype.h>

namespace WebCore {

class StyleSheetList;

class JSStyleSheetList : public DOMObject {
    typedef DOMObject Base;
public:
    JSStyleSheetList(KJS::JSObject* prototype, StyleSheetList*);
    virtual ~JSStyleSheetList();
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::PropertySlot&);
    virtual bool getOwnPropertySlot(KJS::ExecState*, unsigned propertyName, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;

    virtual void getPropertyNames(KJS::ExecState*, KJS::PropertyNameArray&);
    static KJS::JSValue* getConstructor(KJS::ExecState*);
    enum {
        // Attributes
        LengthAttrNum, 

        // The Constructor Attribute
        ConstructorAttrNum
    };
    StyleSheetList* impl() const { return m_impl.get(); }

private:
    RefPtr<StyleSheetList> m_impl;
    static KJS::JSValue* indexGetter(KJS::ExecState*, const KJS::Identifier&, const KJS::PropertySlot&);
private:
    static bool canGetItemsForName(KJS::ExecState*, StyleSheetList*, const KJS::Identifier&);
    static KJS::JSValue* nameGetter(KJS::ExecState*, const KJS::Identifier&, const KJS::PropertySlot&);
};

KJS::JSValue* toJS(KJS::ExecState*, StyleSheetList*);
StyleSheetList* toStyleSheetList(KJS::JSValue*);

class JSStyleSheetListPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;
    bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    JSStyleSheetListPrototype(KJS::ExecState* exec)
        : KJS::JSObject(exec->lexicalGlobalObject()->objectPrototype()) { }
};

// Functions

KJS::JSValue* jsStyleSheetListPrototypeFunctionItem(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
} // namespace WebCore

#endif
