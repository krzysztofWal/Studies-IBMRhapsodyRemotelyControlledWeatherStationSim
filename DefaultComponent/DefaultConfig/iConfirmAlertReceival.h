/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iConfirmAlertReceival
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\iConfirmAlertReceival.h
*********************************************************************/

#ifndef iConfirmAlertReceival_H
#define iConfirmAlertReceival_H

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

//## class iConfirmAlertReceival
class iConfirmAlertReceival {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatediConfirmAlertReceival;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    iConfirmAlertReceival();
    
    //## auto_generated
    virtual ~iConfirmAlertReceival() = 0;
    
    ////    Operations    ////
    
    //## operation confirmAlert()
    virtual void confirmAlert() = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatediConfirmAlertReceival : virtual public AOMInstance {
    DECLARE_META(iConfirmAlertReceival, OMAnimatediConfirmAlertReceival)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iConfirmAlertReceival.h
*********************************************************************/
