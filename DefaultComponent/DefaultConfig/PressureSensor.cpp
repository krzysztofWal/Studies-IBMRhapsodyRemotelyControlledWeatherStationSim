/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PressureSensor
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\PressureSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "PressureSensor.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define MainPackage_PressureSensor_PressureSensor_SERIALIZE OM_NO_OP

#define MainPackage_PressureSensor_funcAb_SERIALIZE OM_NO_OP

#define MainPackage_PressureSensor_getId_SERIALIZE OM_NO_OP

#define MainPackage_PressureSensor_readSensorFunc_SERIALIZE OM_NO_OP
//#]

//## package MainPackage

//## class PressureSensor
PressureSensor::PressureSensor(IOxfActive* theActiveContext) : id(PRESSURE_SENS) {
    NOTIFY_ACTIVE_CONSTRUCTOR(PressureSensor, PressureSensor(), 0, MainPackage_PressureSensor_PressureSensor_SERIALIZE);
    setActiveContext(this, true);
    itsController = NULL;
    initStatechart();
}

PressureSensor::~PressureSensor() {
    NOTIFY_DESTRUCTOR(~PressureSensor, false);
    cleanUpRelations();
}

void PressureSensor::funcAb() {
    NOTIFY_OPERATION(funcAb, funcAb(), 0, MainPackage_PressureSensor_funcAb_SERIALIZE);
    //#[ operation funcAb()
    //#]
}

int PressureSensor::getId() {
    NOTIFY_OPERATION(getId, getId(), 0, MainPackage_PressureSensor_getId_SERIALIZE);
    //#[ operation getId()
    return id;
    
    //#]
}

void PressureSensor::readSensorFunc() {
    NOTIFY_OPERATION(readSensorFunc, readSensorFunc(), 0, MainPackage_PressureSensor_readSensorFunc_SERIALIZE);
    //#[ operation readSensorFunc()
    recentValue=Sensor::gen(985,1015,itsController->giveGenTime());
    //#]
}

Controller* PressureSensor::getItsController() const {
    return itsController;
}

void PressureSensor::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool PressureSensor::startBehavior() {
    bool done = false;
    done = Sensor::startBehavior();
    return done;
}

void PressureSensor::setId(int p_id) {
    id = p_id;
}

void PressureSensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void PressureSensor::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void PressureSensor::__setItsController(Controller* p_Controller) {
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

void PressureSensor::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void PressureSensor::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void PressureSensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.OczekiwanieSensor");
        rootState_subState = OczekiwanieSensor;
        rootState_active = OczekiwanieSensor;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus PressureSensor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State OczekiwanieSensor
        case OczekiwanieSensor:
        {
            if(IS_EVENT_TYPE_OF(readSensorMess_MainPackage_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.OczekiwanieSensor");
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
                    NOTIFY_STATE_ENTERED("ROOT.OczekiwanieSensor");
                    rootState_subState = OczekiwanieSensor;
                    rootState_active = OczekiwanieSensor;
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
void OMAnimatedPressureSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("id", x2String(myReal->id));
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedPressureSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}

void OMAnimatedPressureSensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case PressureSensor::OczekiwanieSensor:
        {
            OczekiwanieSensor_serializeStates(aomsState);
        }
        break;
        case PressureSensor::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPressureSensor::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}

void OMAnimatedPressureSensor::OczekiwanieSensor_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.OczekiwanieSensor");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(PressureSensor, MainPackage, false, Sensor, OMAnimatedSensor, OMAnimatedPressureSensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PressureSensor.cpp
*********************************************************************/
