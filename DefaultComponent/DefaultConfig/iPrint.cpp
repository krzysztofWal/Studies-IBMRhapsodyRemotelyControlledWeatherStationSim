/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iPrint
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\iPrint.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "iPrint.h"
//#[ ignore
#define MainPackage_iPrint_iPrint_SERIALIZE OM_NO_OP

#define MainPackage_iPrint_print_SERIALIZE OM_NO_OP
//#]

//## package MainPackage

//## class iPrint
iPrint::iPrint() {
    NOTIFY_CONSTRUCTOR(iPrint, iPrint(), 0, MainPackage_iPrint_iPrint_SERIALIZE);
}

iPrint::~iPrint() {
    NOTIFY_DESTRUCTOR(~iPrint, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(iPrint, MainPackage, MainPackage, false, OMAnimatediPrint)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iPrint.cpp
*********************************************************************/
