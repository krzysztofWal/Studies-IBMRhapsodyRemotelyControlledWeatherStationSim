/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iInform
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\iInform.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "iInform.h"
//#[ ignore
#define MainPackage_iInform_iInform_SERIALIZE OM_NO_OP

#define MainPackage_iInform_inform_SERIALIZE OM_NO_OP
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
	File Path	: DefaultComponent\DefaultConfig\iInform.cpp
*********************************************************************/