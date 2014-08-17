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
#include "JSSVGPathSegMovetoAbs.h"

#include <wtf/GetPtr.h>

#include "SVGPathSegMoveto.h"

#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegMovetoAbs)

/* Hash table */

static const HashTableValue JSSVGPathSegMovetoAbsTableValues[3] =
{
    { "x", (intptr_t)JSSVGPathSegMovetoAbs::XAttrNum, DontDelete, 0 },
    { "y", (intptr_t)JSSVGPathSegMovetoAbs::YAttrNum, DontDelete, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegMovetoAbsTable = { 1, JSSVGPathSegMovetoAbsTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegMovetoAbsPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegMovetoAbsPrototypeTable = { 0, JSSVGPathSegMovetoAbsPrototypeTableValues, 0 };

const ClassInfo JSSVGPathSegMovetoAbsPrototype::s_info = { "SVGPathSegMovetoAbsPrototype", 0, &JSSVGPathSegMovetoAbsPrototypeTable, 0 };

JSObject* JSSVGPathSegMovetoAbsPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGPathSegMovetoAbs.prototype]]");
    return JSC::cacheGlobalObject<JSSVGPathSegMovetoAbsPrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSSVGPathSegMovetoAbs::s_info = { "SVGPathSegMovetoAbs", &JSSVGPathSeg::s_info, &JSSVGPathSegMovetoAbsTable , 0 };

JSSVGPathSegMovetoAbs::JSSVGPathSegMovetoAbs(JSObject* prototype, SVGPathSegMovetoAbs* impl, SVGElement* context)
    : JSSVGPathSeg(prototype, impl, context)
{
}

bool JSSVGPathSegMovetoAbs::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegMovetoAbs, Base>(exec, &JSSVGPathSegMovetoAbsTable, this, propertyName, slot);
}

JSValue* JSSVGPathSegMovetoAbs::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case XAttrNum: {
        SVGPathSegMovetoAbs* imp = static_cast<SVGPathSegMovetoAbs*>(impl());
        return jsNumber(exec, imp->x());
    }
    case YAttrNum: {
        SVGPathSegMovetoAbs* imp = static_cast<SVGPathSegMovetoAbs*>(impl());
        return jsNumber(exec, imp->y());
    }
    }
    return 0;
}

void JSSVGPathSegMovetoAbs::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegMovetoAbs, Base>(exec, propertyName, value, &JSSVGPathSegMovetoAbsTable, this, slot);
}

void JSSVGPathSegMovetoAbs::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case XAttrNum: {
        SVGPathSegMovetoAbs* imp = static_cast<SVGPathSegMovetoAbs*>(impl());
        imp->setX(value->toFloat(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    case YAttrNum: {
        SVGPathSegMovetoAbs* imp = static_cast<SVGPathSegMovetoAbs*>(impl());
        imp->setY(value->toFloat(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    }
}


}

#endif // ENABLE(SVG)
