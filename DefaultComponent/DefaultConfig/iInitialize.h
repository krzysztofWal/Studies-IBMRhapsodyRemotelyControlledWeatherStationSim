/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iInitialize
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\iInitialize.h
*********************************************************************/

#ifndef iInitialize_H
#define iInitialize_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "MainPackage.h"
//## auto_generated
#include <map>
//## auto_generated
#include <utility>
//## auto_generated
#include <vector>
//## auto_generated
#include <fstream>
//## auto_generated
#include <climits>
//## auto_generated
#include <string>
//## auto_generated
#include <cstdlib>
//## auto_generated
#include <ctime>
//## auto_generated
#include <math.h>
//## package MainPackage

//## class iInitialize
class iInitialize {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatediInitialize;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    iInitialize();
    
    //## auto_generated
    virtual ~iInitialize() = 0;
    
    ////    Operations    ////
    
    //## operation evInitializeWrap()
    virtual void evInitializeWrap() = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatediInitialize : virtual public AOMInstance {
    DECLARE_META(iInitialize, OMAnimatediInitialize)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iInitialize.h
*********************************************************************/
