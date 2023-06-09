/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: MainComponent 
	Configuration 	: MainConfiguration
	Model Element	: Sensor
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: MainComponent\MainConfiguration\Sensor.h
*********************************************************************/

#ifndef Sensor_H
#define Sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "MainPackage.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
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
#include <math.h>
//## link itsController
class Controller;

//## package MainPackage

//## class Sensor
class Sensor : public OMThread, public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Sensor(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Sensor();
    
    ////    Operations    ////
    
    //## operation funcAb()
    virtual void funcAb() = 0;
    
    //## operation gen(double,double,unsigned long long)
    double gen(double a, double b, unsigned long long seed);
    
    //## operation getId()
    virtual int getId();
    
    //## operation readSensorFunc()
    virtual void readSensorFunc();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void setId(int p_id);
    
    //## auto_generated
    double getNum() const;
    
    //## auto_generated
    void setNum(double p_num);
    
    //## auto_generated
    double getRecentValue() const;
    
    //## auto_generated
    void setRecentValue(double p_recentValue);
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int id;		//## attribute id
    
    double num;		//## attribute num
    
    double recentValue;		//## attribute recentValue
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // SENSOR_STAND_BY:
    //## statechart_method
    inline bool SENSOR_STAND_BY_IN() const;
    
    // sendaction_7:
    //## statechart_method
    inline bool sendaction_7_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Sensor_Enum {
        OMNonState = 0,
        SENSOR_STAND_BY = 1,
        sendaction_7 = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensor : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Sensor, OMAnimatedSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SENSOR_STAND_BY_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_7_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Sensor::rootState_IN() const {
    return true;
}

inline bool Sensor::SENSOR_STAND_BY_IN() const {
    return rootState_subState == SENSOR_STAND_BY;
}

inline bool Sensor::sendaction_7_IN() const {
    return rootState_subState == sendaction_7;
}

#endif
/*********************************************************************
	File Path	: MainComponent\MainConfiguration\Sensor.h
*********************************************************************/
