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

#ifndef JSSVGAnimateTransformElement_h
#define JSSVGAnimateTransformElement_h


#if ENABLE(SVG) && ENABLE(SVG_ANIMATION)

#include "JSSVGAnimationElement.h"

namespace WebCore {

class SVGAnimateTransformElement;

class JSSVGAnimateTransformElement : public JSSVGAnimationElement {
    typedef JSSVGAnimationElement Base;
public:
    JSSVGAnimateTransformElement(JSC::JSObject* prototype, SVGAnimateTransformElement*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

};


class JSSVGAnimateTransformElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    JSSVGAnimateTransformElementPrototype(JSC::ExecState* exec)
        : JSC::JSObject(JSSVGAnimationElementPrototype::self(exec)) { }
};

} // namespace WebCore

#endif // ENABLE(SVG) && ENABLE(SVG_ANIMATION)

#endif
