/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Annemometer
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\Annemometer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Annemometer.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define MainPackage_Annemometer_Annemometer_SERIALIZE OM_NO_OP

#define MainPackage_Annemometer_funcAb_SERIALIZE OM_NO_OP

#define MainPackage_Annemometer_getId_SERIALIZE OM_NO_OP

#define MainPackage_Annemometer_readSensorFunc_SERIALIZE OM_NO_OP
//#]

//## package MainPackage

//## class Annemometer
Annemometer::Annemometer(IOxfActive* theActiveContext) : id(WIND_SPEED_SENS) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Annemometer, Annemometer(), 0, MainPackage_Annemometer_Annemometer_SERIALIZE);
    setActiveContext(this, true);
    itsController = NULL;
    initStatechart();
}

Annemometer::~Annemometer() {
    NOTIFY_DESTRUCTOR(~Annemometer, false);
    cleanUpRelations();
}

void Annemometer::funcAb() {
    NOTIFY_OPERATION(funcAb, funcAb(), 0, MainPackage_Annemometer_funcAb_SERIALIZE);
    //#[ operation funcAb()
    //#]
}

int Annemometer::getId() {
    NOTIFY_OPERATION(getId, getId(), 0, MainPackage_Annemometer_getId_SERIALIZE);
    //#[ operation getId()
    return id;
    //#]
}

void Annemometer::readSensorFunc() {
    NOTIFY_OPERATION(readSensorFunc, readSensorFunc(), 0, MainPackage_Annemometer_readSensorFunc_SERIALIZE);
    //#[ operation readSensorFunc()
    recentValue = Sensor::gen(4.4,7,itsController->giveGenTime());
    //#]
}

Controller* Annemometer::getItsController() const {
    return itsController;
}

void Annemometer::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool Annemometer::startBehavior() {
    bool done = false;
    done = Sensor::startBehavior();
    return done;
}

void Annemometer::setId(int p_id) {
    id = p_id;
}

void Annemometer::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Annemometer::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void Annemometer::__setItsController(Controller* p_Controller) {
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

void Annemometer::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void Annemometer::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void Annemometer::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.SENSOR_STAND_BY");
        rootState_subState = SENSOR_STAND_BY;
        rootState_active = SENSOR_STAND_BY;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Annemometer::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State SENSOR_STAND_BY
        case SENSOR_STAND_BY:
        {
            if(IS_EVENT_TYPE_OF(evReadSensor_MainPackage_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.SENSOR_STAND_BY");
                    //#[ transition 1 
                    readSensorFunc();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_7");
                    pushNullTransition();
                    rootState_subState = sendaction_7;
                    rootState_active = sendaction_7;
                    //#[ state sendaction_7.(Entry) 
                    GEN(evSendReadFromSensor(recentValue));
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_7
        case sendaction_7:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_7");
                    NOTIFY_STATE_ENTERED("ROOT.SENSOR_STAND_BY");
                    rootState_subState = SENSOR_STAND_BY;
                    rootState_active = SENSOR_STAND_BY;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAnnemometer::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("id", x2String(myReal->id));
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedAnnemometer::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}

void OMAnimatedAnnemometer::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Annemometer::SENSOR_STAND_BY:
        {
            SENSOR_STAND_BY_serializeStates(aomsState);
        }
        break;
        case Annemometer::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedAnnemometer::SENSOR_STAND_BY_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SENSOR_STAND_BY");
}

void OMAnimatedAnnemometer::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Annemometer, MainPackage, false, Sensor, OMAnimatedSensor, OMAnimatedAnnemometer)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Annemometer.cpp
*********************************************************************/
