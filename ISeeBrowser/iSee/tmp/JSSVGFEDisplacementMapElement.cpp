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


#if ENABLE(SVG) && ENABLE(SVG_FILTERS)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGFEDisplacementMapElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEDisplacementMapElement.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEDisplacementMapElement)

/* Hash table */

static const HashTableValue JSSVGFEDisplacementMapElementTableValues[14] =
{
    { "in1", (intptr_t)JSSVGFEDisplacementMapElement::In1AttrNum, DontDelete|ReadOnly, 0 },
    { "in2", (intptr_t)JSSVGFEDisplacementMapElement::In2AttrNum, DontDelete|ReadOnly, 0 },
    { "scale", (intptr_t)JSSVGFEDisplacementMapElement::ScaleAttrNum, DontDelete|ReadOnly, 0 },
    { "xChannelSelector", (intptr_t)JSSVGFEDisplacementMapElement::XChannelSelectorAttrNum, DontDelete|ReadOnly, 0 },
    { "yChannelSelector", (intptr_t)JSSVGFEDisplacementMapElement::YChannelSelectorAttrNum, DontDelete|ReadOnly, 0 },
    { "x", (intptr_t)JSSVGFEDisplacementMapElement::XAttrNum, DontDelete|ReadOnly, 0 },
    { "y", (intptr_t)JSSVGFEDisplacementMapElement::YAttrNum, DontDelete|ReadOnly, 0 },
    { "width", (intptr_t)JSSVGFEDisplacementMapElement::WidthAttrNum, DontDelete|ReadOnly, 0 },
    { "height", (intptr_t)JSSVGFEDisplacementMapElement::HeightAttrNum, DontDelete|ReadOnly, 0 },
    { "result", (intptr_t)JSSVGFEDisplacementMapElement::ResultAttrNum, DontDelete|ReadOnly, 0 },
    { "className", (intptr_t)JSSVGFEDisplacementMapElement::ClassNameAttrNum, DontDelete|ReadOnly, 0 },
    { "style", (intptr_t)JSSVGFEDisplacementMapElement::StyleAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSSVGFEDisplacementMapElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFEDisplacementMapElementTable = { 255, JSSVGFEDisplacementMapElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSSVGFEDisplacementMapElementConstructorTableValues[6] =
{
    { "SVG_CHANNEL_UNKNOWN", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "SVG_CHANNEL_R", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "SVG_CHANNEL_G", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "SVG_CHANNEL_B", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { "SVG_CHANNEL_A", (intptr_t)4, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFEDisplacementMapElementConstructorTable = { 15, JSSVGFEDisplacementMapElementConstructorTableValues, 0 };

class JSSVGFEDisplacementMapElementConstructor : public DOMObject {
public:
    JSSVGFEDisplacementMapElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSSVGFEDisplacementMapElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSSVGFEDisplacementMapElementConstructor::s_info = { "SVGFEDisplacementMapElementConstructor", 0, &JSSVGFEDisplacementMapElementConstructorTable, 0 };

bool JSSVGFEDisplacementMapElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEDisplacementMapElementConstructor, DOMObject>(exec, &JSSVGFEDisplacementMapElementConstructorTable, this, propertyName, slot);
}

JSValue* JSSVGFEDisplacementMapElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEDisplacementMapElementPrototypeTableValues[7] =
{
    { "SVG_CHANNEL_UNKNOWN", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "SVG_CHANNEL_R", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "SVG_CHANNEL_G", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "SVG_CHANNEL_B", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { "SVG_CHANNEL_A", (intptr_t)4, DontDelete|ReadOnly, 0 },
    { "getPresentationAttribute", (intptr_t)jsSVGFEDisplacementMapElementPrototypeFunctionGetPresentationAttribute, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFEDisplacementMapElementPrototypeTable = { 15, JSSVGFEDisplacementMapElementPrototypeTableValues, 0 };

const ClassInfo JSSVGFEDisplacementMapElementPrototype::s_info = { "SVGFEDisplacementMapElementPrototype", 0, &JSSVGFEDisplacementMapElementPrototypeTable, 0 };

JSObject* JSSVGFEDisplacementMapElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGFEDisplacementMapElement.prototype]]");
    return JSC::cacheGlobalObject<JSSVGFEDisplacementMapElementPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGFEDisplacementMapElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGFEDisplacementMapElementPrototype, JSObject>(exec, &JSSVGFEDisplacementMapElementPrototypeTable, this, propertyName, slot);
}

JSValue* JSSVGFEDisplacementMapElementPrototype::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

const ClassInfo JSSVGFEDisplacementMapElement::s_info = { "SVGFEDisplacementMapElement", &JSSVGElement::s_info, &JSSVGFEDisplacementMapElementTable , 0 };

JSSVGFEDisplacementMapElement::JSSVGFEDisplacementMapElement(JSObject* prototype, SVGFEDisplacementMapElement* impl)
    : JSSVGElement(prototype, impl)
{
}

bool JSSVGFEDisplacementMapElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEDisplacementMapElement, Base>(exec, &JSSVGFEDisplacementMapElementTable, this, propertyName, slot);
}

JSValue* JSSVGFEDisplacementMapElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case In1AttrNum: {
        SVGFEDisplacementMapElement* imp = static_cast<SVGFEDisplacementMapElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->in1Animated();
        return toJS(exec, obj.get(), imp);
    }
    case In2AttrNum: {
        SVGFEDisplacementMapElement* imp = static_cast<SVGFEDisplacementMapElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->in2Animated();
        return toJS(exec, obj.get(), imp);
    }
    case ScaleAttrNum: {
        SVGFEDisplacementMapElement* imp = static_cast<SVGFEDisplacementMapElement*>(impl());
        RefPtr<SVGAnimatedNumber> obj = imp->scaleAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case XChannelSelectorAttrNum: {
        SVGFEDisplacementMapElement* imp = static_cast<SVGFEDisplacementMapElement*>(impl());
        RefPtr<SVGAnimatedEnumeration> obj = imp->xChannelSelectorAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case YChannelSelectorAttrNum: {
        SVGFEDisplacementMapElement* imp = static_cast<SVGFEDisplacementMapElement*>(impl());
        RefPtr<SVGAnimatedEnumeration> obj = imp->yChannelSelectorAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case XAttrNum: {
        SVGFEDisplacementMapElement* imp = static_cast<SVGFEDisplacementMapElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case YAttrNum: {
        SVGFEDisplacementMapElement* imp = static_cast<SVGFEDisplacementMapElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case WidthAttrNum: {
        SVGFEDisplacementMapElement* imp = static_cast<SVGFEDisplacementMapElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case HeightAttrNum: {
        SVGFEDisplacementMapElement* imp = static_cast<SVGFEDisplacementMapElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ResultAttrNum: {
        SVGFEDisplacementMapElement* imp = static_cast<SVGFEDisplacementMapElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ClassNameAttrNum: {
        SVGFEDisplacementMapElement* imp = static_cast<SVGFEDisplacementMapElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StyleAttrNum: {
        SVGFEDisplacementMapElement* imp = static_cast<SVGFEDisplacementMapElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->style()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSSVGFEDisplacementMapElement::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[SVGFEDisplacementMapElement.constructor]]");
    return JSC::cacheGlobalObject<JSSVGFEDisplacementMapElementConstructor>(exec, *constructorIdentifier);
}

JSValue* jsSVGFEDisplacementMapElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGFEDisplacementMapElement::s_info))
        return throwError(exec, TypeError);
    JSSVGFEDisplacementMapElement* castedThisObj = static_cast<JSSVGFEDisplacementMapElement*>(thisValue);
    SVGFEDisplacementMapElement* imp = static_cast<SVGFEDisplacementMapElement*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FILTERS)
