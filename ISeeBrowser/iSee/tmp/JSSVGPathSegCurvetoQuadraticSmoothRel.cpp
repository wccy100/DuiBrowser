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


#if ENABLE(SVG)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGPathSegCurvetoQuadraticSmoothRel.h"

#include <wtf/GetPtr.h>

#include "SVGPathSegCurvetoQuadraticSmooth.h"

#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegCurvetoQuadraticSmoothRel)

/* Hash table */

static const HashTableValue JSSVGPathSegCurvetoQuadraticSmoothRelTableValues[3] =
{
    { "x", (intptr_t)JSSVGPathSegCurvetoQuadraticSmoothRel::XAttrNum, DontDelete, 0 },
    { "y", (intptr_t)JSSVGPathSegCurvetoQuadraticSmoothRel::YAttrNum, DontDelete, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegCurvetoQuadraticSmoothRelTable = { 1, JSSVGPathSegCurvetoQuadraticSmoothRelTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegCurvetoQuadraticSmoothRelPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegCurvetoQuadraticSmoothRelPrototypeTable = { 0, JSSVGPathSegCurvetoQuadraticSmoothRelPrototypeTableValues, 0 };

const ClassInfo JSSVGPathSegCurvetoQuadraticSmoothRelPrototype::s_info = { "SVGPathSegCurvetoQuadraticSmoothRelPrototype", 0, &JSSVGPathSegCurvetoQuadraticSmoothRelPrototypeTable, 0 };

JSObject* JSSVGPathSegCurvetoQuadraticSmoothRelPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGPathSegCurvetoQuadraticSmoothRel.prototype]]");
    return JSC::cacheGlobalObject<JSSVGPathSegCurvetoQuadraticSmoothRelPrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSSVGPathSegCurvetoQuadraticSmoothRel::s_info = { "SVGPathSegCurvetoQuadraticSmoothRel", &JSSVGPathSeg::s_info, &JSSVGPathSegCurvetoQuadraticSmoothRelTable , 0 };

JSSVGPathSegCurvetoQuadraticSmoothRel::JSSVGPathSegCurvetoQuadraticSmoothRel(JSObject* prototype, SVGPathSegCurvetoQuadraticSmoothRel* impl, SVGElement* context)
    : JSSVGPathSeg(prototype, impl, context)
{
}

bool JSSVGPathSegCurvetoQuadraticSmoothRel::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegCurvetoQuadraticSmoothRel, Base>(exec, &JSSVGPathSegCurvetoQuadraticSmoothRelTable, this, propertyName, slot);
}

JSValue* JSSVGPathSegCurvetoQuadraticSmoothRel::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case XAttrNum: {
        SVGPathSegCurvetoQuadraticSmoothRel* imp = static_cast<SVGPathSegCurvetoQuadraticSmoothRel*>(impl());
        return jsNumber(exec, imp->x());
    }
    case YAttrNum: {
        SVGPathSegCurvetoQuadraticSmoothRel* imp = static_cast<SVGPathSegCurvetoQuadraticSmoothRel*>(impl());
        return jsNumber(exec, imp->y());
    }
    }
    return 0;
}

void JSSVGPathSegCurvetoQuadraticSmoothRel::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegCurvetoQuadraticSmoothRel, Base>(exec, propertyName, value, &JSSVGPathSegCurvetoQuadraticSmoothRelTable, this, slot);
}

void JSSVGPathSegCurvetoQuadraticSmoothRel::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case XAttrNum: {
        SVGPathSegCurvetoQuadraticSmoothRel* imp = static_cast<SVGPathSegCurvetoQuadraticSmoothRel*>(impl());
        imp->setX(value->toFloat(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    case YAttrNum: {
        SVGPathSegCurvetoQuadraticSmoothRel* imp = static_cast<SVGPathSegCurvetoQuadraticSmoothRel*>(impl());
        imp->setY(value->toFloat(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    }
}


}

#endif // ENABLE(SVG)