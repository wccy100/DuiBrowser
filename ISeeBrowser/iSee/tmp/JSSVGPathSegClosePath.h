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

#ifndef JSSVGPathSegClosePath_h
#define JSSVGPathSegClosePath_h


#if ENABLE(SVG)

#include "JSSVGPathSeg.h"

namespace WebCore {

class SVGPathSegClosePath;

class JSSVGPathSegClosePath : public JSSVGPathSeg {
    typedef JSSVGPathSeg Base;
public:
    JSSVGPathSegClosePath(JSC::JSObject* prototype, SVGPathSegClosePath*, SVGElement* context);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

};


class JSSVGPathSegClosePathPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    JSSVGPathSegClosePathPrototype(JSC::ExecState* exec)
        : JSC::JSObject(JSSVGPathSegPrototype::self(exec)) { }
};

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
