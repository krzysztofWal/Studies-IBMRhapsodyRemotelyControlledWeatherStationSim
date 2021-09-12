/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iCalibrateRequest
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\iCalibrateRequest.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "iCalibrateRequest.h"
//#[ ignore
#define MainPackage_iCalibrateRequest_iCalibrateRequest_SERIALIZE OM_NO_OP

#define MainPackage_iCalibrateRequest_evCalibrateWrap_SERIALIZE aomsmethod->addAttribute("whichSensor", x2String(whichSensor));
//#]

//## package MainPackage

//## class iCalibrateRequest
iCalibrateRequest::iCalibrateRequest() {
    NOTIFY_CONSTRUCTOR(iCalibrateRequest, iCalibrateRequest(), 0, MainPackage_iCalibrateRequest_iCalibrateRequest_SERIALIZE);
}

iCalibrateRequest::~iCalibrateRequest() {
    NOTIFY_DESTRUCTOR(~iCalibrateRequest, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(iCalibrateRequest, MainPackage, MainPackage, false, OMAnimatediCalibrateRequest)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iCalibrateRequest.cpp
*********************************************************************/
