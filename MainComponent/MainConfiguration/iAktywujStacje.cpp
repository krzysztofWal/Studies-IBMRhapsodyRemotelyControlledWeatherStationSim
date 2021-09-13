/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: MainComponent 
	Configuration 	: MainConfiguration
	Model Element	: iAktywujStacje
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: MainComponent\MainConfiguration\iAktywujStacje.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "iAktywujStacje.h"
//## operation print()
#include "StationData.h"
//#[ ignore
#define MainPackage_iAktywujStacje_iAktywujStacje_SERIALIZE OM_NO_OP

#define MainPackage_iAktywujStacje_evActivateWrap_SERIALIZE OM_NO_OP

#define MainPackage_iAktywujStacje_evCalibrateWrap_SERIALIZE aomsmethod->addAttribute("whichSensor", x2String(whichSensor));

#define MainPackage_iAktywujStacje_evConfirmPackageReceivalWrap_SERIALIZE OM_NO_OP

#define MainPackage_iAktywujStacje_evGetInfoWrap_SERIALIZE OM_NO_OP

#define MainPackage_iAktywujStacje_evInitializeWrap_SERIALIZE OM_NO_OP

#define MainPackage_iAktywujStacje_evToNonactiveWrap_SERIALIZE OM_NO_OP

#define MainPackage_iAktywujStacje_print_SERIALIZE OM_NO_OP
//#]

//## package MainPackage

//## class iAktywujStacje
iAktywujStacje::iAktywujStacje() {
    NOTIFY_CONSTRUCTOR(iAktywujStacje, iAktywujStacje(), 0, MainPackage_iAktywujStacje_iAktywujStacje_SERIALIZE);
}

iAktywujStacje::~iAktywujStacje() {
    NOTIFY_DESTRUCTOR(~iAktywujStacje, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(iAktywujStacje, MainPackage, MainPackage, false, OMAnimatediAktywujStacje)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MainComponent\MainConfiguration\iAktywujStacje.cpp
*********************************************************************/
