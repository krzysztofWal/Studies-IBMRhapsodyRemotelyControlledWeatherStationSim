/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iConfirmDataReceival
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\iConfirmDataReceival.h
*********************************************************************/

#ifndef iConfirmDataReceival_H
#define iConfirmDataReceival_H

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

//## class iConfirmDataReceival
class iConfirmDataReceival {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatediConfirmDataReceival;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    iConfirmDataReceival();
    
    //## auto_generated
    virtual ~iConfirmDataReceival() = 0;
    
    ////    Operations    ////
    
    //## operation evConfirmPackageReceivalWrap()
    virtual void evConfirmPackageReceivalWrap() = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatediConfirmDataReceival : virtual public AOMInstance {
    DECLARE_META(iConfirmDataReceival, OMAnimatediConfirmDataReceival)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iConfirmDataReceival.h
*********************************************************************/
