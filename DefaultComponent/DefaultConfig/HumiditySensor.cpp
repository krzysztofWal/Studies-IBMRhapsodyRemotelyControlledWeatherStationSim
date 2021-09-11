/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HumiditySensor
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\HumiditySensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "HumiditySensor.h"
//## auto_generated
#include "Controller.h"
//#[ ignore
#define MainPackage_HumiditySensor_HumiditySensor_SERIALIZE OM_NO_OP

#define MainPackage_HumiditySensor_funcAb_SERIALIZE OM_NO_OP

#define MainPackage_HumiditySensor_getId_SERIALIZE OM_NO_OP

#define MainPackage_HumiditySensor_readSensorFunc_SERIALIZE OM_NO_OP
//#]

//## package MainPackage

//## class HumiditySensor
HumiditySensor::HumiditySensor(IOxfActive* theActiveContext) : id(HUMID_SENS) {
    NOTIFY_ACTIVE_CONSTRUCTOR(HumiditySensor, HumiditySensor(), 0, MainPackage_HumiditySensor_HumiditySensor_SERIALIZE);
    setActiveContext(this, true);
    itsController = NULL;
    initStatechart();
}

HumiditySensor::~HumiditySensor() {
    NOTIFY_DESTRUCTOR(~HumiditySensor, false);
    cleanUpRelations();
}

void HumiditySensor::funcAb() {
    NOTIFY_OPERATION(funcAb, funcAb(), 0, MainPackage_HumiditySensor_funcAb_SERIALIZE);
    //#[ operation funcAb()
    //#]
}

int HumiditySensor::getId() {
    NOTIFY_OPERATION(getId, getId(), 0, MainPackage_HumiditySensor_getId_SERIALIZE);
    //#[ operation getId()
    return id;
    //#]
}

void HumiditySensor::readSensorFunc() {
    NOTIFY_OPERATION(readSensorFunc, readSensorFunc(), 0, MainPackage_HumiditySensor_readSensorFunc_SERIALIZE);
    //#[ operation readSensorFunc()
    recentValue=Sensor::gen(40,70,itsController->giveGenTime());
    //#]
}

Controller* HumiditySensor::getItsController() const {
    return itsController;
}

void HumiditySensor::setItsController(Controller* p_Controller) {
    _setItsController(p_Controller);
}

bool HumiditySensor::startBehavior() {
    bool done = false;
    done = Sensor::startBehavior();
    return done;
}

void HumiditySensor::setId(int p_id) {
    id = p_id;
}

void HumiditySensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void HumiditySensor::cleanUpRelations() {
    if(itsController != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsController");
            itsController = NULL;
        }
}

void HumiditySensor::__setItsController(Controller* p_Controller) {
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

void HumiditySensor::_setItsController(Controller* p_Controller) {
    __setItsController(p_Controller);
}

void HumiditySensor::_clearItsController() {
    NOTIFY_RELATION_CLEARED("itsController");
    itsController = NULL;
}

void HumiditySensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.OczekiwanieSensor");
        rootState_subState = OczekiwanieSensor;
        rootState_active = OczekiwanieSensor;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus HumiditySensor::rootState_processEvent() {
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
void OMAnimatedHumiditySensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("id", x2String(myReal->id));
    OMAnimatedSensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedHumiditySensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsController", false, true);
    if(myReal->itsController)
        {
            aomsRelations->ADD_ITEM(myReal->itsController);
        }
    OMAnimatedSensor::serializeRelations(aomsRelations);
}

void OMAnimatedHumiditySensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case HumiditySensor::OczekiwanieSensor:
        {
            OczekiwanieSensor_serializeStates(aomsState);
        }
        break;
        case HumiditySensor::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedHumiditySensor::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}

void OMAnimatedHumiditySensor::OczekiwanieSensor_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.OczekiwanieSensor");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(HumiditySensor, MainPackage, false, Sensor, OMAnimatedSensor, OMAnimatedHumiditySensor)

OMINIT_SUPERCLASS(Sensor, OMAnimatedSensor)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HumiditySensor.cpp
*********************************************************************/
