/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Receiver
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\Receiver.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Receiver.h"
//#[ ignore
#define MainPackage_Receiver_Receiver_SERIALIZE OM_NO_OP

#define MainPackage_Receiver_evInformPackReadyWrap_SERIALIZE OM_NO_OP

#define MainPackage_Receiver_getInfo_SERIALIZE aomsmethod->addAttribute("info", UNKNOWN2STRING(info));

#define OMAnim_MainPackage_Receiver_setWhichToCalibrate_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_whichToCalibrate)

#define OMAnim_MainPackage_Receiver_setWhichToCalibrate_int_SERIALIZE_RET_VAL
//#]

//## package MainPackage

//## class Receiver
//#[ ignore
Receiver::port_3_C::port_3_C() : _p_(0) {
    itsIAktywujStacje = NULL;
    itsICalibrateRequest = NULL;
    itsIConfirmDataReceival = NULL;
    itsIInitialize = NULL;
    itsIPrint = NULL;
    itsIUspijStacje = NULL;
}

Receiver::port_3_C::~port_3_C() {
    cleanUpRelations();
}

void Receiver::port_3_C::evActivateWrap() {
    
    if (itsIAktywujStacje != NULL) {
        itsIAktywujStacje->evActivateWrap();
    }
    
}

void Receiver::port_3_C::evCalibrateWrap(int whichSensor) {
    
    if (itsICalibrateRequest != NULL) {
        itsICalibrateRequest->evCalibrateWrap(whichSensor);
    }
    
}

void Receiver::port_3_C::evConfirmPackageReceivalWrap() {
    
    if (itsIConfirmDataReceival != NULL) {
        itsIConfirmDataReceival->evConfirmPackageReceivalWrap();
    }
    
}

void Receiver::port_3_C::evGetInfoWrap() {
    
    if (itsIPrint != NULL) {
        itsIPrint->evGetInfoWrap();
    }
    
}

void Receiver::port_3_C::evInitializeWrap() {
    
    if (itsIInitialize != NULL) {
        itsIInitialize->evInitializeWrap();
    }
    
}

void Receiver::port_3_C::evToNonactiveWrap() {
    
    if (itsIUspijStacje != NULL) {
        itsIUspijStacje->evToNonactiveWrap();
    }
    
}

iAktywujStacje* Receiver::port_3_C::getItsIAktywujStacje() {
    return this;
}

iCalibrateRequest* Receiver::port_3_C::getItsICalibrateRequest() {
    return this;
}

iConfirmDataReceival* Receiver::port_3_C::getItsIConfirmDataReceival() {
    return this;
}

iInitialize* Receiver::port_3_C::getItsIInitialize() {
    return this;
}

iPrint* Receiver::port_3_C::getItsIPrint() {
    return this;
}

iUspijStacje* Receiver::port_3_C::getItsIUspijStacje() {
    return this;
}

Receiver::port_3_C* Receiver::port_3_C::getOutBound() {
    return this;
}

StationData Receiver::port_3_C::print() {
    StationData res;
    if (itsIPrint != NULL) {
        res = itsIPrint->print();
    }
    return res;
}

void Receiver::port_3_C::setItsIAktywujStacje(iAktywujStacje* p_iAktywujStacje) {
    itsIAktywujStacje = p_iAktywujStacje;
}

void Receiver::port_3_C::setItsICalibrateRequest(iCalibrateRequest* p_iCalibrateRequest) {
    itsICalibrateRequest = p_iCalibrateRequest;
}

void Receiver::port_3_C::setItsIConfirmDataReceival(iConfirmDataReceival* p_iConfirmDataReceival) {
    itsIConfirmDataReceival = p_iConfirmDataReceival;
}

void Receiver::port_3_C::setItsIInitialize(iInitialize* p_iInitialize) {
    itsIInitialize = p_iInitialize;
}

void Receiver::port_3_C::setItsIPrint(iPrint* p_iPrint) {
    itsIPrint = p_iPrint;
}

void Receiver::port_3_C::setItsIUspijStacje(iUspijStacje* p_iUspijStacje) {
    itsIUspijStacje = p_iUspijStacje;
}

void Receiver::port_3_C::cleanUpRelations() {
    if(itsIAktywujStacje != NULL)
        {
            itsIAktywujStacje = NULL;
        }
    if(itsICalibrateRequest != NULL)
        {
            itsICalibrateRequest = NULL;
        }
    if(itsIConfirmDataReceival != NULL)
        {
            itsIConfirmDataReceival = NULL;
        }
    if(itsIInitialize != NULL)
        {
            itsIInitialize = NULL;
        }
    if(itsIPrint != NULL)
        {
            itsIPrint = NULL;
        }
    if(itsIUspijStacje != NULL)
        {
            itsIUspijStacje = NULL;
        }
}

Receiver::port_5_C::port_5_C() : _p_(0) {
    itsIInform = NULL;
}

Receiver::port_5_C::~port_5_C() {
    cleanUpRelations();
}

void Receiver::port_5_C::connectReceiver(Receiver* part) {
    setItsIInform(part);
    
}

void Receiver::port_5_C::evInformPackReadyWrap() {
    
    if (itsIInform != NULL) {
        itsIInform->evInformPackReadyWrap();
    }
    
}

void Receiver::port_5_C::getInfo(
std::string info) {
    
    if (itsIInform != NULL) {
        itsIInform->getInfo(info);
    }
    
}

iInform* Receiver::port_5_C::getItsIInform() {
    return this;
}

void Receiver::port_5_C::setItsIInform(iInform* p_iInform) {
    itsIInform = p_iInform;
}

void Receiver::port_5_C::cleanUpRelations() {
    if(itsIInform != NULL)
        {
            itsIInform = NULL;
        }
}
//#]

Receiver::Receiver(IOxfActive* theActiveContext) : iterator(0) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Receiver, Receiver(), 0, MainPackage_Receiver_Receiver_SERIALIZE);
    setActiveContext(this, true);
    initRelations();
    initStatechart();
}

Receiver::~Receiver() {
    NOTIFY_DESTRUCTOR(~Receiver, false);
    cancelTimeouts();
}

void Receiver::evInformPackReadyWrap() {
    NOTIFY_OPERATION(evInformPackReadyWrap, evInformPackReadyWrap(), 0, MainPackage_Receiver_evInformPackReadyWrap_SERIALIZE);
    //#[ operation evInformPackReadyWrap()
    GEN(evInform);
    //std::cout << "contr to rec - 've got data you can have them" << std::endl;
    //#]
}

void Receiver::getInfo(std::string info) {
    NOTIFY_OPERATION(getInfo, getInfo(std::string), 1, MainPackage_Receiver_getInfo_SERIALIZE);
    //#[ operation getInfo(std::string)
    std::cout << info << std::endl;
    //#]
}

Receiver::port_3_C* Receiver::getPort_3() const {
    return (Receiver::port_3_C*) &port_3;
}

Receiver::port_3_C* Receiver::get_port_3() const {
    return (Receiver::port_3_C*) &port_3;
}

Receiver::port_5_C* Receiver::getPort_5() const {
    return (Receiver::port_5_C*) &port_5;
}

Receiver::port_5_C* Receiver::get_port_5() const {
    return (Receiver::port_5_C*) &port_5;
}

void Receiver::setWhichToCalibrate(int p_whichToCalibrate) {
    whichToCalibrate = p_whichToCalibrate;
    NOTIFY_SET_OPERATION;
}

bool Receiver::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

std::vector<StationData> Receiver::getDataReceived() const {
    return dataReceived;
}

void Receiver::setDataReceived(std::vector<StationData> p_dataReceived) {
    dataReceived = p_dataReceived;
}

int Receiver::getIterator() const {
    return iterator;
}

void Receiver::setIterator(int p_iterator) {
    iterator = p_iterator;
}

int Receiver::getWhichToCalibrate() const {
    return whichToCalibrate;
}

void Receiver::initRelations() {
    if (get_port_5() != NULL) {
        get_port_5()->connectReceiver(this);
    }
}

void Receiver::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Receiver::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Receiver::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Receiver::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.STANDBY");
        rootState_subState = STANDBY;
        rootState_active = STANDBY;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Receiver::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State STANDBY
        case STANDBY:
        {
            res = STANDBY_handleEvent();
        }
        break;
        // State DEMAND_SEND
        case DEMAND_SEND:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.DEMAND_SEND");
                            NOTIFY_STATE_ENTERED("ROOT.DEMAND_SEND");
                            rootState_subState = DEMAND_SEND;
                            rootState_active = DEMAND_SEND;
                            //#[ state DEMAND_SEND.(Entry) 
                            OUT_PORT(port_3)->evInitializeWrap();
                            //#]
                            rootState_timeout = scheduleTimeout(600, "ROOT.DEMAND_SEND");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evInform_MainPackage_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.DEMAND_SEND");
                    //#[ transition 1 
                    dataReceived.emplace_back(OUT_PORT(port_3)->print());
                    OUT_PORT(port_3)->evConfirmPackageReceivalWrap();
                    std::cout << "Debug: receiverStates: received package\n";
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.STANDBY");
                    rootState_subState = STANDBY;
                    rootState_active = STANDBY;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State CALIBRATE_SEND
        case CALIBRATE_SEND:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.CALIBRATE_SEND");
                    NOTIFY_STATE_ENTERED("ROOT.STANDBY");
                    rootState_subState = STANDBY;
                    rootState_active = STANDBY;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State DESACTIVATE_SEND
        case DESACTIVATE_SEND:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.DESACTIVATE_SEND");
                    NOTIFY_STATE_ENTERED("ROOT.STANDBY");
                    rootState_subState = STANDBY;
                    rootState_active = STANDBY;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ACTIVATE_SEND
        case ACTIVATE_SEND:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ACTIVATE_SEND");
                    NOTIFY_STATE_ENTERED("ROOT.STANDBY");
                    rootState_subState = STANDBY;
                    rootState_active = STANDBY;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
        }
        break;
        // State INFO_DEMAND_SEND
        case INFO_DEMAND_SEND:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.INFO_DEMAND_SEND");
                    NOTIFY_STATE_ENTERED("ROOT.STANDBY");
                    rootState_subState = STANDBY;
                    rootState_active = STANDBY;
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus Receiver::STANDBY_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evServGoIntoInactive_MainPackage_id))
        {
            NOTIFY_TRANSITION_STARTED("6");
            NOTIFY_STATE_EXITED("ROOT.STANDBY");
            NOTIFY_STATE_ENTERED("ROOT.DESACTIVATE_SEND");
            pushNullTransition();
            rootState_subState = DESACTIVATE_SEND;
            rootState_active = DESACTIVATE_SEND;
            //#[ state DESACTIVATE_SEND.(Entry) 
            OUT_PORT(port_3)->evToNonactiveWrap();
            //#]
            NOTIFY_TRANSITION_TERMINATED("6");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evServCalibrate_MainPackage_id))
        {
            NOTIFY_TRANSITION_STARTED("3");
            NOTIFY_STATE_EXITED("ROOT.STANDBY");
            NOTIFY_STATE_ENTERED("ROOT.CALIBRATE_SEND");
            pushNullTransition();
            rootState_subState = CALIBRATE_SEND;
            rootState_active = CALIBRATE_SEND;
            //#[ state CALIBRATE_SEND.(Entry) 
            OUT_PORT(port_3)->evCalibrateWrap(whichToCalibrate);
            //#]
            NOTIFY_TRANSITION_TERMINATED("3");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evInform_MainPackage_id))
        {
            NOTIFY_TRANSITION_STARTED("12");
            NOTIFY_STATE_EXITED("ROOT.STANDBY");
            //#[ transition 12 
            dataReceived.emplace_back(OUT_PORT(port_3)->print());
            OUT_PORT(port_3)->evConfirmPackageReceivalWrap();
            std::cout << "Debug: receiverStates: received package\n";
            //#]
            NOTIFY_STATE_ENTERED("ROOT.STANDBY");
            rootState_subState = STANDBY;
            rootState_active = STANDBY;
            NOTIFY_TRANSITION_TERMINATED("12");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evServGetInfo_MainPackage_id))
        {
            NOTIFY_TRANSITION_STARTED("10");
            NOTIFY_STATE_EXITED("ROOT.STANDBY");
            NOTIFY_STATE_ENTERED("ROOT.INFO_DEMAND_SEND");
            pushNullTransition();
            rootState_subState = INFO_DEMAND_SEND;
            rootState_active = INFO_DEMAND_SEND;
            //#[ state INFO_DEMAND_SEND.(Entry) 
            OUT_PORT(port_3)->evGetInfoWrap();
            //#]
            NOTIFY_TRANSITION_TERMINATED("10");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evServerDemandPacket_MainPackage_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            NOTIFY_STATE_EXITED("ROOT.STANDBY");
            NOTIFY_STATE_ENTERED("ROOT.DEMAND_SEND");
            rootState_subState = DEMAND_SEND;
            rootState_active = DEMAND_SEND;
            //#[ state DEMAND_SEND.(Entry) 
            OUT_PORT(port_3)->evInitializeWrap();
            //#]
            rootState_timeout = scheduleTimeout(600, "ROOT.DEMAND_SEND");
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evServerActivate_MainPackage_id))
        {
            NOTIFY_TRANSITION_STARTED("8");
            NOTIFY_STATE_EXITED("ROOT.STANDBY");
            NOTIFY_STATE_ENTERED("ROOT.ACTIVATE_SEND");
            pushNullTransition();
            rootState_subState = ACTIVATE_SEND;
            rootState_active = ACTIVATE_SEND;
            //#[ state ACTIVATE_SEND.(Entry) 
            OUT_PORT(port_3)->evActivateWrap();
            //#]
            NOTIFY_TRANSITION_TERMINATED("8");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedReceiver::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("dataReceived", UNKNOWN2STRING(myReal->dataReceived));
    aomsAttributes->addAttribute("iterator", x2String(myReal->iterator));
    aomsAttributes->addAttribute("whichToCalibrate", x2String(myReal->whichToCalibrate));
    OMAnimatediInform::serializeAttributes(aomsAttributes);
}

void OMAnimatedReceiver::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatediInform::serializeRelations(aomsRelations);
}

void OMAnimatedReceiver::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Receiver::STANDBY:
        {
            STANDBY_serializeStates(aomsState);
        }
        break;
        case Receiver::DEMAND_SEND:
        {
            DEMAND_SEND_serializeStates(aomsState);
        }
        break;
        case Receiver::CALIBRATE_SEND:
        {
            CALIBRATE_SEND_serializeStates(aomsState);
        }
        break;
        case Receiver::DESACTIVATE_SEND:
        {
            DESACTIVATE_SEND_serializeStates(aomsState);
        }
        break;
        case Receiver::ACTIVATE_SEND:
        {
            ACTIVATE_SEND_serializeStates(aomsState);
        }
        break;
        case Receiver::INFO_DEMAND_SEND:
        {
            INFO_DEMAND_SEND_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedReceiver::STANDBY_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.STANDBY");
}

void OMAnimatedReceiver::INFO_DEMAND_SEND_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.INFO_DEMAND_SEND");
}

void OMAnimatedReceiver::DESACTIVATE_SEND_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DESACTIVATE_SEND");
}

void OMAnimatedReceiver::DEMAND_SEND_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DEMAND_SEND");
}

void OMAnimatedReceiver::CALIBRATE_SEND_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CALIBRATE_SEND");
}

void OMAnimatedReceiver::ACTIVATE_SEND_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ACTIVATE_SEND");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Receiver, MainPackage, false, iInform, OMAnimatediInform, OMAnimatedReceiver)

OMINIT_SUPERCLASS(iInform, OMAnimatediInform)

OMREGISTER_REACTIVE_CLASS

IMPLEMENT_META_OP(OMAnimatedReceiver, MainPackage_Receiver_setWhichToCalibrate_int, "setWhichToCalibrate", FALSE, "setWhichToCalibrate(int)", 1)

IMPLEMENT_OP_CALL(MainPackage_Receiver_setWhichToCalibrate_int, Receiver, setWhichToCalibrate(p_whichToCalibrate), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Receiver.cpp
*********************************************************************/
