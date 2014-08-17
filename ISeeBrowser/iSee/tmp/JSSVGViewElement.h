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

#ifndef JSSVGViewElement_h
#define JSSVGViewElement_h


#if ENABLE(SVG)

#include "JSSVGElement.h"

namespace WebCore {

class SVGViewElement;

class JSSVGViewElement : public JSSVGElement {
    typedef JSSVGElement Base;
public:
    JSSVGViewElement(JSC::JSObject* prototype, SVGViewElement*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    JSC::JSValue* getValueProperty(JSC::ExecState*, int token) const;
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue*, JSC::PutPropertySlot&);
    void putValueProperty(JSC::ExecState*, int, JSC::JSValue*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    enum {
        // Attributes
        ViewTargetAttrNum, ExternalResourcesRequiredAttrNum, ViewBoxAttrNum, PreserveAspectRatioAttrNum, 
        ZoomAndPanAttrNum
    };
};


class JSSVGViewElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    JSC::JSValue* getValueProperty(JSC::ExecState*, int token) const;
    JSSVGViewElementPrototype(JSC::ExecState* exec)
        : JSC::JSObject(JSSVGElementPrototype::self(exec)) { }
};

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
