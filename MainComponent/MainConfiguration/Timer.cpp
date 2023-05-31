/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: MainComponent 
	Configuration 	: MainConfiguration
	Model Element	: Timer
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: MainComponent\MainConfiguration\Timer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Timer.h"
//## link itsController
#include "Controller.h"
//#[ ignore
#define MainPackage_Timer_Timer_SERIALIZE OM_NO_OP

#define MainPackage_Timer_getTimestamp_SERIALIZE OM_NO_OP
//#]

//## package MainPackage

//## class Timer
Timer::Timer(IOxfActive* theActiveContext) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Timer, Timer(), 0, MainPackage_Timer_Timer_SERIALIZE);
    setActiveContext(this, true);
    itsController = NULL;
    initStatechart();
}

Timer::~Timer() {
    NOTIFY_DESTRUCTOR(~Timer, true);
    cleanUpRelations();
    cancelTimeouts();
}

unsigned long long Timer::getTimestamp() {
    NOTIFY_OPERATION(getTimestamp, getTimestamp(), 0, MainPackage_Timer_getTimestamp_SERIALIZE);
    //#[ operation getTimestamp()
    FILETIME ft_now;
    GetSystemTimeAsFileTime(&ft_now);
    
    _int64 ll_now = (LONGLONG)ft_now.dwLowDateTime + ((LONGLONG)(ft_now.dwHighDateTime) << 32LL);
    ll_now -= 116444736000000000LL;
    ll_now /= 10000;
    
    return ll_now;
    //#]
}

Controller* Timer::getItsController() const {
    return itsController;
}

void Timer::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool Timer::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void Timer::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Timer::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void Timer::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Timer::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

unsigned long long Timer::getVar() const {
    return var;
}

void Timer::setVar(unsigned long long p_var) {
    var = p_var;
}

void Timer::__setItsController(Controller* p_Controller) {
    itsController = p_Controller;
    if(p_Controller != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsController", p_Controller, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsController");
        }
}

void Timer::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Timer::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void Timer::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.TIMER_STAND_BY");
        rootState_subState = TIMER_STAND_BY;
        rootState_active = TIMER_STAND_BY;
        rootState_timeout = scheduleTimeout(50, "ROOT.TIMER_STAND_BY");
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Timer::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State TIMER_STAND_BY
        case TIMER_STAND_BY:
        {
            res = TIMER_STAND_BY_handleEvent();
        }
        break;
        // State sendaction_1
        case sendaction_1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_1");
                    //#[ transition 1 
                    getTimestamp();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TIMER_STAND_BY");
                    rootState_subState = TIMER_STAND_BY;
                    rootState_active = TIMER_STAND_BY;
                    rootState_timeout = scheduleTimeout(50, "ROOT.TIMER_STAND_BY");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_4
        case sendaction_4:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_4");
                    NOTIFY_STATE_ENTERED("ROOT.TIMER_STAND_BY");
                    rootState_subState = TIMER_STAND_BY;
                    rootState_active = TIMER_STAND_BY;
                    rootState_timeout = scheduleTimeout(50, "ROOT.TIMER_STAND_BY");
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State INCREMENT
        case INCREMENT:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.INCREMENT");
                    NOTIFY_STATE_ENTERED("ROOT.TIMER_STAND_BY");
                    rootState_subState = TIMER_STAND_BY;
                    rootState_active = TIMER_STAND_BY;
                    rootState_timeout = scheduleTimeout(50, "ROOT.TIMER_STAND_BY");
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_8
        case sendaction_8:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_8");
                    NOTIFY_STATE_ENTERED("ROOT.TIMER_STAND_BY");
                    rootState_subState = TIMER_STAND_BY;
                    rootState_active = TIMER_STAND_BY;
                    rootState_timeout = scheduleTimeout(50, "ROOT.TIMER_STAND_BY");
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus Timer::TIMER_STAND_BY_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == rootState_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.TIMER_STAND_BY");
                    NOTIFY_STATE_ENTERED("ROOT.INCREMENT");
                    pushNullTransition();
                    rootState_subState = INCREMENT;
                    rootState_active = INCREMENT;
                    //#[ state INCREMENT.(Entry) 
                    if (var < ULLONG_MAX - 50) {
                    	var += 50;
                    	if(var%5000 == 0) {
                    		GEN(evInitializeInTimer);
                    	} else if (var%3300 == 0) {
                    		GEN(evBatteryCheckInit);
                    	}                       
                    } else {
                    	var = 0;
                    }
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evBatteryCheckInit_MainPackage_id))
        {
            NOTIFY_TRANSITION_STARTED("7");
            cancel(rootState_timeout);
            NOTIFY_STATE_EXITED("ROOT.TIMER_STAND_BY");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_8");
            pushNullTransition();
            rootState_subState = sendaction_8;
            rootState_active = sendaction_8;
            //#[ state sendaction_8.(Entry) 
            itsController->GEN(evCheckBat);
            //#]
            NOTIFY_TRANSITION_TERMINATED("7");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evInitializeInTimer_MainPackage_id))
        {
            //## transition 4 
            if(!itsController->getAlertSet())
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.TIMER_STAND_BY");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_1");
                    pushNullTransition();
                    rootState_subState = sendaction_1;
                    rootState_active = sendaction_1;
                    //#[ state sendaction_1.(Entry) 
                    itsController->GEN(evTimerInitialize(getTimestamp()));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evRequestTime_MainPackage_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            cancel(rootState_timeout);
            NOTIFY_STATE_EXITED("ROOT.TIMER_STAND_BY");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_4");
            pushNullTransition();
            rootState_subState = sendaction_4;
            rootState_active = sendaction_4;
            //#[ state sendaction_4.(Entry) 
            itsController->GEN(evProvideTime(getTimestamp()));
            //#]
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTimer::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("var", x2String(myReal->var));
}

void OMAnimatedTimer::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
}

void OMAnimatedTimer::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Timer::TIMER_STAND_BY:
        {
            TIMER_STAND_BY_serializeStates(aomsState);
        }
        break;
        case Timer::sendaction_1:
        {
            sendaction_1_serializeStates(aomsState);
        }
        break;
        case Timer::sendaction_4:
        {
            sendaction_4_serializeStates(aomsState);
        }
        break;
        case Timer::INCREMENT:
        {
            INCREMENT_serializeStates(aomsState);
        }
        break;
        case Timer::sendaction_8:
        {
            sendaction_8_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTimer::TIMER_STAND_BY_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TIMER_STAND_BY");
}

void OMAnimatedTimer::sendaction_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_8");
}

void OMAnimatedTimer::sendaction_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_4");
}

void OMAnimatedTimer::sendaction_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_1");
}

void OMAnimatedTimer::INCREMENT_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.INCREMENT");
}
//#]

IMPLEMENT_REACTIVE_META_P(Timer, MainPackage, MainPackage, false, OMAnimatedTimer)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MainComponent\MainConfiguration\Timer.cpp
*********************************************************************/
