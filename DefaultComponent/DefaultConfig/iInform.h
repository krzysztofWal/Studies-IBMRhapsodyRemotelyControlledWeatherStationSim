/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: iInform
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\iInform.h
*********************************************************************/

#ifndef iInform_H
#define iInform_H

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

//## class iInform
class iInform {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatediInform;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    iInform();
    
    //## auto_generated
    virtual ~iInform() = 0;
    
    ////    Operations    ////
    
    //## operation inform()
    virtual void inform() = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatediInform : virtual public AOMInstance {
    DECLARE_META(iInform, OMAnimatediInform)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\iInform.h
*********************************************************************/
