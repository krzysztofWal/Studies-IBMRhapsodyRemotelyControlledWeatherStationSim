/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iCalibrateRequest
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\iCalibrateRequest.h
*********************************************************************/

#ifndef iCalibrateRequest_H
#define iCalibrateRequest_H

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

//## class iCalibrateRequest
class iCalibrateRequest {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatediCalibrateRequest;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    iCalibrateRequest();
    
    //## auto_generated
    virtual ~iCalibrateRequest() = 0;
    
    ////    Operations    ////
    
    //## operation evCalibrateWrap()
    virtual void evCalibrateWrap() = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatediCalibrateRequest : virtual public AOMInstance {
    DECLARE_META(iCalibrateRequest, OMAnimatediCalibrateRequest)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iCalibrateRequest.h
*********************************************************************/
