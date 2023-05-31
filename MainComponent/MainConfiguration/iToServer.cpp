/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: MainComponent 
	Configuration 	: MainConfiguration
	Model Element	: iToServer
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: MainComponent\MainConfiguration\iToServer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "iToServer.h"
//#[ ignore
#define MainPackage_iToServer_getInfo_SERIALIZE \
    aomsmethod->addAttribute("info", UNKNOWN2STRING(info));\
    aomsmethod->addAttribute("batteryLvl", x2String(batteryLvl));
#define MainPackage_iToServer_iToServer_SERIALIZE OM_NO_OP

#define MainPackage_iToServer_evAlertWithdrawWrap_SERIALIZE OM_NO_OP

#define MainPackage_iToServer_evBatteryAlarmWrap_SERIALIZE OM_NO_OP

#define MainPackage_iToServer_evInformPackReadyWrap_SERIALIZE OM_NO_OP
//#]

//## package MainPackage

//## class iToServer
iToServer::iToServer() {
    NOTIFY_CONSTRUCTOR(iToServer, iToServer(), 0, MainPackage_iToServer_iToServer_SERIALIZE);
}

iToServer::~iToServer() {
    NOTIFY_DESTRUCTOR(~iToServer, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(iToServer, MainPackage, MainPackage, false, OMAnimatediToServer)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MainComponent\MainConfiguration\iToServer.cpp
*********************************************************************/
