/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: MainComponent 
	Configuration 	: MainConfiguration
	Model Element	: iToStation
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: MainComponent\MainConfiguration\iToStation.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "iToStation.h"
//## operation print()
#include "StationData.h"
//#[ ignore
#define MainPackage_iToStation_iToStation_SERIALIZE OM_NO_OP

#define MainPackage_iToStation_evActivateWrap_SERIALIZE OM_NO_OP

#define MainPackage_iToStation_evCalibrateWrap_SERIALIZE aomsmethod->addAttribute("whichSensor", x2String(whichSensor));

#define MainPackage_iToStation_evConfirmPackageReceivalWrap_SERIALIZE OM_NO_OP

#define MainPackage_iToStation_evGetInfoWrap_SERIALIZE OM_NO_OP

#define MainPackage_iToStation_evInitializeWrap_SERIALIZE OM_NO_OP

#define MainPackage_iToStation_evToNonactiveWrap_SERIALIZE OM_NO_OP

#define MainPackage_iToStation_print_SERIALIZE OM_NO_OP
//#]

//## package MainPackage

//## class iToStation
iToStation::iToStation() {
    NOTIFY_CONSTRUCTOR(iToStation, iToStation(), 0, MainPackage_iToStation_iToStation_SERIALIZE);
}

iToStation::~iToStation() {
    NOTIFY_DESTRUCTOR(~iToStation, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(iToStation, MainPackage, MainPackage, false, OMAnimatediToStation)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MainComponent\MainConfiguration\iToStation.cpp
*********************************************************************/
