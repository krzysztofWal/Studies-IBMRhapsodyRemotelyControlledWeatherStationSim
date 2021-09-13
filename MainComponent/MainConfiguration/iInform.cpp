/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: MainComponent 
	Configuration 	: MainConfiguration
	Model Element	: iInform
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: MainComponent\MainConfiguration\iInform.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "iInform.h"
//#[ ignore
#define MainPackage_iInform_getInfo_SERIALIZE \
    aomsmethod->addAttribute("info", UNKNOWN2STRING(info));\
    aomsmethod->addAttribute("batteryLvl", x2String(batteryLvl));
#define MainPackage_iInform_iInform_SERIALIZE OM_NO_OP

#define MainPackage_iInform_evAlertWithdrawWrap_SERIALIZE OM_NO_OP

#define MainPackage_iInform_evBatteryAlarmWrap_SERIALIZE OM_NO_OP

#define MainPackage_iInform_evInformPackReadyWrap_SERIALIZE OM_NO_OP
//#]

//## package MainPackage

//## class iInform
iInform::iInform() {
    NOTIFY_CONSTRUCTOR(iInform, iInform(), 0, MainPackage_iInform_iInform_SERIALIZE);
}

iInform::~iInform() {
    NOTIFY_DESTRUCTOR(~iInform, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(iInform, MainPackage, MainPackage, false, OMAnimatediInform)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MainComponent\MainConfiguration\iInform.cpp
*********************************************************************/
