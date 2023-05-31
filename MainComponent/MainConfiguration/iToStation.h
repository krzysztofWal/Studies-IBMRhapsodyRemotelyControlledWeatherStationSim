/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: MainComponent 
	Configuration 	: MainConfiguration
	Model Element	: iToStation
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: MainComponent\MainConfiguration\iToStation.h
*********************************************************************/

#ifndef iToStation_H
#define iToStation_H

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
//## operation print()
class StationData;

//## package MainPackage

//## class iToStation
class iToStation {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatediToStation;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    iToStation();
    
    //## auto_generated
    virtual ~iToStation() = 0;
    
    ////    Operations    ////
    
    //## operation evActivateWrap()
    virtual void evActivateWrap() = 0;
    
    //## operation evCalibrateWrap(int)
    virtual void evCalibrateWrap(int whichSensor) = 0;
    
    //## operation evConfirmPackageReceivalWrap()
    virtual void evConfirmPackageReceivalWrap() = 0;
    
    //## operation evGetInfoWrap()
    virtual void evGetInfoWrap() = 0;
    
    //## operation evInitializeWrap()
    virtual void evInitializeWrap() = 0;
    
    //## operation evToNonactiveWrap()
    virtual void evToNonactiveWrap() = 0;
    
    //## operation print()
    virtual StationData print() = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatediToStation : virtual public AOMInstance {
    DECLARE_META(iToStation, OMAnimatediToStation)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: MainComponent\MainConfiguration\iToStation.h
*********************************************************************/
