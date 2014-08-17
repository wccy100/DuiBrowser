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
#include "JSSVGPathSegArcRel.h"

#include <wtf/GetPtr.h>

#include "SVGPathSegArc.h"

#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegArcRel)

/* Hash table */

static const HashTableValue JSSVGPathSegArcRelTableValues[8] =
{
    { "x", (intptr_t)JSSVGPathSegArcRel::XAttrNum, DontDelete, 0 },
    { "y", (intptr_t)JSSVGPathSegArcRel::YAttrNum, DontDelete, 0 },
    { "r1", (intptr_t)JSSVGPathSegArcRel::R1AttrNum, DontDelete, 0 },
    { "r2", (intptr_t)JSSVGPathSegArcRel::R2AttrNum, DontDelete, 0 },
    { "angle", (intptr_t)JSSVGPathSegArcRel::AngleAttrNum, DontDelete, 0 },
    { "largeArcFlag", (intptr_t)JSSVGPathSegArcRel::LargeArcFlagAttrNum, DontDelete, 0 },
    { "sweepFlag", (intptr_t)JSSVGPathSegArcRel::SweepFlagAttrNum, DontDelete, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegArcRelTable = { 15, JSSVGPathSegArcRelTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegArcRelPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegArcRelPrototypeTable = { 0, JSSVGPathSegArcRelPrototypeTableValues, 0 };

const ClassInfo JSSVGPathSegArcRelPrototype::s_info = { "SVGPathSegArcRelPrototype", 0, &JSSVGPathSegArcRelPrototypeTable, 0 };

JSObject* JSSVGPathSegArcRelPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGPathSegArcRel.prototype]]");
    return JSC::cacheGlobalObject<JSSVGPathSegArcRelPrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSSVGPathSegArcRel::s_info = { "SVGPathSegArcRel", &JSSVGPathSeg::s_info, &JSSVGPathSegArcRelTable , 0 };

JSSVGPathSegArcRel::JSSVGPathSegArcRel(JSObject* prototype, SVGPathSegArcRel* impl, SVGElement* context)
    : JSSVGPathSeg(prototype, impl, context)
{
}

bool JSSVGPathSegArcRel::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegArcRel, Base>(exec, &JSSVGPathSegArcRelTable, this, propertyName, slot);
}

JSValue* JSSVGPathSegArcRel::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case XAttrNum: {
        SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(impl());
        return jsNumber(exec, imp->x());
    }
    case YAttrNum: {
        SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(impl());
        return jsNumber(exec, imp->y());
    }
    case R1AttrNum: {
        SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(impl());
        return jsNumber(exec, imp->r1());
    }
    case R2AttrNum: {
        SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(impl());
        return jsNumber(exec, imp->r2());
    }
    case AngleAttrNum: {
        SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(impl());
        return jsNumber(exec, imp->angle());
    }
    case LargeArcFlagAttrNum: {
        SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(impl());
        return jsBoolean(imp->largeArcFlag());
    }
    case SweepFlagAttrNum: {
        SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(impl());
        return jsBoolean(imp->sweepFlag());
    }
    }
    return 0;
}

void JSSVGPathSegArcRel::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegArcRel, Base>(exec, propertyName, value, &JSSVGPathSegArcRelTable, this, slot);
}

void JSSVGPathSegArcRel::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case XAttrNum: {
        SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(impl());
        imp->setX(value->toFloat(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    case YAttrNum: {
        SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(impl());
        imp->setY(value->toFloat(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    case R1AttrNum: {
        SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(impl());
        imp->setR1(value->toFloat(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    case R2AttrNum: {
        SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(impl());
        imp->setR2(value->toFloat(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    case AngleAttrNum: {
        SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(impl());
        imp->setAngle(value->toFloat(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    case LargeArcFlagAttrNum: {
        SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(impl());
        imp->setLargeArcFlag(value->toBoolean(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    case SweepFlagAttrNum: {
        SVGPathSegArcRel* imp = static_cast<SVGPathSegArcRel*>(impl());
        imp->setSweepFlag(value->toBoolean(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    }
}


}

#endif // ENABLE(SVG)