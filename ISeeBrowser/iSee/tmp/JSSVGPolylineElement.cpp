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
#include "JSSVGPolylineElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGPointList.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGElement.h"
#include "SVGPointList.h"
#include "SVGPolylineElement.h"
#include "SVGStringList.h"

#include <kjs/Error.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPolylineElement)

/* Hash table */

static const HashTableValue JSSVGPolylineElementTableValues[14] =
{
    { "requiredFeatures", (intptr_t)JSSVGPolylineElement::RequiredFeaturesAttrNum, DontDelete|ReadOnly, 0 },
    { "requiredExtensions", (intptr_t)JSSVGPolylineElement::RequiredExtensionsAttrNum, DontDelete|ReadOnly, 0 },
    { "systemLanguage", (intptr_t)JSSVGPolylineElement::SystemLanguageAttrNum, DontDelete|ReadOnly, 0 },
    { "xmllang", (intptr_t)JSSVGPolylineElement::XmllangAttrNum, DontDelete, 0 },
    { "xmlspace", (intptr_t)JSSVGPolylineElement::XmlspaceAttrNum, DontDelete, 0 },
    { "externalResourcesRequired", (intptr_t)JSSVGPolylineElement::ExternalResourcesRequiredAttrNum, DontDelete|ReadOnly, 0 },
    { "className", (intptr_t)JSSVGPolylineElement::ClassNameAttrNum, DontDelete|ReadOnly, 0 },
    { "style", (intptr_t)JSSVGPolylineElement::StyleAttrNum, DontDelete|ReadOnly, 0 },
    { "transform", (intptr_t)JSSVGPolylineElement::TransformAttrNum, DontDelete|ReadOnly, 0 },
    { "nearestViewportElement", (intptr_t)JSSVGPolylineElement::NearestViewportElementAttrNum, DontDelete|ReadOnly, 0 },
    { "farthestViewportElement", (intptr_t)JSSVGPolylineElement::FarthestViewportElementAttrNum, DontDelete|ReadOnly, 0 },
    { "points", (intptr_t)JSSVGPolylineElement::PointsAttrNum, DontDelete|ReadOnly, 0 },
    { "animatedPoints", (intptr_t)JSSVGPolylineElement::AnimatedPointsAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPolylineElementTable = { 127, JSSVGPolylineElementTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGPolylineElementPrototypeTableValues[7] =
{
    { "hasExtension", (intptr_t)jsSVGPolylineElementPrototypeFunctionHasExtension, DontDelete|Function, 1 },
    { "getPresentationAttribute", (intptr_t)jsSVGPolylineElementPrototypeFunctionGetPresentationAttribute, DontDelete|Function, 1 },
    { "getBBox", (intptr_t)jsSVGPolylineElementPrototypeFunctionGetBBox, DontDelete|Function, 0 },
    { "getCTM", (intptr_t)jsSVGPolylineElementPrototypeFunctionGetCTM, DontDelete|Function, 0 },
    { "getScreenCTM", (intptr_t)jsSVGPolylineElementPrototypeFunctionGetScreenCTM, DontDelete|Function, 0 },
    { "getTransformToElement", (intptr_t)jsSVGPolylineElementPrototypeFunctionGetTransformToElement, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPolylineElementPrototypeTable = { 2047, JSSVGPolylineElementPrototypeTableValues, 0 };

const ClassInfo JSSVGPolylineElementPrototype::s_info = { "SVGPolylineElementPrototype", 0, &JSSVGPolylineElementPrototypeTable, 0 };

JSObject* JSSVGPolylineElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGPolylineElement.prototype]]");
    return JSC::cacheGlobalObject<JSSVGPolylineElementPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGPolylineElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGPolylineElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGPolylineElement::s_info = { "SVGPolylineElement", &JSSVGElement::s_info, &JSSVGPolylineElementTable , 0 };

JSSVGPolylineElement::JSSVGPolylineElement(JSObject* prototype, SVGPolylineElement* impl)
    : JSSVGElement(prototype, impl)
{
}

bool JSSVGPolylineElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPolylineElement, Base>(exec, &JSSVGPolylineElementTable, this, propertyName, slot);
}

JSValue* JSSVGPolylineElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case RequiredFeaturesAttrNum: {
        SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->requiredFeatures()), imp);
    }
    case RequiredExtensionsAttrNum: {
        SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->requiredExtensions()), imp);
    }
    case SystemLanguageAttrNum: {
        SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->systemLanguage()), imp);
    }
    case XmllangAttrNum: {
        SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(impl());
        return jsString(exec, imp->xmllang());
    }
    case XmlspaceAttrNum: {
        SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(impl());
        return jsString(exec, imp->xmlspace());
    }
    case ExternalResourcesRequiredAttrNum: {
        SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(impl());
        RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ClassNameAttrNum: {
        SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StyleAttrNum: {
        SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->style()));
    }
    case TransformAttrNum: {
        SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(impl());
        RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case NearestViewportElementAttrNum: {
        SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->nearestViewportElement()));
    }
    case FarthestViewportElementAttrNum: {
        SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->farthestViewportElement()));
    }
    case PointsAttrNum: {
        SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->points()), imp);
    }
    case AnimatedPointsAttrNum: {
        SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->animatedPoints()), imp);
    }
    }
    return 0;
}

void JSSVGPolylineElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPolylineElement, Base>(exec, propertyName, value, &JSSVGPolylineElementTable, this, slot);
}

void JSSVGPolylineElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case XmllangAttrNum: {
        SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(impl());
        imp->setXmllang(value->toString(exec));
        break;
    }
    case XmlspaceAttrNum: {
        SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(impl());
        imp->setXmlspace(value->toString(exec));
        break;
    }
    }
}

JSValue* jsSVGPolylineElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPolylineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolylineElement* castedThisObj = static_cast<JSSVGPolylineElement*>(thisValue);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThisObj->impl());
    const UString& extension = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = jsBoolean(imp->hasExtension(extension));
    return result;
}

JSValue* jsSVGPolylineElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPolylineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolylineElement* castedThisObj = static_cast<JSSVGPolylineElement*>(thisValue);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}

JSValue* jsSVGPolylineElementPrototypeFunctionGetBBox(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPolylineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolylineElement* castedThisObj = static_cast<JSSVGPolylineElement*>(thisValue);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThisObj->impl());


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<FloatRect>::create(imp->getBBox()).get(), imp);
    return result;
}

JSValue* jsSVGPolylineElementPrototypeFunctionGetCTM(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPolylineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolylineElement* castedThisObj = static_cast<JSSVGPolylineElement*>(thisValue);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThisObj->impl());


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getCTM()).get(), imp);
    return result;
}

JSValue* jsSVGPolylineElementPrototypeFunctionGetScreenCTM(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPolylineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolylineElement* castedThisObj = static_cast<JSSVGPolylineElement*>(thisValue);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThisObj->impl());


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getScreenCTM()).get(), imp);
    return result;
}

JSValue* jsSVGPolylineElementPrototypeFunctionGetTransformToElement(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPolylineElement::s_info))
        return throwError(exec, TypeError);
    JSSVGPolylineElement* castedThisObj = static_cast<JSSVGPolylineElement*>(thisValue);
    SVGPolylineElement* imp = static_cast<SVGPolylineElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    SVGElement* element = toSVGElement(args.at(exec, 0));


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getTransformToElement(element, ec)).get(), imp);
    setDOMException(exec, ec);
    return result;
}


}

#endif // ENABLE(SVG)
