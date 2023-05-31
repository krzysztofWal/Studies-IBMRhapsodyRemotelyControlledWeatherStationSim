/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: MainComponent 
	Configuration 	: MainConfiguration
	Model Element	: Controller
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: MainComponent\MainConfiguration\Controller.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Controller.h"
//#[ ignore
#define MainPackage_Controller_appendToPackage_SERIALIZE \
    aomsmethod->addAttribute("whichSensor", x2String(whichSensor));\
    aomsmethod->addAttribute("value", x2String(value));
#define MainPackage_Controller_Controller_SERIALIZE OM_NO_OP

#define MainPackage_Controller_activate_SERIALIZE OM_NO_OP

#define MainPackage_Controller_batteryCheck_SERIALIZE OM_NO_OP

#define MainPackage_Controller_batteryCheckLPM_SERIALIZE OM_NO_OP

#define MainPackage_Controller_calibrate_SERIALIZE OM_NO_OP

#define MainPackage_Controller_createPackage_SERIALIZE aomsmethod->addAttribute("time", x2String(time));

#define MainPackage_Controller_deletePackage_SERIALIZE OM_NO_OP

#define MainPackage_Controller_evActivateWrap_SERIALIZE OM_NO_OP

#define MainPackage_Controller_evCalibrateWrap_SERIALIZE aomsmethod->addAttribute("whichSensor", x2String(whichSensor));

#define MainPackage_Controller_evConfirmPackageReceivalWrap_SERIALIZE OM_NO_OP

#define MainPackage_Controller_evGetInfoWrap_SERIALIZE OM_NO_OP

#define MainPackage_Controller_evInitializeWrap_SERIALIZE OM_NO_OP

#define MainPackage_Controller_evToNonactiveWrap_SERIALIZE OM_NO_OP

#define MainPackage_Controller_getAlertSet_SERIALIZE OM_NO_OP

#define MainPackage_Controller_getDataPackage_SERIALIZE OM_NO_OP

#define MainPackage_Controller_getGivenPercentage_SERIALIZE aomsmethod->addAttribute("position", x2String(position));

#define MainPackage_Controller_giveGenTime_SERIALIZE OM_NO_OP

#define MainPackage_Controller_makeInfoStr_SERIALIZE OM_NO_OP

#define MainPackage_Controller_print_SERIALIZE OM_NO_OP

#define MainPackage_Controller_printPackage_SERIALIZE OM_NO_OP

#define MainPackage_Controller_toNonactive_SERIALIZE OM_NO_OP

#define MainPackage_object_0_object_0_SERIALIZE OM_NO_OP
//#]

//## package MainPackage

//## class Controller
bool Controller::startBehavior() {
    bool done = true;
    done &= itsAnnemometer.startBehavior();
    done &= itsHumiditySensor.startBehavior();
    done &= itsPressureSensor.startBehavior();
    done &= itsRainAmountSensor.startBehavior();
    done &= itsTemperatureSensor.startBehavior();
    done &= itsTimer.startBehavior();
    done &= itsWindDirectionSensor.startBehavior();
    done &= OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

int Controller::getStationId() const {
    return stationId;
}

void Controller::setStationId(int p_stationId) {
    stationId = p_stationId;
}

int Controller::getStationStatus() const {
    return stationStatus;
}

void Controller::initRelations() {
    itsAnnemometer._setItsController(this);
    itsHumiditySensor._setItsController(this);
    itsPressureSensor._setItsController(this);
    itsRainAmountSensor._setItsController(this);
    itsTemperatureSensor._setItsController(this);
    itsTimer._setItsController(this);
    itsWindDirectionSensor._setItsController(this);
    if (get_port_33() != NULL) {
        get_port_33()->connectController(this);
    }
}

void Controller::destroy() {
    itsAnnemometer.destroy();
    itsHumiditySensor.destroy();
    itsPressureSensor.destroy();
    itsRainAmountSensor.destroy();
    itsTemperatureSensor.destroy();
    itsTimer.destroy();
    itsWindDirectionSensor.destroy();
    OMReactive::destroy();
}

//## class Controller::object_0
Controller::object_0_C::object_0_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(object_0, object_0(), 0, MainPackage_object_0_object_0_SERIALIZE, object_0_C);
}

Controller::object_0_C::~object_0_C() {
    NOTIFY_DESTRUCTOR(~object_0, true);
}

//#[ ignore
Controller::port_33_C::port_33_C() : _p_(0) {
    itsIToStation = NULL;
}

Controller::port_33_C::~port_33_C() {
    cleanUpRelations();
}

void Controller::port_33_C::connectController(Controller* part) {
    setItsIToStation(part);
    
}

void Controller::port_33_C::evActivateWrap() {
    
    if (itsIToStation != NULL) {
        itsIToStation->evActivateWrap();
    }
    
}

void Controller::port_33_C::evCalibrateWrap(int whichSensor) {
    
    if (itsIToStation != NULL) {
        itsIToStation->evCalibrateWrap(whichSensor);
    }
    
}

void Controller::port_33_C::evConfirmPackageReceivalWrap() {
    
    if (itsIToStation != NULL) {
        itsIToStation->evConfirmPackageReceivalWrap();
    }
    
}

void Controller::port_33_C::evGetInfoWrap() {
    
    if (itsIToStation != NULL) {
        itsIToStation->evGetInfoWrap();
    }
    
}

void Controller::port_33_C::evInitializeWrap() {
    
    if (itsIToStation != NULL) {
        itsIToStation->evInitializeWrap();
    }
    
}

void Controller::port_33_C::evToNonactiveWrap() {
    
    if (itsIToStation != NULL) {
        itsIToStation->evToNonactiveWrap();
    }
    
}

iToStation* Controller::port_33_C::getItsIToStation() {
    return this;
}

StationData Controller::port_33_C::print() {
    StationData res;
    if (itsIToStation != NULL) {
        res = itsIToStation->print();
    }
    return res;
}

void Controller::port_33_C::setItsIToStation(iToStation* p_iToStation) {
    itsIToStation = p_iToStation;
}

void Controller::port_33_C::cleanUpRelations() {
    if(itsIToStation != NULL)
        {
            itsIToStation = NULL;
        }
}

Controller::port_35_C::port_35_C() : _p_(0) {
    itsIToServer = NULL;
}

Controller::port_35_C::~port_35_C() {
    cleanUpRelations();
}

void Controller::port_35_C::evAlertWithdrawWrap() {
    
    if (itsIToServer != NULL) {
        itsIToServer->evAlertWithdrawWrap();
    }
    
}

void Controller::port_35_C::evBatteryAlarmWrap() {
    
    if (itsIToServer != NULL) {
        itsIToServer->evBatteryAlarmWrap();
    }
    
}

void Controller::port_35_C::evInformPackReadyWrap() {
    
    if (itsIToServer != NULL) {
        itsIToServer->evInformPackReadyWrap();
    }
    
}

void Controller::port_35_C::getInfo(
std::string info, int batteryLvl) {
    
    if (itsIToServer != NULL) {
        itsIToServer->getInfo(info,batteryLvl);
    }
    
}

iToServer* Controller::port_35_C::getItsIToServer() {
    return this;
}

iToServer* Controller::port_35_C::getOutBound() {
    return this;
}

void Controller::port_35_C::setItsIToServer(iToServer* p_iToServer) {
    itsIToServer = p_iToServer;
}

void Controller::port_35_C::cleanUpRelations() {
    if(itsIToServer != NULL)
        {
            itsIToServer = NULL;
        }
}
//#]

Controller::Controller(IOxfActive* theActiveContext) : stationId(1)
 , stationStatus(ON), alertSet(false), batteryLevel(100) {
    NOTIFY_ACTIVE_CONSTRUCTOR(Controller, Controller(), 0, MainPackage_Controller_Controller_SERIALIZE);
    setActiveContext(this, true);
    {
        {
            itsTemperatureSensor.setShouldDelete(false);
        }
        {
            itsHumiditySensor.setShouldDelete(false);
        }
        {
            itsPressureSensor.setShouldDelete(false);
        }
        {
            itsWindDirectionSensor.setShouldDelete(false);
        }
        {
            itsRainAmountSensor.setShouldDelete(false);
        }
        {
            itsAnnemometer.setShouldDelete(false);
        }
        {
            itsTimer.setShouldDelete(false);
        }
    }
    initRelations();
    initStatechart();
    //#[ operation Controller()
    //std::cout << "Constructed controller object" << this << std::endl;
    //std::cout << "Station status: " << stationStatus << std::endl;
    //std::cout << alert[1] << std::endl;
    //std::cout << alert[2] << std::endl;
    //std::cout << alert[3] << std::endl;
    //std::cout << alert[4] << std::endl;
    //outFile = new std::ofstream("log.txt", std::ios::app);
    //#]
}

Controller::~Controller() {
    NOTIFY_DESTRUCTOR(~Controller, false);
    cancelTimeouts();
}

void Controller::appendToPackage(int whichSensor, double value) {
    NOTIFY_OPERATION(appendToPackage, appendToPackage(int,double), 2, MainPackage_Controller_appendToPackage_SERIALIZE);
    //#[ operation appendToPackage(int,double)
    dataPackage->set(whichSensor,value);
    /*std::cout << "Debug: Controller::appendToPackage: " << value
    	 	  << " set on field: " << whichSensor << std::endl;
    	 	  */
    //#]
}

void Controller::calibrate() {
    NOTIFY_OPERATION(calibrate, calibrate(), 0, MainPackage_Controller_calibrate_SERIALIZE);
    //#[ operation calibrate()
    //#]
}

void Controller::evCalibrateWrap(int whichSensor) {
    NOTIFY_OPERATION(evCalibrateWrap, evCalibrateWrap(int), 1, MainPackage_Controller_evCalibrateWrap_SERIALIZE);
    //#[ operation evCalibrateWrap(int)
    whichSensorCal = whichSensor;
    GEN(evCalibrate);
    //#]
}

void Controller::evConfirmPackageReceivalWrap() {
    NOTIFY_OPERATION(evConfirmPackageReceivalWrap, evConfirmPackageReceivalWrap(), 0, MainPackage_Controller_evConfirmPackageReceivalWrap_SERIALIZE);
    //#[ operation evConfirmPackageReceivalWrap()
    GEN(evConfirmPackageReceival);
    //std::cout << "rec to contr - i have the data, can delete"<< std::endl;
    //#]
}

void Controller::createPackage(unsigned long long time) {
    NOTIFY_OPERATION(createPackage, createPackage(unsigned long long), 1, MainPackage_Controller_createPackage_SERIALIZE);
    //#[ operation createPackage(unsigned long long)
    dataPackage = new StationData(time);
    //#]
}

void Controller::deletePackage() {
    NOTIFY_OPERATION(deletePackage, deletePackage(), 0, MainPackage_Controller_deletePackage_SERIALIZE);
    //#[ operation deletePackage()
    delete dataPackage;
    //std::cout << "data package deleted" << std::endl;
    //#]
}

StationData* Controller::getDataPackage() const {
    NOTIFY_OPERATION(getDataPackage, getDataPackage() const, 0, MainPackage_Controller_getDataPackage_SERIALIZE);
    //#[ operation getDataPackage() const
    return dataPackage;
    //#]
}

void Controller::evInitializeWrap() {
    NOTIFY_OPERATION(evInitializeWrap, evInitializeWrap(), 0, MainPackage_Controller_evInitializeWrap_SERIALIZE);
    //#[ operation evInitializeWrap()
    GEN(evInitialize);
    //std::cout << "from rec to contr - initialize" << std::endl;
    //#]
}

StationData Controller::print() {
    NOTIFY_OPERATION(print, print(), 0, MainPackage_Controller_print_SERIALIZE);
    //#[ operation print()
    
    printPackage();
    //return StationData(	dataPackage->get(1),
    //					dataPackage->get(2),
    //					dataPackage->get(3),
    //					dataPackage->get(4),
    //					stationId,
    //					dataPackage->getTime());  
    return (*dataPackage);
    //#]
}

void Controller::printPackage() {
    NOTIFY_OPERATION(printPackage, printPackage(), 0, MainPackage_Controller_printPackage_SERIALIZE);
    //#[ operation printPackage()
    std::cout << "========data package time: "<<dataPackage->getTime() << "========" << std::endl
    		<< "Annemometer: " << dataPackage->get(WIND_SPEED_SENS) << std::endl
    		<< "Rain Sensor: " << dataPackage->get(RAIN_AMOUNT_SENS) << std::endl
    		<< "Wind Direction Sensor: " << dataPackage->get(WIND_DIR_SENS) << std::endl
    		<< "Temperature Sensor: " << dataPackage->get(TEMP_SENS) << std::endl
    		<< "Humidity Sensor: " << dataPackage->get(HUMID_SENS) << std::endl
    		<< "Pressure Sensor: " << dataPackage->get(PRESSURE_SENS) << std::endl
    		<< "==========================================" << std::endl;
    		
    //		<< "O3: " << dataPackage->getO3() << std::endl;
    		//<< "O3: " << dataPackage->getO3() << std::endl;
    //#]
}

Controller::port_33_C* Controller::getPort_33() const {
    return (Controller::port_33_C*) &port_33;
}

Controller::port_33_C* Controller::get_port_33() const {
    return (Controller::port_33_C*) &port_33;
}

Controller::port_35_C* Controller::getPort_35() const {
    return (Controller::port_35_C*) &port_35;
}

Controller::port_35_C* Controller::get_port_35() const {
    return (Controller::port_35_C*) &port_35;
}

Timer* Controller::getItsTimer() const {
    return (Timer*) &itsTimer;
}

Controller::object_0_C* Controller::getObject_0() const {
    return (Controller::object_0_C*) &object_0;
}

std::map<int, bool> Controller::getAlert() const {
    return alert;
}

void Controller::setAlert(std::map<int, bool> p_alert) {
    alert = p_alert;
}

unsigned long long Controller::getTime() const {
    return time;
}

void Controller::setTime(unsigned long long p_time) {
    time = p_time;
}

void Controller::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Controller::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Controller::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Controller::activate() {
    NOTIFY_OPERATION(activate, activate(), 0, MainPackage_Controller_activate_SERIALIZE);
    //#[ operation activate()
    /*
    	PLATFORM-SPECIFIC CODE
    */               
    std::cout << "Debug: Controller::activate(): entered active mode" << std::endl;
    //#]
}

void Controller::batteryCheck() {
    NOTIFY_OPERATION(batteryCheck, batteryCheck(), 0, MainPackage_Controller_batteryCheck_SERIALIZE);
    //#[ operation batteryCheck()
    batteryLevel -= 15;
    //#]
}

void Controller::batteryCheckLPM() {
    NOTIFY_OPERATION(batteryCheckLPM, batteryCheckLPM(), 0, MainPackage_Controller_batteryCheckLPM_SERIALIZE);
    //#[ operation batteryCheckLPM()
    //#]
}

void Controller::evActivateWrap() {
    NOTIFY_OPERATION(evActivateWrap, evActivateWrap(), 0, MainPackage_Controller_evActivateWrap_SERIALIZE);
    //#[ operation evActivateWrap()
    GEN(evActivate);
    //#]
}

void Controller::evGetInfoWrap() {
    NOTIFY_OPERATION(evGetInfoWrap, evGetInfoWrap(), 0, MainPackage_Controller_evGetInfoWrap_SERIALIZE);
    //#[ operation evGetInfoWrap()
    GEN(evGetInfo);
    std::cout << "Debug: Controller::evGetInfoWrap(): evGetInfo generated\n" << std::endl;
    //#]
}

void Controller::evToNonactiveWrap() {
    NOTIFY_OPERATION(evToNonactiveWrap, evToNonactiveWrap(), 0, MainPackage_Controller_evToNonactiveWrap_SERIALIZE);
    //#[ operation evToNonactiveWrap()
    GEN(evToNonactive);
    //#]
}

double Controller::getGivenPercentage(int position) const {
    NOTIFY_OPERATION(getGivenPercentage, getGivenPercentage(int) const, 1, MainPackage_Controller_getGivenPercentage_SERIALIZE);
    //#[ operation getGivenPercentage(int) const
    switch(position) {
    case 1:
    	return dataPackage->get(1)/240*100;
    case 2:
    	return dataPackage->get(2)/60*100;
    case 3:
    	return dataPackage->get(3)/500*100;
    case 4:
    	return dataPackage->get(4)/400*100;
    case 5:
    	return dataPackage->get(5)/5*100;
    case 6:
    	return dataPackage->get(6)/25*100;
    case 7:
    	return dataPackage->get(7)/50*100;
    break;
    default:
    	std::cout << "reached default in getGivenDataFromPackage()\n";
    	return 9999;
    }
    //#]
}

unsigned long long Controller::giveGenTime() {
    NOTIFY_OPERATION(giveGenTime, giveGenTime(), 0, MainPackage_Controller_giveGenTime_SERIALIZE);
    //#[ operation giveGenTime()
    return itsTimer.getTimestamp();
    //#]
}

std::string Controller::makeInfoStr() {
    NOTIFY_OPERATION(makeInfoStr, makeInfoStr(), 0, MainPackage_Controller_makeInfoStr_SERIALIZE);
    //#[ operation makeInfoStr()
    std::string temp = std::string("===============System information===========") + 
    std::string("\nstation id: ") + std::to_string(static_cast<long long>(stationId)) + 
    std::string("\nsensors:") +
    std::string("\nAnnemometer id: ") + std::to_string(static_cast<long long>(itsAnnemometer.getId())) + 
    std::string("\nRain Tipping Gauge id: ") + std::to_string(static_cast<long long>(itsRainAmountSensor.getId())) +
    std::string("\nWind Direction id: ") + std::to_string(static_cast<long long>(itsWindDirectionSensor.getId()))+ 
    std::string("\nTemperature id: ") + std::to_string(static_cast<long long>(itsTemperatureSensor.getId()))+ 
    std::string("\nHumidity id: ") + std::to_string(static_cast<long long>(itsHumiditySensor.getId()))+ 
    std::string("\nPressure id: ") + std::to_string(static_cast<long long>(itsPressureSensor.getId()));
    return temp;
    
    
    //#]
}

void Controller::toNonactive() {
    NOTIFY_OPERATION(toNonactive, toNonactive(), 0, MainPackage_Controller_toNonactive_SERIALIZE);
    //#[ operation toNonactive()
    /*
    	PLATFORM-SPECIFIC CODE
    */
    std::cout << "Debug: Controller::toNonactive(): entered non-active mode" << std::endl;
    //#]
}

void Controller::setBatteryLevel(int p_batteryLevel) {
    batteryLevel = p_batteryLevel;
    NOTIFY_SET_OPERATION;
}

Annemometer* Controller::getItsAnnemometer() const {
    return (Annemometer*) &itsAnnemometer;
}

HumiditySensor* Controller::getItsHumiditySensor() const {
    return (HumiditySensor*) &itsHumiditySensor;
}

PressureSensor* Controller::getItsPressureSensor() const {
    return (PressureSensor*) &itsPressureSensor;
}

RainAmountSensor* Controller::getItsRainAmountSensor() const {
    return (RainAmountSensor*) &itsRainAmountSensor;
}

TemperatureSensor* Controller::getItsTemperatureSensor() const {
    return (TemperatureSensor*) &itsTemperatureSensor;
}

WindDirectionSensor* Controller::getItsWindDirectionSensor() const {
    return (WindDirectionSensor*) &itsWindDirectionSensor;
}

void Controller::setAlertSet(bool p_alertSet) {
    alertSet = p_alertSet;
}

int Controller::getBatteryLevel() const {
    return batteryLevel;
}

int Controller::getWhichSensorCal() const {
    return whichSensorCal;
}

void Controller::setWhichSensorCal(int p_whichSensorCal) {
    whichSensorCal = p_whichSensorCal;
}

bool Controller::getAlertSet() {
    NOTIFY_OPERATION(getAlertSet, getAlertSet(), 0, MainPackage_Controller_getAlertSet_SERIALIZE);
    //#[ operation getAlertSet()
    return alertSet;
    //#]
}

void Controller::setDataPackage(StationData* p_dataPackage) {
    dataPackage = p_dataPackage;
}

void Controller::setStationStatus(int p_stationStatus) {
    stationStatus = p_stationStatus;
}

void Controller::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("2");
        NOTIFY_STATE_ENTERED("ROOT.STAND_BY_CONTROLLER");
        rootState_subState = STAND_BY_CONTROLLER;
        rootState_active = STAND_BY_CONTROLLER;
        NOTIFY_TRANSITION_TERMINATED("2");
    }
}

IOxfReactive::TakeEventStatus Controller::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State STAND_BY_CONTROLLER
        case STAND_BY_CONTROLLER:
        {
            res = STAND_BY_CONTROLLER_handleEvent();
        }
        break;
        // State PACKAGE_READY
        case PACKAGE_READY:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.PACKAGE_READY");
                            NOTIFY_STATE_ENTERED("ROOT.DELETE_PACKAGE");
                            pushNullTransition();
                            rootState_subState = DELETE_PACKAGE;
                            rootState_active = DELETE_PACKAGE;
                            //#[ state DELETE_PACKAGE.(Entry) 
                            deletePackage();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evConfirmPackageReceival_MainPackage_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.PACKAGE_READY");
                    NOTIFY_STATE_ENTERED("ROOT.DELETE_PACKAGE");
                    pushNullTransition();
                    rootState_subState = DELETE_PACKAGE;
                    rootState_active = DELETE_PACKAGE;
                    //#[ state DELETE_PACKAGE.(Entry) 
                    deletePackage();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State DELETE_PACKAGE
        case DELETE_PACKAGE:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.DELETE_PACKAGE");
                    NOTIFY_STATE_ENTERED("ROOT.STAND_BY_CONTROLLER");
                    rootState_subState = STAND_BY_CONTROLLER;
                    rootState_active = STAND_BY_CONTROLLER;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State CALIBRATE
        case CALIBRATE:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("15");
                            //#[ transition 15 
                            GEN(evExitCalibration);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("15");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evExitCalibration_MainPackage_id))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.CALIBRATE");
                    NOTIFY_STATE_ENTERED("ROOT.NON_ACTIVE");
                    rootState_subState = NON_ACTIVE;
                    rootState_active = NON_ACTIVE;
                    //#[ state NON_ACTIVE.(Entry) 
                    toNonactive();
                    
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_37
        case sendaction_37:
        {
            if(IS_EVENT_TYPE_OF(evSendReadFromSensor_MainPackage_id))
                {
                    OMSETPARAMS(evSendReadFromSensor);
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_STATE_EXITED("ROOT.sendaction_37");
                    //#[ transition 8 
                    appendToPackage(itsAnnemometer.getId(),params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_38");
                    rootState_subState = sendaction_38;
                    rootState_active = sendaction_38;
                    //#[ state sendaction_38.(Entry) 
                    itsRainAmountSensor.GEN(evReadSensor);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_38
        case sendaction_38:
        {
            if(IS_EVENT_TYPE_OF(evSendReadFromSensor_MainPackage_id))
                {
                    OMSETPARAMS(evSendReadFromSensor);
                    NOTIFY_TRANSITION_STARTED("9");
                    NOTIFY_STATE_EXITED("ROOT.sendaction_38");
                    //#[ transition 9 
                    appendToPackage(itsRainAmountSensor.getId(),params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_39");
                    rootState_subState = sendaction_39;
                    rootState_active = sendaction_39;
                    //#[ state sendaction_39.(Entry) 
                    itsWindDirectionSensor.GEN(evReadSensor);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_39
        case sendaction_39:
        {
            if(IS_EVENT_TYPE_OF(evSendReadFromSensor_MainPackage_id))
                {
                    OMSETPARAMS(evSendReadFromSensor);
                    NOTIFY_TRANSITION_STARTED("10");
                    NOTIFY_STATE_EXITED("ROOT.sendaction_39");
                    //#[ transition 10 
                    appendToPackage(itsWindDirectionSensor.getId(),params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_40");
                    rootState_subState = sendaction_40;
                    rootState_active = sendaction_40;
                    //#[ state sendaction_40.(Entry) 
                    itsTemperatureSensor.GEN(evReadSensor);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_40
        case sendaction_40:
        {
            if(IS_EVENT_TYPE_OF(evSendReadFromSensor_MainPackage_id))
                {
                    OMSETPARAMS(evSendReadFromSensor);
                    NOTIFY_TRANSITION_STARTED("11");
                    NOTIFY_STATE_EXITED("ROOT.sendaction_40");
                    //#[ transition 11 
                    appendToPackage(itsTemperatureSensor.getId(), params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_41");
                    rootState_subState = sendaction_41;
                    rootState_active = sendaction_41;
                    //#[ state sendaction_41.(Entry) 
                    itsHumiditySensor.GEN(evReadSensor);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_41
        case sendaction_41:
        {
            if(IS_EVENT_TYPE_OF(evSendReadFromSensor_MainPackage_id))
                {
                    OMSETPARAMS(evSendReadFromSensor);
                    NOTIFY_TRANSITION_STARTED("12");
                    NOTIFY_STATE_EXITED("ROOT.sendaction_41");
                    //#[ transition 12 
                    appendToPackage(itsHumiditySensor.getId() ,params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_42");
                    rootState_subState = sendaction_42;
                    rootState_active = sendaction_42;
                    //#[ state sendaction_42.(Entry) 
                    itsPressureSensor.GEN(evReadSensor);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_42
        case sendaction_42:
        {
            if(IS_EVENT_TYPE_OF(evSendReadFromSensor_MainPackage_id))
                {
                    OMSETPARAMS(evSendReadFromSensor);
                    NOTIFY_TRANSITION_STARTED("13");
                    NOTIFY_STATE_EXITED("ROOT.sendaction_42");
                    //#[ transition 13 
                    appendToPackage(itsPressureSensor.getId() ,params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.PACKAGE_READY");
                    rootState_subState = PACKAGE_READY;
                    rootState_active = PACKAGE_READY;
                    //#[ state PACKAGE_READY.(Entry) 
                    OUT_PORT(port_35)->evInformPackReadyWrap();
                    
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.PACKAGE_READY");
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_44
        case sendaction_44:
        {
            if(IS_EVENT_TYPE_OF(evProvideTime_MainPackage_id))
                {
                    OMSETPARAMS(evProvideTime);
                    NOTIFY_TRANSITION_STARTED("14");
                    NOTIFY_STATE_EXITED("ROOT.sendaction_44");
                    //#[ transition 14 
                    createPackage(params->time);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_37");
                    rootState_subState = sendaction_37;
                    rootState_active = sendaction_37;
                    //#[ state sendaction_37.(Entry) 
                    itsAnnemometer.GEN(evReadSensor);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
            
        }
        break;
        // State NON_ACTIVE
        case NON_ACTIVE:
        {
            if(IS_EVENT_TYPE_OF(evCalibrate_MainPackage_id))
                {
                    //## transition 6 
                    if(!alertSet)
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            NOTIFY_STATE_EXITED("ROOT.NON_ACTIVE");
                            NOTIFY_STATE_ENTERED("ROOT.CALIBRATE");
                            rootState_subState = CALIBRATE;
                            rootState_active = CALIBRATE;
                            //#[ state CALIBRATE.(Entry) 
                            calibrate();
                            std::cout << "Debug: calibration; sensor: " << whichSensorCal << std::endl;
                            //#]
                            rootState_timeout = scheduleTimeout(1000, "ROOT.CALIBRATE");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evGetInfo_MainPackage_id))
                {
                    NOTIFY_TRANSITION_STARTED("20");
                    NOTIFY_STATE_EXITED("ROOT.NON_ACTIVE");
                    NOTIFY_STATE_ENTERED("ROOT.SEND_INFO");
                    pushNullTransition();
                    rootState_subState = SEND_INFO;
                    rootState_active = SEND_INFO;
                    //#[ state SEND_INFO.(Entry) 
                    batteryCheck();
                    OUT_PORT(port_35)->getInfo(makeInfoStr(), batteryLevel);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("20");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evActivate_MainPackage_id))
                {
                    //## transition 18 
                    if(!alertSet)
                        {
                            NOTIFY_TRANSITION_STARTED("18");
                            NOTIFY_STATE_EXITED("ROOT.NON_ACTIVE");
                            //#[ transition 18 
                            activate();
                            stationStatus =  ON;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.STAND_BY_CONTROLLER");
                            rootState_subState = STAND_BY_CONTROLLER;
                            rootState_active = STAND_BY_CONTROLLER;
                            NOTIFY_TRANSITION_TERMINATED("18");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State SEND_INFO
        case SEND_INFO:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 19 
                    if(stationStatus == ON)
                        {
                            NOTIFY_TRANSITION_STARTED("19");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.SEND_INFO");
                            NOTIFY_STATE_ENTERED("ROOT.STAND_BY_CONTROLLER");
                            rootState_subState = STAND_BY_CONTROLLER;
                            rootState_active = STAND_BY_CONTROLLER;
                            NOTIFY_TRANSITION_TERMINATED("19");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 21 
                            if(stationStatus == STAND_BY)
                                {
                                    NOTIFY_TRANSITION_STARTED("21");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.SEND_INFO");
                                    NOTIFY_STATE_ENTERED("ROOT.NON_ACTIVE");
                                    rootState_subState = NON_ACTIVE;
                                    rootState_active = NON_ACTIVE;
                                    //#[ state NON_ACTIVE.(Entry) 
                                    toNonactive();
                                    
                                    //#]
                                    NOTIFY_TRANSITION_TERMINATED("21");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        // State SEND_ALERT
        case SEND_ALERT:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("25");
                    popNullTransition();
                    //#[ state SEND_ALERT.(Exit) 
                    OUT_PORT(port_35)->evBatteryAlarmWrap();
                    
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.SEND_ALERT");
                    NOTIFY_STATE_ENTERED("ROOT.STAND_BY_CONTROLLER");
                    rootState_subState = STAND_BY_CONTROLLER;
                    rootState_active = STAND_BY_CONTROLLER;
                    NOTIFY_TRANSITION_TERMINATED("25");
                    res = eventConsumed;
                }
            
        }
        break;
        // State SEND_ALERT_WITHDRAW
        case SEND_ALERT_WITHDRAW:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("30");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SEND_ALERT_WITHDRAW");
                    NOTIFY_STATE_ENTERED("ROOT.STAND_BY_CONTROLLER");
                    rootState_subState = STAND_BY_CONTROLLER;
                    rootState_active = STAND_BY_CONTROLLER;
                    NOTIFY_TRANSITION_TERMINATED("30");
                    res = eventConsumed;
                }
            
        }
        break;
        // State BATTERY_LEVEL_LOW
        case BATTERY_LEVEL_LOW:
        {
            if(IS_EVENT_TYPE_OF(evBatteryCheckInit_MainPackage_id))
                {
                    //## transition 28 
                    if(batteryLevel > 10)
                        {
                            NOTIFY_TRANSITION_STARTED("27");
                            NOTIFY_TRANSITION_STARTED("28");
                            NOTIFY_STATE_EXITED("ROOT.BATTERY_LEVEL_LOW");
                            //#[ transition 27 
                            batteryCheckLPM();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.SEND_ALERT_WITHDRAW");
                            pushNullTransition();
                            rootState_subState = SEND_ALERT_WITHDRAW;
                            rootState_active = SEND_ALERT_WITHDRAW;
                            //#[ state SEND_ALERT_WITHDRAW.(Entry) 
                            OUT_PORT(port_35)->evAlertWithdrawWrap();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("28");
                            NOTIFY_TRANSITION_TERMINATED("27");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("27");
                            NOTIFY_TRANSITION_STARTED("29");
                            NOTIFY_STATE_EXITED("ROOT.BATTERY_LEVEL_LOW");
                            //#[ transition 27 
                            batteryCheckLPM();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.BATTERY_LEVEL_LOW");
                            rootState_subState = BATTERY_LEVEL_LOW;
                            rootState_active = BATTERY_LEVEL_LOW;
                            NOTIFY_TRANSITION_TERMINATED("29");
                            NOTIFY_TRANSITION_TERMINATED("27");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus Controller::STAND_BY_CONTROLLER_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evGetInfo_MainPackage_id))
        {
            NOTIFY_TRANSITION_STARTED("17");
            NOTIFY_STATE_EXITED("ROOT.STAND_BY_CONTROLLER");
            NOTIFY_STATE_ENTERED("ROOT.SEND_INFO");
            pushNullTransition();
            rootState_subState = SEND_INFO;
            rootState_active = SEND_INFO;
            //#[ state SEND_INFO.(Entry) 
            batteryCheck();
            OUT_PORT(port_35)->getInfo(makeInfoStr(), batteryLevel);
            //#]
            NOTIFY_TRANSITION_TERMINATED("17");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evToNonactive_MainPackage_id))
        {
            NOTIFY_TRANSITION_STARTED("16");
            NOTIFY_STATE_EXITED("ROOT.STAND_BY_CONTROLLER");
            //#[ transition 16 
            stationStatus = STAND_BY;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.NON_ACTIVE");
            rootState_subState = NON_ACTIVE;
            rootState_active = NON_ACTIVE;
            //#[ state NON_ACTIVE.(Entry) 
            toNonactive();
            
            //#]
            NOTIFY_TRANSITION_TERMINATED("16");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evCheckBat_MainPackage_id))
        {
            //## transition 23 
            if(batteryLevel <= 30 && !alertSet)
                {
                    NOTIFY_TRANSITION_STARTED("22");
                    NOTIFY_TRANSITION_STARTED("23");
                    NOTIFY_STATE_EXITED("ROOT.STAND_BY_CONTROLLER");
                    //#[ transition 22 
                    batteryCheck();
                    //#]
                    //#[ transition 23 
                    alertSet = true;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.SEND_ALERT");
                    pushNullTransition();
                    rootState_subState = SEND_ALERT;
                    rootState_active = SEND_ALERT;
                    NOTIFY_TRANSITION_TERMINATED("23");
                    NOTIFY_TRANSITION_TERMINATED("22");
                    res = eventConsumed;
                }
            else
                {
                    //## transition 26 
                    if(batteryLevel <= 15)
                        {
                            NOTIFY_TRANSITION_STARTED("22");
                            NOTIFY_TRANSITION_STARTED("26");
                            NOTIFY_STATE_EXITED("ROOT.STAND_BY_CONTROLLER");
                            //#[ transition 22 
                            batteryCheck();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.BATTERY_LEVEL_LOW");
                            rootState_subState = BATTERY_LEVEL_LOW;
                            rootState_active = BATTERY_LEVEL_LOW;
                            NOTIFY_TRANSITION_TERMINATED("26");
                            NOTIFY_TRANSITION_TERMINATED("22");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("22");
                            NOTIFY_TRANSITION_STARTED("24");
                            NOTIFY_STATE_EXITED("ROOT.STAND_BY_CONTROLLER");
                            //#[ transition 22 
                            batteryCheck();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.STAND_BY_CONTROLLER");
                            rootState_subState = STAND_BY_CONTROLLER;
                            rootState_active = STAND_BY_CONTROLLER;
                            NOTIFY_TRANSITION_TERMINATED("24");
                            NOTIFY_TRANSITION_TERMINATED("22");
                            res = eventConsumed;
                        }
                }
        }
    else if(IS_EVENT_TYPE_OF(evInitialize_MainPackage_id))
        {
            NOTIFY_TRANSITION_STARTED("0");
            NOTIFY_STATE_EXITED("ROOT.STAND_BY_CONTROLLER");
            NOTIFY_STATE_ENTERED("ROOT.sendaction_44");
            rootState_subState = sendaction_44;
            rootState_active = sendaction_44;
            //#[ state sendaction_44.(Entry) 
            itsTimer.GEN(evRequestTime);
            //#]
            NOTIFY_TRANSITION_TERMINATED("0");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evTimerInitialize_MainPackage_id))
        {
            OMSETPARAMS(evTimerInitialize);
            NOTIFY_TRANSITION_STARTED("3");
            NOTIFY_STATE_EXITED("ROOT.STAND_BY_CONTROLLER");
            //#[ transition 3 
            createPackage(params->time);
            //#]
            NOTIFY_STATE_ENTERED("ROOT.sendaction_37");
            rootState_subState = sendaction_37;
            rootState_active = sendaction_37;
            //#[ state sendaction_37.(Entry) 
            itsAnnemometer.GEN(evReadSensor);
            //#]
            NOTIFY_TRANSITION_TERMINATED("3");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedController::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("stationId", x2String(myReal->stationId));
    aomsAttributes->addAttribute("dataPackage", X2ITEM(myReal->dataPackage));
    aomsAttributes->addAttribute("time", x2String(myReal->time));
    aomsAttributes->addAttribute("stationStatus", x2String(myReal->stationStatus));
    aomsAttributes->addAttribute("alert", UNKNOWN2STRING(myReal->alert));
    aomsAttributes->addAttribute("whichSensorCal", x2String(myReal->whichSensorCal));
    aomsAttributes->addAttribute("batteryLevel", x2String(myReal->batteryLevel));
    aomsAttributes->addAttribute("alertSet", x2String(myReal->alertSet));
    OMAnimatediToStation::serializeAttributes(aomsAttributes);
}

void OMAnimatedController::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("object_0", true, true);
    aomsRelations->ADD_ITEM(&myReal->object_0);
    aomsRelations->addRelation("itsTemperatureSensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTemperatureSensor);
    aomsRelations->addRelation("itsHumiditySensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsHumiditySensor);
    aomsRelations->addRelation("itsPressureSensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPressureSensor);
    aomsRelations->addRelation("itsWindDirectionSensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsWindDirectionSensor);
    aomsRelations->addRelation("itsRainAmountSensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsRainAmountSensor);
    aomsRelations->addRelation("itsAnnemometer", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsAnnemometer);
    aomsRelations->addRelation("itsTimer", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTimer);
    OMAnimatediToStation::serializeRelations(aomsRelations);
}

void OMAnimatedController::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Controller::STAND_BY_CONTROLLER:
        {
            STAND_BY_CONTROLLER_serializeStates(aomsState);
        }
        break;
        case Controller::PACKAGE_READY:
        {
            PACKAGE_READY_serializeStates(aomsState);
        }
        break;
        case Controller::DELETE_PACKAGE:
        {
            DELETE_PACKAGE_serializeStates(aomsState);
        }
        break;
        case Controller::CALIBRATE:
        {
            CALIBRATE_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_37:
        {
            sendaction_37_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_38:
        {
            sendaction_38_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_39:
        {
            sendaction_39_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_40:
        {
            sendaction_40_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_41:
        {
            sendaction_41_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_42:
        {
            sendaction_42_serializeStates(aomsState);
        }
        break;
        case Controller::sendaction_44:
        {
            sendaction_44_serializeStates(aomsState);
        }
        break;
        case Controller::NON_ACTIVE:
        {
            NON_ACTIVE_serializeStates(aomsState);
        }
        break;
        case Controller::SEND_INFO:
        {
            SEND_INFO_serializeStates(aomsState);
        }
        break;
        case Controller::SEND_ALERT:
        {
            SEND_ALERT_serializeStates(aomsState);
        }
        break;
        case Controller::SEND_ALERT_WITHDRAW:
        {
            SEND_ALERT_WITHDRAW_serializeStates(aomsState);
        }
        break;
        case Controller::BATTERY_LEVEL_LOW:
        {
            BATTERY_LEVEL_LOW_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedController::STAND_BY_CONTROLLER_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.STAND_BY_CONTROLLER");
}

void OMAnimatedController::sendaction_44_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_44");
}

void OMAnimatedController::sendaction_42_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_42");
}

void OMAnimatedController::sendaction_41_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_41");
}

void OMAnimatedController::sendaction_40_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_40");
}

void OMAnimatedController::sendaction_39_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_39");
}

void OMAnimatedController::sendaction_38_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_38");
}

void OMAnimatedController::sendaction_37_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_37");
}

void OMAnimatedController::SEND_INFO_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SEND_INFO");
}

void OMAnimatedController::SEND_ALERT_WITHDRAW_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SEND_ALERT_WITHDRAW");
}

void OMAnimatedController::SEND_ALERT_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SEND_ALERT");
}

void OMAnimatedController::PACKAGE_READY_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PACKAGE_READY");
}

void OMAnimatedController::NON_ACTIVE_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.NON_ACTIVE");
}

void OMAnimatedController::DELETE_PACKAGE_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DELETE_PACKAGE");
}

void OMAnimatedController::CALIBRATE_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CALIBRATE");
}

void OMAnimatedController::BATTERY_LEVEL_LOW_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.BATTERY_LEVEL_LOW");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Controller, MainPackage, false, iToStation, OMAnimatediToStation, OMAnimatedController)

OMINIT_SUPERCLASS(iToStation, OMAnimatediToStation)

OMREGISTER_REACTIVE_CLASS

IMPLEMENT_META_OBJECT_P(Controller::object_0, Controller::object_0_C, MainPackage, MainPackage, false, OMAnimatedobject_0_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MainComponent\MainConfiguration\Controller.cpp
*********************************************************************/
