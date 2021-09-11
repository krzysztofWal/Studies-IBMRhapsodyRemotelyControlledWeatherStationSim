/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MainPackage
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\MainPackage.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "MainPackage.h"
//## classInstance itsController
#include "Controller.h"
//## classInstance itsReceiver
#include "Receiver.h"
//## auto_generated
#include "Annemometer.h"
//## auto_generated
#include "HumiditySensor.h"
//## auto_generated
#include "iAktywujStacje.h"
//## auto_generated
#include "iCalibrateRequest.h"
//## auto_generated
#include "iConfirmAlertReceival.h"
//## auto_generated
#include "iConfirmDataReceival.h"
//## auto_generated
#include "iGetAlertDetails.h"
//## auto_generated
#include "iInform.h"
//## auto_generated
#include "iInitialize.h"
//## auto_generated
#include "iPrint.h"
//## auto_generated
#include "iSendAlert.h"
//## auto_generated
#include "iUspijStacje.h"
//## auto_generated
#include "PressureSensor.h"
//## auto_generated
#include "RainAmountSensor.h"
//## auto_generated
#include "Sensor.h"
//## auto_generated
#include "StationData.h"
//## auto_generated
#include "TemperatureSensor.h"
//## auto_generated
#include "Timer.h"
//## auto_generated
#include "WindDirectionSensor.h"
//#[ ignore
#define evInitialize_SERIALIZE OM_NO_OP

#define evInitialize_UNSERIALIZE OM_NO_OP

#define evInitialize_CONSTRUCTOR evInitialize()

#define evSendReadFromSensor_SERIALIZE OMADD_SER(valueBeingSent, x2String(myEvent->valueBeingSent))

#define evSendReadFromSensor_UNSERIALIZE OMADD_UNSER(double, valueBeingSent, OMDestructiveString2X)

#define evSendReadFromSensor_CONSTRUCTOR evSendReadFromSensor(valueBeingSent)

#define create_SERIALIZE OMADD_SER(time, x2String(myEvent->time))

#define create_UNSERIALIZE OMADD_UNSER(long, time, OMDestructiveString2X)

#define create_CONSTRUCTOR create(time)

#define potwierdzOdbior_SERIALIZE OM_NO_OP

#define potwierdzOdbior_UNSERIALIZE OM_NO_OP

#define potwierdzOdbior_CONSTRUCTOR potwierdzOdbior()

#define evConfirmPackageReceival_SERIALIZE OM_NO_OP

#define evConfirmPackageReceival_UNSERIALIZE OM_NO_OP

#define evConfirmPackageReceival_CONSTRUCTOR evConfirmPackageReceival()

#define evInform_SERIALIZE OM_NO_OP

#define evInform_UNSERIALIZE OM_NO_OP

#define evInform_CONSTRUCTOR evInform()

#define SendAlert_SERIALIZE OM_NO_OP

#define SendAlert_UNSERIALIZE OM_NO_OP

#define SendAlert_CONSTRUCTOR SendAlert()

#define serwZadajPakietu_SERIALIZE OM_NO_OP

#define serwZadajPakietu_UNSERIALIZE OM_NO_OP

#define serwZadajPakietu_CONSTRUCTOR serwZadajPakietu()

#define readSensorMess_SERIALIZE OM_NO_OP

#define readSensorMess_UNSERIALIZE OM_NO_OP

#define readSensorMess_CONSTRUCTOR readSensorMess()

#define evTimerInitialize_SERIALIZE OMADD_SER(time, x2String(myEvent->time))

#define evTimerInitialize_UNSERIALIZE OMADD_UNSER(unsigned long, time, OMDestructiveString2X)

#define evTimerInitialize_CONSTRUCTOR evTimerInitialize(time)

#define serwSkalibruj_SERIALIZE OM_NO_OP

#define serwSkalibruj_UNSERIALIZE OM_NO_OP

#define serwSkalibruj_CONSTRUCTOR serwSkalibruj()

#define evCalibrate_SERIALIZE OM_NO_OP

#define evCalibrate_UNSERIALIZE OM_NO_OP

#define evCalibrate_CONSTRUCTOR evCalibrate()

#define evRequestTime_SERIALIZE OM_NO_OP

#define evRequestTime_UNSERIALIZE OM_NO_OP

#define evRequestTime_CONSTRUCTOR evRequestTime()

#define evProvideTime_SERIALIZE OMADD_SER(time, x2String(myEvent->time))

#define evProvideTime_UNSERIALIZE OMADD_UNSER(unsigned long, time, OMDestructiveString2X)

#define evProvideTime_CONSTRUCTOR evProvideTime(time)

#define evInitilizeInTimer_SERIALIZE OM_NO_OP

#define evInitilizeInTimer_UNSERIALIZE OM_NO_OP

#define evInitilizeInTimer_CONSTRUCTOR evInitilizeInTimer()

#define evExitCalibration_SERIALIZE OM_NO_OP

#define evExitCalibration_UNSERIALIZE OM_NO_OP

#define evExitCalibration_CONSTRUCTOR evExitCalibration()

#define potwierdzSygnalOdTimera_SERIALIZE OM_NO_OP

#define potwierdzSygnalOdTimera_UNSERIALIZE OM_NO_OP

#define potwierdzSygnalOdTimera_CONSTRUCTOR potwierdzSygnalOdTimera()

#define confirmAlertReceival_SERIALIZE OM_NO_OP

#define confirmAlertReceival_UNSERIALIZE OM_NO_OP

#define confirmAlertReceival_CONSTRUCTOR confirmAlertReceival()

#define evActivate_SERIALIZE OM_NO_OP

#define evActivate_UNSERIALIZE OM_NO_OP

#define evActivate_CONSTRUCTOR evActivate()

#define e_SERIALIZE OM_NO_OP

#define e_UNSERIALIZE OM_NO_OP

#define e_CONSTRUCTOR e()

#define evToNonactive_SERIALIZE OM_NO_OP

#define evToNonactive_UNSERIALIZE OM_NO_OP

#define evToNonactive_CONSTRUCTOR evToNonactive()

#define evServerDemandPacket_SERIALIZE OM_NO_OP

#define evServerDemandPacket_UNSERIALIZE OM_NO_OP

#define evServerDemandPacket_CONSTRUCTOR evServerDemandPacket()

#define evServerActivate_SERIALIZE OM_NO_OP

#define evServerActivate_UNSERIALIZE OM_NO_OP

#define evServerActivate_CONSTRUCTOR evServerActivate()

#define evServGoIntoInactive_SERIALIZE OM_NO_OP

#define evServGoIntoInactive_UNSERIALIZE OM_NO_OP

#define evServGoIntoInactive_CONSTRUCTOR evServGoIntoInactive()

#define evSerwSkalibruj_SERIALIZE OM_NO_OP

#define evSerwSkalibruj_UNSERIALIZE OM_NO_OP

#define evSerwSkalibruj_CONSTRUCTOR evSerwSkalibruj()

#define evServCalibrate_SERIALIZE OM_NO_OP

#define evServCalibrate_UNSERIALIZE OM_NO_OP

#define evServCalibrate_CONSTRUCTOR evServCalibrate()
//#]

//## package MainPackage


//## classInstance itsController
Controller itsController;

//## classInstance itsReceiver
Receiver itsReceiver;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(MainPackage, MainPackage)
#endif // _OMINSTRUMENT

void MainPackage_initRelations() {
    {
        {
            itsReceiver.setShouldDelete(false);
        }
        {
            itsController.setShouldDelete(false);
        }
    }
    {
        
        itsReceiver.get_port_3()->setItsIPrint(itsController.get_port_33()->getItsIPrint());
        
        itsReceiver.get_port_3()->setItsIInitialize(itsController.get_port_33()->getItsIInitialize());
        
        itsReceiver.get_port_3()->setItsIConfirmDataReceival(itsController.get_port_33()->getItsIConfirmDataReceival());
        
        itsReceiver.get_port_3()->setItsIGetAlertDetails(itsController.get_port_33()->getItsIGetAlertDetails());
        
        itsReceiver.get_port_3()->setItsICalibrateRequest(itsController.get_port_33()->getItsICalibrateRequest());
        
        itsReceiver.get_port_3()->setItsIConfirmAlertReceival(itsController.get_port_33()->getItsIConfirmAlertReceival());
        
        itsReceiver.get_port_3()->setItsIUspijStacje(itsController.get_port_33()->getItsIUspijStacje());
        
        itsReceiver.get_port_3()->setItsIAktywujStacje(itsController.get_port_33()->getItsIAktywujStacje());
        
    }
    {
        
        itsController.get_port_35()->setItsIInform(itsReceiver.get_port_5()->getItsIInform());
        
        itsController.get_port_35()->setItsISendAlert(itsReceiver.get_port_5()->getItsISendAlert());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool MainPackage_startBehavior() {
    bool done = true;
    done &= itsController.startBehavior();
    done &= itsReceiver.startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&itsReceiver, Receiver, "itsReceiver", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsController, Controller, "itsController", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
MainPackage_OMInitializer::MainPackage_OMInitializer() {
    MainPackage_initRelations();
    MainPackage_startBehavior();
}

MainPackage_OMInitializer::~MainPackage_OMInitializer() {
}
//#]

//## event evInitialize()
evInitialize::evInitialize() {
    NOTIFY_EVENT_CONSTRUCTOR(evInitialize)
    setId(evInitialize_MainPackage_id);
}

bool evInitialize::isTypeOf(const short id) const {
    return (evInitialize_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evInitialize, MainPackage, MainPackage, evInitialize())

//## event evSendReadFromSensor(double)
evSendReadFromSensor::evSendReadFromSensor() {
    NOTIFY_EVENT_CONSTRUCTOR(evSendReadFromSensor)
    setId(evSendReadFromSensor_MainPackage_id);
}

evSendReadFromSensor::evSendReadFromSensor(double p_valueBeingSent) : valueBeingSent(p_valueBeingSent) {
    NOTIFY_EVENT_CONSTRUCTOR(evSendReadFromSensor)
    setId(evSendReadFromSensor_MainPackage_id);
}

bool evSendReadFromSensor::isTypeOf(const short id) const {
    return (evSendReadFromSensor_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evSendReadFromSensor, MainPackage, MainPackage, evSendReadFromSensor(double))

//## event create(long)
create::create() {
    NOTIFY_EVENT_CONSTRUCTOR(create)
    setId(create_MainPackage_id);
}

create::create(long p_time) : time(p_time) {
    NOTIFY_EVENT_CONSTRUCTOR(create)
    setId(create_MainPackage_id);
}

bool create::isTypeOf(const short id) const {
    return (create_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(create, MainPackage, MainPackage, create(long))

//## event potwierdzOdbior()
potwierdzOdbior::potwierdzOdbior() {
    NOTIFY_EVENT_CONSTRUCTOR(potwierdzOdbior)
    setId(potwierdzOdbior_MainPackage_id);
}

bool potwierdzOdbior::isTypeOf(const short id) const {
    return (potwierdzOdbior_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(potwierdzOdbior, MainPackage, MainPackage, potwierdzOdbior())

//## event evConfirmPackageReceival()
evConfirmPackageReceival::evConfirmPackageReceival() {
    NOTIFY_EVENT_CONSTRUCTOR(evConfirmPackageReceival)
    setId(evConfirmPackageReceival_MainPackage_id);
}

bool evConfirmPackageReceival::isTypeOf(const short id) const {
    return (evConfirmPackageReceival_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evConfirmPackageReceival, MainPackage, MainPackage, evConfirmPackageReceival())

//## event evInform()
evInform::evInform() {
    NOTIFY_EVENT_CONSTRUCTOR(evInform)
    setId(evInform_MainPackage_id);
}

bool evInform::isTypeOf(const short id) const {
    return (evInform_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evInform, MainPackage, MainPackage, evInform())

//## event SendAlert()
SendAlert::SendAlert() {
    NOTIFY_EVENT_CONSTRUCTOR(SendAlert)
    setId(SendAlert_MainPackage_id);
}

bool SendAlert::isTypeOf(const short id) const {
    return (SendAlert_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(SendAlert, MainPackage, MainPackage, SendAlert())

//## event serwZadajPakietu()
serwZadajPakietu::serwZadajPakietu() {
    NOTIFY_EVENT_CONSTRUCTOR(serwZadajPakietu)
    setId(serwZadajPakietu_MainPackage_id);
}

bool serwZadajPakietu::isTypeOf(const short id) const {
    return (serwZadajPakietu_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(serwZadajPakietu, MainPackage, MainPackage, serwZadajPakietu())

//## event readSensorMess()
readSensorMess::readSensorMess() {
    NOTIFY_EVENT_CONSTRUCTOR(readSensorMess)
    setId(readSensorMess_MainPackage_id);
}

bool readSensorMess::isTypeOf(const short id) const {
    return (readSensorMess_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(readSensorMess, MainPackage, MainPackage, readSensorMess())

//## event evTimerInitialize(unsigned long long)
evTimerInitialize::evTimerInitialize() {
    NOTIFY_EVENT_CONSTRUCTOR(evTimerInitialize)
    setId(evTimerInitialize_MainPackage_id);
}

evTimerInitialize::evTimerInitialize(unsigned long long p_time) : time(p_time) {
    NOTIFY_EVENT_CONSTRUCTOR(evTimerInitialize)
    setId(evTimerInitialize_MainPackage_id);
}

bool evTimerInitialize::isTypeOf(const short id) const {
    return (evTimerInitialize_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evTimerInitialize, MainPackage, MainPackage, evTimerInitialize(unsigned long long))

//## event serwSkalibruj()
serwSkalibruj::serwSkalibruj() {
    NOTIFY_EVENT_CONSTRUCTOR(serwSkalibruj)
    setId(serwSkalibruj_MainPackage_id);
}

bool serwSkalibruj::isTypeOf(const short id) const {
    return (serwSkalibruj_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(serwSkalibruj, MainPackage, MainPackage, serwSkalibruj())

//## event evCalibrate()
evCalibrate::evCalibrate() {
    NOTIFY_EVENT_CONSTRUCTOR(evCalibrate)
    setId(evCalibrate_MainPackage_id);
}

bool evCalibrate::isTypeOf(const short id) const {
    return (evCalibrate_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evCalibrate, MainPackage, MainPackage, evCalibrate())

//## event evRequestTime()
evRequestTime::evRequestTime() {
    NOTIFY_EVENT_CONSTRUCTOR(evRequestTime)
    setId(evRequestTime_MainPackage_id);
}

bool evRequestTime::isTypeOf(const short id) const {
    return (evRequestTime_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evRequestTime, MainPackage, MainPackage, evRequestTime())

//## event evProvideTime(unsigned long long)
evProvideTime::evProvideTime() {
    NOTIFY_EVENT_CONSTRUCTOR(evProvideTime)
    setId(evProvideTime_MainPackage_id);
}

evProvideTime::evProvideTime(unsigned long long p_time) : time(p_time) {
    NOTIFY_EVENT_CONSTRUCTOR(evProvideTime)
    setId(evProvideTime_MainPackage_id);
}

bool evProvideTime::isTypeOf(const short id) const {
    return (evProvideTime_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evProvideTime, MainPackage, MainPackage, evProvideTime(unsigned long long))

//## event evInitilizeInTimer()
evInitilizeInTimer::evInitilizeInTimer() {
    NOTIFY_EVENT_CONSTRUCTOR(evInitilizeInTimer)
    setId(evInitilizeInTimer_MainPackage_id);
}

bool evInitilizeInTimer::isTypeOf(const short id) const {
    return (evInitilizeInTimer_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evInitilizeInTimer, MainPackage, MainPackage, evInitilizeInTimer())

//## event evExitCalibration()
evExitCalibration::evExitCalibration() {
    NOTIFY_EVENT_CONSTRUCTOR(evExitCalibration)
    setId(evExitCalibration_MainPackage_id);
}

bool evExitCalibration::isTypeOf(const short id) const {
    return (evExitCalibration_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evExitCalibration, MainPackage, MainPackage, evExitCalibration())

//## event potwierdzSygnalOdTimera()
potwierdzSygnalOdTimera::potwierdzSygnalOdTimera() {
    NOTIFY_EVENT_CONSTRUCTOR(potwierdzSygnalOdTimera)
    setId(potwierdzSygnalOdTimera_MainPackage_id);
}

bool potwierdzSygnalOdTimera::isTypeOf(const short id) const {
    return (potwierdzSygnalOdTimera_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(potwierdzSygnalOdTimera, MainPackage, MainPackage, potwierdzSygnalOdTimera())

//## event confirmAlertReceival()
confirmAlertReceival::confirmAlertReceival() {
    NOTIFY_EVENT_CONSTRUCTOR(confirmAlertReceival)
    setId(confirmAlertReceival_MainPackage_id);
}

bool confirmAlertReceival::isTypeOf(const short id) const {
    return (confirmAlertReceival_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(confirmAlertReceival, MainPackage, MainPackage, confirmAlertReceival())

//## event evActivate()
evActivate::evActivate() {
    NOTIFY_EVENT_CONSTRUCTOR(evActivate)
    setId(evActivate_MainPackage_id);
}

bool evActivate::isTypeOf(const short id) const {
    return (evActivate_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evActivate, MainPackage, MainPackage, evActivate())

//## event e()
e::e() {
    NOTIFY_EVENT_CONSTRUCTOR(e)
    setId(e_MainPackage_id);
}

bool e::isTypeOf(const short id) const {
    return (e_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(e, MainPackage, MainPackage, e())

//## event evToNonactive()
evToNonactive::evToNonactive() {
    NOTIFY_EVENT_CONSTRUCTOR(evToNonactive)
    setId(evToNonactive_MainPackage_id);
}

bool evToNonactive::isTypeOf(const short id) const {
    return (evToNonactive_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evToNonactive, MainPackage, MainPackage, evToNonactive())

//## event evServerDemandPacket()
evServerDemandPacket::evServerDemandPacket() {
    NOTIFY_EVENT_CONSTRUCTOR(evServerDemandPacket)
    setId(evServerDemandPacket_MainPackage_id);
}

bool evServerDemandPacket::isTypeOf(const short id) const {
    return (evServerDemandPacket_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evServerDemandPacket, MainPackage, MainPackage, evServerDemandPacket())

//## event evServerActivate()
evServerActivate::evServerActivate() {
    NOTIFY_EVENT_CONSTRUCTOR(evServerActivate)
    setId(evServerActivate_MainPackage_id);
}

bool evServerActivate::isTypeOf(const short id) const {
    return (evServerActivate_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evServerActivate, MainPackage, MainPackage, evServerActivate())

//## event evServGoIntoInactive()
evServGoIntoInactive::evServGoIntoInactive() {
    NOTIFY_EVENT_CONSTRUCTOR(evServGoIntoInactive)
    setId(evServGoIntoInactive_MainPackage_id);
}

bool evServGoIntoInactive::isTypeOf(const short id) const {
    return (evServGoIntoInactive_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evServGoIntoInactive, MainPackage, MainPackage, evServGoIntoInactive())

//## event evSerwSkalibruj()
evSerwSkalibruj::evSerwSkalibruj() {
    NOTIFY_EVENT_CONSTRUCTOR(evSerwSkalibruj)
    setId(evSerwSkalibruj_MainPackage_id);
}

bool evSerwSkalibruj::isTypeOf(const short id) const {
    return (evSerwSkalibruj_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evSerwSkalibruj, MainPackage, MainPackage, evSerwSkalibruj())

//## event evServCalibrate()
evServCalibrate::evServCalibrate() {
    NOTIFY_EVENT_CONSTRUCTOR(evServCalibrate)
    setId(evServCalibrate_MainPackage_id);
}

bool evServCalibrate::isTypeOf(const short id) const {
    return (evServCalibrate_MainPackage_id==id);
}

IMPLEMENT_META_EVENT_P(evServCalibrate, MainPackage, MainPackage, evServCalibrate())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MainPackage.cpp
*********************************************************************/
