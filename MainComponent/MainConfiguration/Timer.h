/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: MainComponent 
	Configuration 	: MainConfiguration
	Model Element	: Timer
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: MainComponent\MainConfiguration\Timer.h
*********************************************************************/

#ifndef Timer_H
#define Timer_H

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
#include <ctime>
//## auto_generated
#include <math.h>
//## auto_generated
#include "Windows.h"
//## link itsController
class Controller;

//## package MainPackage

//## class Timer
class Timer : public OMThread, public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTimer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Timer(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Timer();
    
    ////    Operations    ////
    
    //## operation getTimestamp()
    unsigned long long getTimestamp();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    void setItsController(Controller* p_Controller);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);

private :

    //## auto_generated
    unsigned long long getVar() const;
    
    //## auto_generated
    void setVar(unsigned long long p_var);
    
    ////    Attributes    ////

protected :

    unsigned long long var;		//## attribute var
    
    ////    Relations and components    ////
    
    Controller* itsController;		//## link itsController
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _setItsController(Controller* p_Controller);
    
    //## auto_generated
    void _clearItsController();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // TIMER_STAND_BY:
    //## statechart_method
    inline bool TIMER_STAND_BY_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus TIMER_STAND_BY_handleEvent();
    
    // sendaction_8:
    //## statechart_method
    inline bool sendaction_8_IN() const;
    
    // sendaction_4:
    //## statechart_method
    inline bool sendaction_4_IN() const;
    
    // sendaction_1:
    //## statechart_method
    inline bool sendaction_1_IN() const;
    
    // INCREMENT:
    //## statechart_method
    inline bool INCREMENT_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Timer_Enum {
        OMNonState = 0,
        TIMER_STAND_BY = 1,
        sendaction_8 = 2,
        sendaction_4 = 3,
        sendaction_1 = 4,
        INCREMENT = 5
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTimer : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Timer, OMAnimatedTimer)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TIMER_STAND_BY_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void INCREMENT_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Timer::rootState_IN() const {
    return true;
}

inline bool Timer::TIMER_STAND_BY_IN() const {
    return rootState_subState == TIMER_STAND_BY;
}

inline bool Timer::sendaction_8_IN() const {
    return rootState_subState == sendaction_8;
}

inline bool Timer::sendaction_4_IN() const {
    return rootState_subState == sendaction_4;
}

inline bool Timer::sendaction_1_IN() const {
    return rootState_subState == sendaction_1;
}

inline bool Timer::INCREMENT_IN() const {
    return rootState_subState == INCREMENT;
}

#endif
/*********************************************************************
	File Path	: MainComponent\MainConfiguration\Timer.h
*********************************************************************/
