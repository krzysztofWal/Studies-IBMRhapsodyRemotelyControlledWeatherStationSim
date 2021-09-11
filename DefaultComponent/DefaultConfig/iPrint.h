/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iPrint
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\iPrint.h
*********************************************************************/

#ifndef iPrint_H
#define iPrint_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "MainPackage.h"
//## operation print()
#include "StationData.h"
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

//## class iPrint
class iPrint {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatediPrint;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    iPrint();
    
    //## auto_generated
    virtual ~iPrint() = 0;
    
    ////    Operations    ////
    
    //## operation print()
    virtual StationData print() = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatediPrint : virtual public AOMInstance {
    DECLARE_META(iPrint, OMAnimatediPrint)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iPrint.h
*********************************************************************/
