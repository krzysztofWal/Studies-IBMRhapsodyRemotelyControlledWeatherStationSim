/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iInitialize
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\iInitialize.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "iInitialize.h"
//#[ ignore
#define MainPackage_iInitialize_iInitialize_SERIALIZE OM_NO_OP

#define MainPackage_iInitialize_evInitializeWrap_SERIALIZE OM_NO_OP
//#]

//## package MainPackage

//## class iInitialize
iInitialize::iInitialize() {
    NOTIFY_CONSTRUCTOR(iInitialize, iInitialize(), 0, MainPackage_iInitialize_iInitialize_SERIALIZE);
}

iInitialize::~iInitialize() {
    NOTIFY_DESTRUCTOR(~iInitialize, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(iInitialize, MainPackage, MainPackage, false, OMAnimatediInitialize)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iInitialize.cpp
*********************************************************************/
