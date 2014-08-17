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
#include "JSSVGPreserveAspectRatio.h"

#include <wtf/GetPtr.h>

#include "SVGPreserveAspectRatio.h"

#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPreserveAspectRatio)

/* Hash table */

static const HashTableValue JSSVGPreserveAspectRatioTableValues[4] =
{
    { "align", (intptr_t)JSSVGPreserveAspectRatio::AlignAttrNum, DontDelete, 0 },
    { "meetOrSlice", (intptr_t)JSSVGPreserveAspectRatio::MeetOrSliceAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSSVGPreserveAspectRatio::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPreserveAspectRatioTable = { 7, JSSVGPreserveAspectRatioTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSSVGPreserveAspectRatioConstructorTableValues[15] =
{
    { "SVG_PRESERVEASPECTRATIO_UNKNOWN", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_NONE", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMINYMIN", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMIN", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMAXYMIN", (intptr_t)4, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMINYMID", (intptr_t)5, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMID", (intptr_t)6, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMAXYMID", (intptr_t)7, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMINYMAX", (intptr_t)8, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMAX", (intptr_t)9, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMAXYMAX", (intptr_t)10, DontDelete|ReadOnly, 0 },
    { "SVG_MEETORSLICE_UNKNOWN", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "SVG_MEETORSLICE_MEET", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "SVG_MEETORSLICE_SLICE", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPreserveAspectRatioConstructorTable = { 127, JSSVGPreserveAspectRatioConstructorTableValues, 0 };

class JSSVGPreserveAspectRatioConstructor : public DOMObject {
public:
    JSSVGPreserveAspectRatioConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSSVGPreserveAspectRatioPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSSVGPreserveAspectRatioConstructor::s_info = { "SVGPreserveAspectRatioConstructor", 0, &JSSVGPreserveAspectRatioConstructorTable, 0 };

bool JSSVGPreserveAspectRatioConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPreserveAspectRatioConstructor, DOMObject>(exec, &JSSVGPreserveAspectRatioConstructorTable, this, propertyName, slot);
}

JSValue* JSSVGPreserveAspectRatioConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPreserveAspectRatioPrototypeTableValues[15] =
{
    { "SVG_PRESERVEASPECTRATIO_UNKNOWN", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_NONE", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMINYMIN", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMIN", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMAXYMIN", (intptr_t)4, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMINYMID", (intptr_t)5, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMID", (intptr_t)6, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMAXYMID", (intptr_t)7, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMINYMAX", (intptr_t)8, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMIDYMAX", (intptr_t)9, DontDelete|ReadOnly, 0 },
    { "SVG_PRESERVEASPECTRATIO_XMAXYMAX", (intptr_t)10, DontDelete|ReadOnly, 0 },
    { "SVG_MEETORSLICE_UNKNOWN", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "SVG_MEETORSLICE_MEET", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "SVG_MEETORSLICE_SLICE", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPreserveAspectRatioPrototypeTable = { 127, JSSVGPreserveAspectRatioPrototypeTableValues, 0 };

const ClassInfo JSSVGPreserveAspectRatioPrototype::s_info = { "SVGPreserveAspectRatioPrototype", 0, &JSSVGPreserveAspectRatioPrototypeTable, 0 };

JSObject* JSSVGPreserveAspectRatioPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGPreserveAspectRatio.prototype]]");
    return JSC::cacheGlobalObject<JSSVGPreserveAspectRatioPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGPreserveAspectRatioPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPreserveAspectRatioPrototype, JSObject>(exec, &JSSVGPreserveAspectRatioPrototypeTable, this, propertyName, slot);
}

JSValue* JSSVGPreserveAspectRatioPrototype::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

const ClassInfo JSSVGPreserveAspectRatio::s_info = { "SVGPreserveAspectRatio", 0, &JSSVGPreserveAspectRatioTable , 0 };

JSSVGPreserveAspectRatio::JSSVGPreserveAspectRatio(JSObject* prototype, SVGPreserveAspectRatio* impl, SVGElement* context)
    : DOMObject(prototype)
    , m_context(context)
    , m_impl(impl)
{
}

JSSVGPreserveAspectRatio::~JSSVGPreserveAspectRatio()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSSVGPreserveAspectRatio::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPreserveAspectRatio, Base>(exec, &JSSVGPreserveAspectRatioTable, this, propertyName, slot);
}

JSValue* JSSVGPreserveAspectRatio::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case AlignAttrNum: {
        SVGPreserveAspectRatio* imp = static_cast<SVGPreserveAspectRatio*>(impl());
        return jsNumber(exec, imp->align());
    }
    case MeetOrSliceAttrNum: {
        SVGPreserveAspectRatio* imp = static_cast<SVGPreserveAspectRatio*>(impl());
        return jsNumber(exec, imp->meetOrSlice());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSSVGPreserveAspectRatio::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPreserveAspectRatio, Base>(exec, propertyName, value, &JSSVGPreserveAspectRatioTable, this, slot);
}

void JSSVGPreserveAspectRatio::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case AlignAttrNum: {
        SVGPreserveAspectRatio* imp = static_cast<SVGPreserveAspectRatio*>(impl());
        imp->setAlign(value->toInt32(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    case MeetOrSliceAttrNum: {
        SVGPreserveAspectRatio* imp = static_cast<SVGPreserveAspectRatio*>(impl());
        imp->setMeetOrSlice(value->toInt32(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    }
}

JSValue* JSSVGPreserveAspectRatio::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[SVGPreserveAspectRatio.constructor]]");
    return JSC::cacheGlobalObject<JSSVGPreserveAspectRatioConstructor>(exec, *constructorIdentifier);
}

JSC::JSValue* toJS(JSC::ExecState* exec, SVGPreserveAspectRatio* obj, SVGElement* context)
{
    return cacheSVGDOMObject<SVGPreserveAspectRatio, JSSVGPreserveAspectRatio, JSSVGPreserveAspectRatioPrototype>(exec, obj, context);
}
SVGPreserveAspectRatio* toSVGPreserveAspectRatio(JSC::JSValue* val)
{
    return val->isObject(&JSSVGPreserveAspectRatio::s_info) ? static_cast<JSSVGPreserveAspectRatio*>(val)->impl() : 0;
}

}

#endif // ENABLE(SVG)
