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

#ifndef JSSVGForeignObjectElement_h
#define JSSVGForeignObjectElement_h


#if ENABLE(SVG) && ENABLE(SVG_FOREIGN_OBJECT)

#include "JSSVGElement.h"

namespace WebCore {

class SVGForeignObjectElement;

class JSSVGForeignObjectElement : public JSSVGElement {
    typedef JSSVGElement Base;
public:
    JSSVGForeignObjectElement(JSC::JSObject* prototype, SVGForeignObjectElement*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    JSC::JSValue* getValueProperty(JSC::ExecState*, int token) const;
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue*, JSC::PutPropertySlot&);
    void putValueProperty(JSC::ExecState*, int, JSC::JSValue*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    enum {
        // Attributes
        XAttrNum, YAttrNum, WidthAttrNum, HeightAttrNum, 
        RequiredFeaturesAttrNum, RequiredExtensionsAttrNum, SystemLanguageAttrNum, XmllangAttrNum, 
        XmlspaceAttrNum, ExternalResourcesRequiredAttrNum, ClassNameAttrNum, StyleAttrNum, 
        TransformAttrNum, NearestViewportElementAttrNum, FarthestViewportElementAttrNum, 
    };
};


class JSSVGForeignObjectElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    JSSVGForeignObjectElementPrototype(JSC::ExecState* exec)
        : JSC::JSObject(JSSVGElementPrototype::self(exec)) { }
};

// Functions

JSC::JSValue* jsSVGForeignObjectElementPrototypeFunctionHasExtension(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGForeignObjectElementPrototypeFunctionGetPresentationAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGForeignObjectElementPrototypeFunctionGetBBox(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGForeignObjectElementPrototypeFunctionGetCTM(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGForeignObjectElementPrototypeFunctionGetScreenCTM(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGForeignObjectElementPrototypeFunctionGetTransformToElement(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
} // namespace WebCore

#endif // ENABLE(SVG) && ENABLE(SVG_FOREIGN_OBJECT)

#endif