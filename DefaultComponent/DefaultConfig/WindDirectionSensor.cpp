/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WindDirectionSensor
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\WindDirectionSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "WindDirectionSensor.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define MainPackage_WindDirectionSensor_WindDirectionSensor_SERIALIZE OM_NO_OP

#define MainPackage_WindDirectionSensor_funcAb_SERIALIZE OM_NO_OP

#define MainPackage_WindDirectionSensor_getId_SERIALIZE OM_NO_OP

#define MainPackage_WindDirectionSensor_readSensorFunc_SERIALIZE OM_NO_OP
//#]

//## package MainPackage

//## class WindDirectionSensor
WindDirectionSensor::WindDirectionSensor(IOxfActive* theActiveContext) : id(WIND_DIR_SENS) {
    NOTIFY_ACTIVE_CONSTRUCTOR(WindDirectionSensor, WindDirectionSensor(), 0, MainPackage_WindDirectionSensor_WindDirectionSensor_SERIALIZE);
    setActiveContext(this, true);
    itsController = NULL;
    initStatechart();
}

WindDirectionSensor::~WindDirectionSensor() {
    NOTIFY_DESTRUCTOR(~WindDirectionSensor, false);
    cleanUpRelations();
}

void WindDirectionSensor::funcAb() {
    NOTIFY_OPERATION(funcAb, funcAb(), 0, MainPackage_WindDirectionSensor_funcAb_SERIALIZE);
    //#[ operation funcAb()
    //#]
}

int WindDirectionSensor::getId() {
    NOTIFY_OPERATION(getId, getId(), 0, MainPackage_WindDirectionSensor_getId_SERIALIZE);
    //#[ operation getId()
    return id;
    
    //#]
}

void WindDirectionSensor::readSensorFunc() {
    NOTIFY_OPERATION(readSensorFunc, readSensorFunc(), 0, MainPackage_WindDirectionSensor_readSensorFunc_SERIALIZE);
    //#[ operation readSensorFunc()
    recentValue = Sensor::gen(61.6,25.7,53.1,60,itsController->giveGenTime());
    //#]
}

Controller* WindDirectionSensor::getItsController() const {
    return itsController;
}

void WindDirectionSensor::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool WindDirectionSensor::startBehavior() {
    bool done = false;
    done = Sensor::startBehavior();
    return done;
}

void WindDirectionSensor::setId(int p_id) {
    id = p_id;
}

void WindDirectionSensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void WindDirectionSensor::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void WindDirectionSensor::__setItsController(Controller* p_Controller) {
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

void WindDirectionSensor::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void WindDirectionSensor::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void WindDirectionSensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.SENSOR_STAND_BY");
        rootState_subState = SENSOR_STAND_BY;
        rootState_active = SENSOR_STAND_BY;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus WindDirectionSensor::rootState_processEvent() {
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
void OMAnimatedWindDirectionSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("id", x2String(myReal->id));
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedWindDirectionSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}

void OMAnimatedWindDirectionSensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case WindDirectionSensor::SENSOR_STAND_BY:
        {
            SENSOR_STAND_BY_serializeStates(aomsState);
        }
        break;
        case WindDirectionSensor::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedWindDirectionSensor::SENSOR_STAND_BY_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SENSOR_STAND_BY");
}

void OMAnimatedWindDirectionSensor::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(WindDirectionSensor, MainPackage, false, Sensor, OMAnimatedSensor, OMAnimatedWindDirectionSensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WindDirectionSensor.cpp
*********************************************************************/
