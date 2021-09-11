/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iInformation
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\iInformation.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "iInformation.h"
//#[ ignore
#define MainPackage_iInformation_iInformation_SERIALIZE OM_NO_OP

#define MainPackage_iInformation_evGetInfoWrap_SERIALIZE OM_NO_OP
//#]

//## package MainPackage

//## class iInformation
iInformation::iInformation() {
    NOTIFY_CONSTRUCTOR(iInformation, iInformation(), 0, MainPackage_iInformation_iInformation_SERIALIZE);
}

iInformation::~iInformation() {
    NOTIFY_DESTRUCTOR(~iInformation, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(iInformation, MainPackage, MainPackage, false, OMAnimatediInformation)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iInformation.cpp
*********************************************************************/
