/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: MainComponent 
	Configuration 	: MainConfiguration
	Model Element	: TemperatureSensor
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: MainComponent\MainConfiguration\TemperatureSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "TemperatureSensor.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define MainPackage_TemperatureSensor_TemperatureSensor_SERIALIZE OM_NO_OP

#define MainPackage_TemperatureSensor_funcAb_SERIALIZE OM_NO_OP

#define MainPackage_TemperatureSensor_getId_SERIALIZE OM_NO_OP

#define MainPackage_TemperatureSensor_readSensorFunc_SERIALIZE OM_NO_OP
//#]

//## package MainPackage

//## class TemperatureSensor
TemperatureSensor::TemperatureSensor(IOxfActive* theActiveContext) : id(TEMP_SENS) {
    NOTIFY_ACTIVE_CONSTRUCTOR(TemperatureSensor, TemperatureSensor(), 0, MainPackage_TemperatureSensor_TemperatureSensor_SERIALIZE);
    setActiveContext(this, true);
    itsController = NULL;
    initStatechart();
}

TemperatureSensor::~TemperatureSensor() {
    NOTIFY_DESTRUCTOR(~TemperatureSensor, false);
    cleanUpRelations();
}

void TemperatureSensor::funcAb() {
    NOTIFY_OPERATION(funcAb, funcAb(), 0, MainPackage_TemperatureSensor_funcAb_SERIALIZE);
    //#[ operation funcAb()
    //#]
}

int TemperatureSensor::getId() {
    NOTIFY_OPERATION(getId, getId(), 0, MainPackage_TemperatureSensor_getId_SERIALIZE);
    //#[ operation getId()
    return id;
    //#]
}

void TemperatureSensor::readSensorFunc() {
    NOTIFY_OPERATION(readSensorFunc, readSensorFunc(), 0, MainPackage_TemperatureSensor_readSensorFunc_SERIALIZE);
    //#[ operation readSensorFunc()
    recentValue=Sensor::gen(3,30,itsController->giveGenTime());
    //#]
}

Controller* TemperatureSensor::getItsController() const {
    return itsController;
}

void TemperatureSensor::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool TemperatureSensor::startBehavior() {
    bool done = false;
    done = Sensor::startBehavior();
    return done;
}

void TemperatureSensor::setId(int p_id) {
    id = p_id;
}

void TemperatureSensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void TemperatureSensor::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void TemperatureSensor::__setItsController(Controller* p_Controller) {
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

void TemperatureSensor::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void TemperatureSensor::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void TemperatureSensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.SENSOR_STAND_BY");
        rootState_subState = SENSOR_STAND_BY;
        rootState_active = SENSOR_STAND_BY;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus TemperatureSensor::rootState_processEvent() {
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
                    itsController->GEN(evSendReadFromSensor(recentValue));
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
void OMAnimatedTemperatureSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("id", x2String(myReal->id));
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedTemperatureSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}

void OMAnimatedTemperatureSensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case TemperatureSensor::SENSOR_STAND_BY:
        {
            SENSOR_STAND_BY_serializeStates(aomsState);
        }
        break;
        case TemperatureSensor::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTemperatureSensor::SENSOR_STAND_BY_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SENSOR_STAND_BY");
}

void OMAnimatedTemperatureSensor::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(TemperatureSensor, MainPackage, false, Sensor, OMAnimatedSensor, OMAnimatedTemperatureSensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MainComponent\MainConfiguration\TemperatureSensor.cpp
*********************************************************************/
