/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: MainComponent 
	Configuration 	: MainConfiguration
	Model Element	: Receiver
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: MainComponent\MainConfiguration\Receiver.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Receiver.h"
//#[ ignore
#define MainPackage_Receiver_getInfo_SERIALIZE \
    aomsmethod->addAttribute("info", UNKNOWN2STRING(info));\
    aomsmethod->addAttribute("batteryLvl", x2String(batteryLvl));
#define MainPackage_Receiver_Receiver_SERIALIZE OM_NO_OP

#define MainPackage_Receiver_evAlertWithdrawWrap_SERIALIZE OM_NO_OP

#define MainPackage_Receiver_evBatteryAlarmWrap_SERIALIZE OM_NO_OP

#define MainPackage_Receiver_evInformPackReadyWrap_SERIALIZE OM_NO_OP

#define OMAnim_MainPackage_Receiver_setWhichToCalibrate_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_whichToCalibrate)

#define OMAnim_MainPackage_Receiver_setWhichToCalibrate_int_SERIALIZE_RET_VAL
//#]

//## package MainPackage

//## class Receiver
//#[ ignore
Receiver::port_3_C::port_3_C() : _p_(0) {
    itsIToStation = NULL;
}

Receiver::port_3_C::~port_3_C() {
    cleanUpRelations();
}

void Receiver::port_3_C::evActivateWrap() {
    
    if (itsIToStation != NULL) {
        itsIToStation->evActivateWrap();
    }
    
}

void Receiver::port_3_C::evCalibrateWrap(int whichSensor) {
    
    if (itsIToStation != NULL) {
        itsIToStation->evCalibrateWrap(whichSensor);
    }
    
}

void Receiver::port_3_C::evConfirmPackageReceivalWrap() {
    
    if (itsIToStation != NULL) {
        itsIToStation->evConfirmPackageReceivalWrap();
    }
    
}

void Receiver::port_3_C::evGetInfoWrap() {
    
    if (itsIToStation != NULL) {
        itsIToStation->evGetInfoWrap();
    }
    
}

void Receiver::port_3_C::evInitializeWrap() {
    
    if (itsIToStation != NULL) {
        itsIToStation->evInitializeWrap();
    }
    
}

void Receiver::port_3_C::evToNonactiveWrap() {
    
    if (itsIToStation != NULL) {
        itsIToStation->evToNonactiveWrap();
    }
    
}

iToStation* Receiver::port_3_C::getItsIToStation() {
    return this;
}

iToStation* Receiver::port_3_C::getOutBound() {
    return this;
}

StationData Receiver::port_3_C::print() {
    StationData res;
    if (itsIToStation != NULL) {
        res = itsIToStation->print();
    }
    return res;
}

void Receiver::port_3_C::setItsIToStation(iToStation* p_iToStation) {
    itsIToStation = p_iToStation;
}

void Receiver::port_3_C::cleanUpRelations() {
    if(itsIToStation != NULL)
        {
            itsIToStation = NULL;
        }
}

Receiver::port_5_C::port_5_C() : _p_(0) {
    itsIToServer = NULL;
}

Receiver::port_5_C::~port_5_C() {
    cleanUpRelations();
}

void Receiver::port_5_C::connectReceiver(Receiver* part) {
    setItsIToServer(part);
    
}

void Receiver::port_5_C::evAlertWithdrawWrap() {
    
    if (itsIToServer != NULL) {
        itsIToServer->evAlertWithdrawWrap();
    }
    
}

void Receiver::port_5_C::evBatteryAlarmWrap() {
    
    if (itsIToServer != NULL) {
        itsIToServer->evBatteryAlarmWrap();
    }
    
}

void Receiver::port_5_C::evInformPackReadyWrap() {
    
    if (itsIToServer != NULL) {
        itsIToServer->evInformPackReadyWrap();
    }
    
}

void Receiver::port_5_C::getInfo(
std::string info, int batteryLvl) {
    
    if (itsIToServer != NULL) {
        itsIToServer->getInfo(info,batteryLvl);
    }
    
}

iToServer* Receiver::port_5_C::getItsIToServer() {
    return this;
}

void Receiver::port_5_C::setItsIToServer(iToServer* p_iToServer) {
    itsIToServer = p_iToServer;
}

void Receiver::port_5_C::cleanUpRelations() {
    if(itsIToServer != NULL)
        {
            itsIToServer = NULL;
        }
}
//#]

Receiver::Receiver(IOxfActive* theActiveContext) : batteryAlarm(false) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Receiver, Receiver(), 0, MainPackage_Receiver_Receiver_SERIALIZE);
    setActiveContext(this, true);
    initRelations();
    initStatechart();
}

Receiver::~Receiver() {
    NOTIFY_DESTRUCTOR(~Receiver, false);
    cancelTimeouts();
}

void Receiver::evAlertWithdrawWrap() {
    NOTIFY_OPERATION(evAlertWithdrawWrap, evAlertWithdrawWrap(), 0, MainPackage_Receiver_evAlertWithdrawWrap_SERIALIZE);
    //#[ operation evAlertWithdrawWrap()
    GEN(evAlertWithdraw);
    //#]
}

void Receiver::evBatteryAlarmWrap() {
    NOTIFY_OPERATION(evBatteryAlarmWrap, evBatteryAlarmWrap(), 0, MainPackage_Receiver_evBatteryAlarmWrap_SERIALIZE);
    //#[ operation evBatteryAlarmWrap()
    GEN(evBatteryAlarm);
    //#]
}

void Receiver::evInformPackReadyWrap() {
    NOTIFY_OPERATION(evInformPackReadyWrap, evInformPackReadyWrap(), 0, MainPackage_Receiver_evInformPackReadyWrap_SERIALIZE);
    //#[ operation evInformPackReadyWrap()
    GEN(evInform);
    //std::cout << "contr to rec - 've got data you can have them" << std::endl;
    //#]
}

void Receiver::getInfo(std::string info, int batteryLvl) {
    NOTIFY_OPERATION(getInfo, getInfo(std::string,int), 2, MainPackage_Receiver_getInfo_SERIALIZE);
    //#[ operation getInfo(std::string,int)
    std::cout << info << std::endl;
    std::cout << "Battery level: " << batteryLvl << "%" << std::endl;
    
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

void Receiver::setBatteryAlarm(bool p_batteryAlarm) {
    batteryAlarm = p_batteryAlarm;
    NOTIFY_SET_OPERATION;
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

bool Receiver::getBatteryAlarm() const {
    return batteryAlarm;
}

std::vector<StationData> Receiver::getDataReceived() const {
    return dataReceived;
}

void Receiver::setDataReceived(std::vector<StationData> p_dataReceived) {
    dataReceived = p_dataReceived;
}

int Receiver::getWhichToCalibrate() const {
    return whichToCalibrate;
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
        // State BATTERY_ALARM
        case BATTERY_ALARM:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.BATTERY_ALARM");
                    NOTIFY_STATE_ENTERED("ROOT.STANDBY");
                    rootState_subState = STANDBY;
                    rootState_active = STANDBY;
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
            
        }
        break;
        // State BATTERY_ALARM_WITHDRAWAL
        case BATTERY_ALARM_WITHDRAWAL:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("16");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.BATTERY_ALARM_WITHDRAWAL");
                    NOTIFY_STATE_ENTERED("ROOT.STANDBY");
                    rootState_subState = STANDBY;
                    rootState_active = STANDBY;
                    NOTIFY_TRANSITION_TERMINATED("16");
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
    else if(IS_EVENT_TYPE_OF(evAlertWithdraw_MainPackage_id))
        {
            NOTIFY_TRANSITION_STARTED("15");
            NOTIFY_STATE_EXITED("ROOT.STANDBY");
            NOTIFY_STATE_ENTERED("ROOT.BATTERY_ALARM_WITHDRAWAL");
            pushNullTransition();
            rootState_subState = BATTERY_ALARM_WITHDRAWAL;
            rootState_active = BATTERY_ALARM_WITHDRAWAL;
            //#[ state BATTERY_ALARM_WITHDRAWAL.(Entry) 
            batteryAlarm = false;
            //#]
            NOTIFY_TRANSITION_TERMINATED("15");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evBatteryAlarm_MainPackage_id))
        {
            NOTIFY_TRANSITION_STARTED("13");
            NOTIFY_STATE_EXITED("ROOT.STANDBY");
            NOTIFY_STATE_ENTERED("ROOT.BATTERY_ALARM");
            pushNullTransition();
            rootState_subState = BATTERY_ALARM;
            rootState_active = BATTERY_ALARM;
            //#[ state BATTERY_ALARM.(Entry) 
            batteryAlarm = true;
            //#]
            NOTIFY_TRANSITION_TERMINATED("13");
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
    aomsAttributes->addAttribute("whichToCalibrate", x2String(myReal->whichToCalibrate));
    aomsAttributes->addAttribute("batteryAlarm", x2String(myReal->batteryAlarm));
    OMAnimatediToServer::serializeAttributes(aomsAttributes);
}

void OMAnimatedReceiver::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatediToServer::serializeRelations(aomsRelations);
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
        case Receiver::BATTERY_ALARM:
        {
            BATTERY_ALARM_serializeStates(aomsState);
        }
        break;
        case Receiver::BATTERY_ALARM_WITHDRAWAL:
        {
            BATTERY_ALARM_WITHDRAWAL_serializeStates(aomsState);
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

void OMAnimatedReceiver::BATTERY_ALARM_WITHDRAWAL_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.BATTERY_ALARM_WITHDRAWAL");
}

void OMAnimatedReceiver::BATTERY_ALARM_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.BATTERY_ALARM");
}

void OMAnimatedReceiver::ACTIVATE_SEND_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ACTIVATE_SEND");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Receiver, MainPackage, false, iToServer, OMAnimatediToServer, OMAnimatedReceiver)

OMINIT_SUPERCLASS(iToServer, OMAnimatediToServer)

OMREGISTER_REACTIVE_CLASS

IMPLEMENT_META_OP(OMAnimatedReceiver, MainPackage_Receiver_setWhichToCalibrate_int, "setWhichToCalibrate", FALSE, "setWhichToCalibrate(int)", 1)

IMPLEMENT_OP_CALL(MainPackage_Receiver_setWhichToCalibrate_int, Receiver, setWhichToCalibrate(p_whichToCalibrate), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MainComponent\MainConfiguration\Receiver.cpp
*********************************************************************/
