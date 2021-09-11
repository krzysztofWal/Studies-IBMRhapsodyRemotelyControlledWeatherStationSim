/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\Controller.cpp
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
#define MainPackage_Controller_setWhenDue_SERIALIZE \
    aomsmethod->addAttribute("which", x2String(which));\
    aomsmethod->addAttribute("limit", x2String(limit));
#define MainPackage_Controller_Controller_SERIALIZE OM_NO_OP

#define MainPackage_Controller_aktywujStacje_SERIALIZE OM_NO_OP

#define MainPackage_Controller_calibrate_SERIALIZE OM_NO_OP

#define MainPackage_Controller_calibrateRequest_SERIALIZE OM_NO_OP

#define MainPackage_Controller_checkLevels_SERIALIZE OM_NO_OP

#define MainPackage_Controller_confirmAlert_SERIALIZE OM_NO_OP

#define MainPackage_Controller_confirmReceival_SERIALIZE OM_NO_OP

#define MainPackage_Controller_createPackage_SERIALIZE aomsmethod->addAttribute("time", x2String(time));

#define MainPackage_Controller_deletePackage_SERIALIZE OM_NO_OP

#define MainPackage_Controller_getAlertDetails_SERIALIZE OM_NO_OP

#define MainPackage_Controller_getDataPackage_SERIALIZE OM_NO_OP

#define MainPackage_Controller_getGivenPercentage_SERIALIZE aomsmethod->addAttribute("position", x2String(position));

#define MainPackage_Controller_giveGenTime_SERIALIZE OM_NO_OP

#define MainPackage_Controller_handleEnergySavingSystem_SERIALIZE OM_NO_OP

#define MainPackage_Controller_initialize_SERIALIZE OM_NO_OP

#define MainPackage_Controller_isAnyAlert_SERIALIZE OM_NO_OP

#define MainPackage_Controller_print_SERIALIZE OM_NO_OP

#define MainPackage_Controller_printPackage_SERIALIZE OM_NO_OP

#define MainPackage_Controller_readInfo_SERIALIZE OM_NO_OP

#define MainPackage_Controller_resetAlert_SERIALIZE OM_NO_OP

#define MainPackage_Controller_stacjaAktywna_SERIALIZE OM_NO_OP

#define MainPackage_Controller_stacjaUspiona_SERIALIZE OM_NO_OP

#define MainPackage_Controller_uspijStacje_SERIALIZE OM_NO_OP

#define MainPackage_object_0_object_0_SERIALIZE OM_NO_OP
//#]

//## package MainPackage

//## class Controller
#ifdef _OMINSTRUMENT
//#[ ignore
static AOMClass* _ControllerSuper[8] = {
OMAnimatediPrint::staticGetClass(),
OMAnimatediInitialize::staticGetClass(),
OMAnimatediConfirmDataReceival::staticGetClass(),
OMAnimatediGetAlertDetails::staticGetClass(),
OMAnimatediCalibrateRequest::staticGetClass(),
OMAnimatediConfirmAlertReceival::staticGetClass(),
OMAnimatediAktywujStacje::staticGetClass(),
OMAnimatediUspijStacje::staticGetClass()};
//#]
#endif // _OMINSTRUMENT

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

statusType Controller::getStationStatus() const {
    return stationStatus;
}

void Controller::setStationStatus(statusType p_stationStatus) {
    stationStatus = p_stationStatus;
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
    itsIAktywujStacje = NULL;
    itsICalibrateRequest = NULL;
    itsIConfirmAlertReceival = NULL;
    itsIConfirmDataReceival = NULL;
    itsIGetAlertDetails = NULL;
    itsIInitialize = NULL;
    itsIPrint = NULL;
    itsIUspijStacje = NULL;
}

Controller::port_33_C::~port_33_C() {
    cleanUpRelations();
}

void Controller::port_33_C::aktywujStacje() {
    
    if (itsIAktywujStacje != NULL) {
        itsIAktywujStacje->aktywujStacje();
    }
    
}

void Controller::port_33_C::calibrateRequest() {
    
    if (itsICalibrateRequest != NULL) {
        itsICalibrateRequest->calibrateRequest();
    }
    
}

void Controller::port_33_C::confirmAlert() {
    
    if (itsIConfirmAlertReceival != NULL) {
        itsIConfirmAlertReceival->confirmAlert();
    }
    
}

void Controller::port_33_C::confirmReceival() {
    
    if (itsIConfirmDataReceival != NULL) {
        itsIConfirmDataReceival->confirmReceival();
    }
    
}

void Controller::port_33_C::connectController(Controller* part) {
    setItsIPrint(part);
    setItsIInitialize(part);
    setItsIConfirmDataReceival(part);
    setItsIGetAlertDetails(part);
    setItsICalibrateRequest(part);
    setItsIConfirmAlertReceival(part);
    setItsIAktywujStacje(part);
    setItsIUspijStacje(part);
    
}

std::vector<std::pair<unsigned long long,std::pair<int,int>>> Controller::port_33_C::getAlertDetails() {
    std::vector<std::pair<unsigned long long,std::pair<int,int>>> res;
    if (itsIGetAlertDetails != NULL) {
        res = itsIGetAlertDetails->getAlertDetails();
    }
    return res;
}

iAktywujStacje* Controller::port_33_C::getItsIAktywujStacje() {
    return this;
}

iCalibrateRequest* Controller::port_33_C::getItsICalibrateRequest() {
    return this;
}

iConfirmAlertReceival* Controller::port_33_C::getItsIConfirmAlertReceival() {
    return this;
}

iConfirmDataReceival* Controller::port_33_C::getItsIConfirmDataReceival() {
    return this;
}

iGetAlertDetails* Controller::port_33_C::getItsIGetAlertDetails() {
    return this;
}

iInitialize* Controller::port_33_C::getItsIInitialize() {
    return this;
}

iPrint* Controller::port_33_C::getItsIPrint() {
    return this;
}

iUspijStacje* Controller::port_33_C::getItsIUspijStacje() {
    return this;
}

void Controller::port_33_C::initialize() {
    
    if (itsIInitialize != NULL) {
        itsIInitialize->initialize();
    }
    
}

StationData Controller::port_33_C::print() {
    StationData res;
    if (itsIPrint != NULL) {
        res = itsIPrint->print();
    }
    return res;
}

void Controller::port_33_C::uspijStacje() {
    
    if (itsIUspijStacje != NULL) {
        itsIUspijStacje->uspijStacje();
    }
    
}

void Controller::port_33_C::setItsIAktywujStacje(iAktywujStacje* p_iAktywujStacje) {
    itsIAktywujStacje = p_iAktywujStacje;
}

void Controller::port_33_C::setItsICalibrateRequest(iCalibrateRequest* p_iCalibrateRequest) {
    itsICalibrateRequest = p_iCalibrateRequest;
}

void Controller::port_33_C::setItsIConfirmAlertReceival(iConfirmAlertReceival* p_iConfirmAlertReceival) {
    itsIConfirmAlertReceival = p_iConfirmAlertReceival;
}

void Controller::port_33_C::setItsIConfirmDataReceival(iConfirmDataReceival* p_iConfirmDataReceival) {
    itsIConfirmDataReceival = p_iConfirmDataReceival;
}

void Controller::port_33_C::setItsIGetAlertDetails(iGetAlertDetails* p_iGetAlertDetails) {
    itsIGetAlertDetails = p_iGetAlertDetails;
}

void Controller::port_33_C::setItsIInitialize(iInitialize* p_iInitialize) {
    itsIInitialize = p_iInitialize;
}

void Controller::port_33_C::setItsIPrint(iPrint* p_iPrint) {
    itsIPrint = p_iPrint;
}

void Controller::port_33_C::setItsIUspijStacje(iUspijStacje* p_iUspijStacje) {
    itsIUspijStacje = p_iUspijStacje;
}

void Controller::port_33_C::cleanUpRelations() {
    if(itsIAktywujStacje != NULL)
        {
            itsIAktywujStacje = NULL;
        }
    if(itsICalibrateRequest != NULL)
        {
            itsICalibrateRequest = NULL;
        }
    if(itsIConfirmAlertReceival != NULL)
        {
            itsIConfirmAlertReceival = NULL;
        }
    if(itsIConfirmDataReceival != NULL)
        {
            itsIConfirmDataReceival = NULL;
        }
    if(itsIGetAlertDetails != NULL)
        {
            itsIGetAlertDetails = NULL;
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

Controller::port_35_C::port_35_C() : _p_(0) {
    itsIInform = NULL;
    itsISendAlert = NULL;
}

Controller::port_35_C::~port_35_C() {
    cleanUpRelations();
}

iInform* Controller::port_35_C::getItsIInform() {
    return this;
}

iSendAlert* Controller::port_35_C::getItsISendAlert() {
    return this;
}

Controller::port_35_C* Controller::port_35_C::getOutBound() {
    return this;
}

void Controller::port_35_C::inform() {
    
    if (itsIInform != NULL) {
        itsIInform->inform();
    }
    
}

void Controller::port_35_C::sendAlert() {
    
    if (itsISendAlert != NULL) {
        itsISendAlert->sendAlert();
    }
    
}

void Controller::port_35_C::setItsIInform(iInform* p_iInform) {
    itsIInform = p_iInform;
}

void Controller::port_35_C::setItsISendAlert(iSendAlert* p_iSendAlert) {
    itsISendAlert = p_iSendAlert;
}

void Controller::port_35_C::cleanUpRelations() {
    if(itsIInform != NULL)
        {
            itsIInform = NULL;
        }
    if(itsISendAlert != NULL)
        {
            itsISendAlert = NULL;
        }
}
//#]

Controller::Controller(IOxfActive* theActiveContext) : stationId(1)
 , stationStatus(standBy), whetherTimerRead(false) {
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
    //#]
}

void Controller::calibrate() {
    NOTIFY_OPERATION(calibrate, calibrate(), 0, MainPackage_Controller_calibrate_SERIALIZE);
    //#[ operation calibrate()
    //#]
}

void Controller::calibrateRequest() {
    NOTIFY_OPERATION(calibrateRequest, calibrateRequest(), 0, MainPackage_Controller_calibrateRequest_SERIALIZE);
    //#[ operation calibrateRequest()
    GEN(evCalibrate);
    //#]
}

void Controller::confirmAlert() {
    NOTIFY_OPERATION(confirmAlert, confirmAlert(), 0, MainPackage_Controller_confirmAlert_SERIALIZE);
    //#[ operation confirmAlert()
    GEN(confirmAlertReceival);
    //#]
}

void Controller::confirmReceival() {
    NOTIFY_OPERATION(confirmReceival, confirmReceival(), 0, MainPackage_Controller_confirmReceival_SERIALIZE);
    //#[ operation confirmReceival()
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

std::vector<std::pair<unsigned long long, std::pair<int,int>  >> Controller::getAlertDetails() {
    NOTIFY_OPERATION(getAlertDetails, getAlertDetails(), 0, MainPackage_Controller_getAlertDetails_SERIALIZE);
    //#[ operation getAlertDetails()
    std::vector<std::pair<unsigned long long, std::pair<int,int>>> temp;
    for (iterator++; iterator <= static_cast<int>(alert.size()); iterator++) {
    	if (alert[iterator]== true) 
    		temp.emplace_back(std::make_pair(dataPackage->getTime(),std::make_pair(iterator,static_cast<int>(getGivenPercentage(iterator)))));
    		//std::cout << "getAlertDetails(): " << dataPackage->getTime() << std::endl;
    }
    iterator = 0;
    return temp;
    //#]
}

StationData* Controller::getDataPackage() const {
    NOTIFY_OPERATION(getDataPackage, getDataPackage() const, 0, MainPackage_Controller_getDataPackage_SERIALIZE);
    //#[ operation getDataPackage() const
    return dataPackage;
    //#]
}

void Controller::initialize() {
    NOTIFY_OPERATION(initialize, initialize(), 0, MainPackage_Controller_initialize_SERIALIZE);
    //#[ operation initialize()
    GEN(evInitialize);
    //std::cout << "from rec to contr - initialize" << std::endl;
    //#]
}

bool Controller::isAnyAlert() {
    NOTIFY_OPERATION(isAnyAlert, isAnyAlert(), 0, MainPackage_Controller_isAnyAlert_SERIALIZE);
    //#[ operation isAnyAlert()
    bool temp = false;
    for (iterator++; iterator <=static_cast<int>(alert.size()); iterator++) {
    	if (alert[iterator] == true)
    		temp = true; 
    }          
    iterator = 0;
    //std::cout << "Czy ktorys element jest ponad poziom?" << temp << std::endl;
    return temp;
    //#]
}

void Controller::handleEnergySavingSystem() {
    NOTIFY_OPERATION(handleEnergySavingSystem, handleEnergySavingSystem(), 0, MainPackage_Controller_handleEnergySavingSystem_SERIALIZE);
    //#[ operation handleEnergySavingSystem()
    if(stationStatus != standBy)
    	stationStatus = standBy;
    if(stationStatus = standBy)
    	stationStatus = on;
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
    		<< "O3: " << dataPackage->get(1) << std::endl
    		<< "CO: " << dataPackage->get(2) << std::endl
    		<< "SO2: " << dataPackage->get(3) << std::endl
    		<< "NO2: " << dataPackage->get(4) << std::endl
    		<< "PM1: " << dataPackage->get(5) << std::endl
    		<< "PM2.5: " << dataPackage->get(6) << std::endl
    		<< "PM10: " << dataPackage->get(7) << std::endl
    		<< "thermometer " << dataPackage->get(8) << std::endl
    		<< "hygrometer: " << dataPackage->get(9) << std::endl
    		<< "barometer: " << dataPackage->get(10) << std::endl
    		<< "==========================================" << std::endl;
    		
    //		<< "O3: " << dataPackage->getO3() << std::endl;
    		//<< "O3: " << dataPackage->getO3() << std::endl;
    //#]
}

void Controller::readInfo() {
    NOTIFY_OPERATION(readInfo, readInfo(), 0, MainPackage_Controller_readInfo_SERIALIZE);
    //#[ operation readInfo()
    std::cout << "===============System information===========" << std::endl;
    std::cout << "station id: " << stationId << std::endl
    			<< "sensors:" << std::endl
    			<< "Annemometer id: " << itsAnnemometer.getId() << std::endl
    			<< "Rain Tipping Gauge id: " << itsRainAmountSensor.getId() << std::endl
    			<< "Wind Direction id: " << itsWindDirectionSensor.getId() << std::endl
    			<< "Temperature id: " << itsTemperatureSensor.getId() << std::endl
    			<< "Humidity id: " << itsHumiditySensor.getId() << std::endl
    			<< "Pressure id: " << itsPressureSensor.getId() << std::endl
    		
    		 << "============================================" << std::endl;  
    //#]
}

void Controller::resetAlert() {
    NOTIFY_OPERATION(resetAlert, resetAlert(), 0, MainPackage_Controller_resetAlert_SERIALIZE);
    //#[ operation resetAlert()
    for (iterator++; iterator <= static_cast<int>(alert.size()); iterator++) {
    	alert[iterator] = false;
    }
    iterator = 0;
    //#]
}

void Controller::setWhenDue(int which, double limit) {
    NOTIFY_OPERATION(setWhenDue, setWhenDue(int,double), 2, MainPackage_Controller_setWhenDue_SERIALIZE);
    //#[ operation setWhenDue(int,double)
    if(dataPackage->get(which)> limit)
    alert[which] = true;
    //std::cout << "setWhenDue: " << alert[which] << std::endl;
    //#]
}

void Controller::checkLevels() {
    NOTIFY_OPERATION(checkLevels, checkLevels(), 0, MainPackage_Controller_checkLevels_SERIALIZE);
    //#[ operation checkLevels()
    setWhenDue(1,240); //  o3
    setWhenDue(2,60);  //  co
    setWhenDue(3,500);  //  so2
    setWhenDue(4,400);  // no2
    setWhenDue(5,5);    //pm1
    setWhenDue(6,25);    // pm2.5
    setWhenDue(7,50);     //pm10
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

int Controller::getStopMeasurementFlag() const {
    return stopMeasurementFlag;
}

void Controller::setStopMeasurementFlag(int p_stopMeasurementFlag) {
    stopMeasurementFlag = p_stopMeasurementFlag;
    NOTIFY_SET_OPERATION;
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

bool Controller::getWhetherTimerRead() const {
    return whetherTimerRead;
}

void Controller::setWhetherTimerRead(bool p_whetherTimerRead) {
    whetherTimerRead = p_whetherTimerRead;
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

int Controller::getIterator() const {
    return iterator;
}

void Controller::setIterator(int p_iterator) {
    iterator = p_iterator;
}

void Controller::aktywujStacje() {
    NOTIFY_OPERATION(aktywujStacje, aktywujStacje(), 0, MainPackage_Controller_aktywujStacje_SERIALIZE);
    //#[ operation aktywujStacje()
    GEN(evActivate);
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
    return itsTimer.getTime();
    //#]
}

void Controller::stacjaAktywna() {
    NOTIFY_OPERATION(stacjaAktywna, stacjaAktywna(), 0, MainPackage_Controller_stacjaAktywna_SERIALIZE);
    //#[ operation stacjaAktywna()
    if (stopMeasurementFlag)
    	stopMeasurementFlag = false;
    //std::cout << stopMeasurementFlag << " in activation" << std::endl;
    //#]
}

void Controller::stacjaUspiona() {
    NOTIFY_OPERATION(stacjaUspiona, stacjaUspiona(), 0, MainPackage_Controller_stacjaUspiona_SERIALIZE);
    //#[ operation stacjaUspiona()
    if (!stopMeasurementFlag)
    	stopMeasurementFlag = true;
    std::cout << "Debug: entered non-active mode" << std::endl;
    //#]
}

void Controller::uspijStacje() {
    NOTIFY_OPERATION(uspijStacje, uspijStacje(), 0, MainPackage_Controller_uspijStacje_SERIALIZE);
    //#[ operation uspijStacje()
    GEN(UspijStacje);
    //#]
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

void Controller::setDataPackage(StationData* p_dataPackage) {
    dataPackage = p_dataPackage;
}

void Controller::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("2");
        NOTIFY_STATE_ENTERED("ROOT.STAND_BY_CONTROLLER");
        pushNullTransition();
        rootState_subState = STAND_BY_CONTROLLER;
        rootState_active = STAND_BY_CONTROLLER;
        //#[ state STAND_BY_CONTROLLER.(Entry) 
        handleEnergySavingSystem();
        //#]
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
        // State wysylanieAlertu
        case wysylanieAlertu:
        {
            if(IS_EVENT_TYPE_OF(confirmAlertReceival_MainPackage_id))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    NOTIFY_STATE_EXITED("ROOT.wysylanieAlertu");
                    //#[ transition 9 
                    resetAlert();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.DELETE_PACKAGE");
                    pushNullTransition();
                    rootState_subState = DELETE_PACKAGE;
                    rootState_active = DELETE_PACKAGE;
                    //#[ state DELETE_PACKAGE.(Entry) 
                    deletePackage();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
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
                    pushNullTransition();
                    rootState_subState = STAND_BY_CONTROLLER;
                    rootState_active = STAND_BY_CONTROLLER;
                    //#[ state STAND_BY_CONTROLLER.(Entry) 
                    handleEnergySavingSystem();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State checkLimits
        case checkLimits:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 7 
                    if(isAnyAlert())
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            NOTIFY_TRANSITION_STARTED("7");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.checkLimits");
                            NOTIFY_STATE_ENTERED("ROOT.wysylanieAlertu");
                            rootState_subState = wysylanieAlertu;
                            rootState_active = wysylanieAlertu;
                            //#[ state wysylanieAlertu.(Entry) 
                            OUT_PORT(port_35)->sendAlert();
                            //resetAlert();
                            
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("7");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("6");
                            NOTIFY_TRANSITION_STARTED("8");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.checkLimits");
                            NOTIFY_STATE_ENTERED("ROOT.DELETE_PACKAGE");
                            pushNullTransition();
                            rootState_subState = DELETE_PACKAGE;
                            rootState_active = DELETE_PACKAGE;
                            //#[ state DELETE_PACKAGE.(Entry) 
                            deletePackage();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("8");
                            NOTIFY_TRANSITION_TERMINATED("6");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State SIGNAL_JOIN_TIMER_SERVER_REQUEST
        case SIGNAL_JOIN_TIMER_SERVER_REQUEST:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 11 
                    if(whetherTimerRead)
                        {
                            NOTIFY_TRANSITION_STARTED("10");
                            NOTIFY_TRANSITION_STARTED("11");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.SIGNAL_JOIN_TIMER_SERVER_REQUEST");
                            NOTIFY_STATE_ENTERED("ROOT.checkLimits");
                            pushNullTransition();
                            rootState_subState = checkLimits;
                            rootState_active = checkLimits;
                            //#[ state checkLimits.(Entry) 
                            checkLevels();
                            whetherTimerRead = false;
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("11");
                            NOTIFY_TRANSITION_TERMINATED("10");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("10");
                            NOTIFY_TRANSITION_STARTED("12");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.SIGNAL_JOIN_TIMER_SERVER_REQUEST");
                            NOTIFY_STATE_ENTERED("ROOT.PACKAGE_READY");
                            rootState_subState = PACKAGE_READY;
                            rootState_active = PACKAGE_READY;
                            //#[ state PACKAGE_READY.(Entry) 
                            OUT_PORT(port_35)->inform();
                            
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.PACKAGE_READY");
                            NOTIFY_TRANSITION_TERMINATED("12");
                            NOTIFY_TRANSITION_TERMINATED("10");
                            res = eventConsumed;
                        }
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
                            NOTIFY_TRANSITION_STARTED("28");
                            //#[ transition 28 
                            std::cout<<"==========================" << std::endl;
                            GEN(evExitCalibration);
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("28");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evExitCalibration_MainPackage_id))
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.CALIBRATE");
                    NOTIFY_STATE_ENTERED("ROOT.STAND_BY_CONTROLLER");
                    pushNullTransition();
                    rootState_subState = STAND_BY_CONTROLLER;
                    rootState_active = STAND_BY_CONTROLLER;
                    //#[ state STAND_BY_CONTROLLER.(Entry) 
                    handleEnergySavingSystem();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_37
        case sendaction_37:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("15");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_37");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_38");
                            rootState_subState = sendaction_38;
                            rootState_active = sendaction_38;
                            //#[ state sendaction_38.(Entry) 
                            itsRainAmountSensor.GEN(readSensorMess);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_38");
                            NOTIFY_TRANSITION_TERMINATED("15");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evSendReadFromSensor_MainPackage_id))
                {
                    OMSETPARAMS(evSendReadFromSensor);
                    NOTIFY_TRANSITION_STARTED("21");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_37");
                    //#[ transition 21 
                    appendToPackage(itsAnnemometer.getId(),params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_38");
                    rootState_subState = sendaction_38;
                    rootState_active = sendaction_38;
                    //#[ state sendaction_38.(Entry) 
                    itsRainAmountSensor.GEN(readSensorMess);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_38");
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_38
        case sendaction_38:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("16");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_38");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_39");
                            rootState_subState = sendaction_39;
                            rootState_active = sendaction_39;
                            //#[ state sendaction_39.(Entry) 
                            itsWindDirectionSensor.GEN(readSensorMess);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_39");
                            NOTIFY_TRANSITION_TERMINATED("16");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evSendReadFromSensor_MainPackage_id))
                {
                    OMSETPARAMS(evSendReadFromSensor);
                    NOTIFY_TRANSITION_STARTED("22");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_38");
                    //#[ transition 22 
                    appendToPackage(itsRainAmountSensor.getId(),params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_39");
                    rootState_subState = sendaction_39;
                    rootState_active = sendaction_39;
                    //#[ state sendaction_39.(Entry) 
                    itsWindDirectionSensor.GEN(readSensorMess);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_39");
                    NOTIFY_TRANSITION_TERMINATED("22");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_39
        case sendaction_39:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("17");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_39");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_40");
                            rootState_subState = sendaction_40;
                            rootState_active = sendaction_40;
                            //#[ state sendaction_40.(Entry) 
                            itsTemperatureSensor.GEN(readSensorMess);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_40");
                            NOTIFY_TRANSITION_TERMINATED("17");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evSendReadFromSensor_MainPackage_id))
                {
                    OMSETPARAMS(evSendReadFromSensor);
                    NOTIFY_TRANSITION_STARTED("23");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_39");
                    //#[ transition 23 
                    appendToPackage(itsWindDirectionSensor.getId(),params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_40");
                    rootState_subState = sendaction_40;
                    rootState_active = sendaction_40;
                    //#[ state sendaction_40.(Entry) 
                    itsTemperatureSensor.GEN(readSensorMess);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_40");
                    NOTIFY_TRANSITION_TERMINATED("23");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_40
        case sendaction_40:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("18");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_40");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_41");
                            rootState_subState = sendaction_41;
                            rootState_active = sendaction_41;
                            //#[ state sendaction_41.(Entry) 
                            itsHumiditySensor.GEN(readSensorMess);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_41");
                            NOTIFY_TRANSITION_TERMINATED("18");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evSendReadFromSensor_MainPackage_id))
                {
                    OMSETPARAMS(evSendReadFromSensor);
                    NOTIFY_TRANSITION_STARTED("24");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_40");
                    //#[ transition 24 
                    appendToPackage(itsTemperatureSensor.getId(), params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_41");
                    rootState_subState = sendaction_41;
                    rootState_active = sendaction_41;
                    //#[ state sendaction_41.(Entry) 
                    itsHumiditySensor.GEN(readSensorMess);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_41");
                    NOTIFY_TRANSITION_TERMINATED("24");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_41
        case sendaction_41:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("19");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_41");
                            NOTIFY_STATE_ENTERED("ROOT.sendaction_42");
                            rootState_subState = sendaction_42;
                            rootState_active = sendaction_42;
                            //#[ state sendaction_42.(Entry) 
                            itsPressureSensor.GEN(readSensorMess);
                            //#]
                            rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_42");
                            NOTIFY_TRANSITION_TERMINATED("19");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evSendReadFromSensor_MainPackage_id))
                {
                    OMSETPARAMS(evSendReadFromSensor);
                    NOTIFY_TRANSITION_STARTED("25");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_41");
                    //#[ transition 25 
                    appendToPackage(itsHumiditySensor.getId() ,params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_42");
                    rootState_subState = sendaction_42;
                    rootState_active = sendaction_42;
                    //#[ state sendaction_42.(Entry) 
                    itsPressureSensor.GEN(readSensorMess);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_42");
                    NOTIFY_TRANSITION_TERMINATED("25");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_42
        case sendaction_42:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("20");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.sendaction_42");
                            NOTIFY_STATE_ENTERED("ROOT.SIGNAL_JOIN_TIMER_SERVER_REQUEST");
                            pushNullTransition();
                            rootState_subState = SIGNAL_JOIN_TIMER_SERVER_REQUEST;
                            rootState_active = SIGNAL_JOIN_TIMER_SERVER_REQUEST;
                            NOTIFY_TRANSITION_TERMINATED("20");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evSendReadFromSensor_MainPackage_id))
                {
                    OMSETPARAMS(evSendReadFromSensor);
                    NOTIFY_TRANSITION_STARTED("26");
                    cancel(rootState_timeout);
                    NOTIFY_STATE_EXITED("ROOT.sendaction_42");
                    //#[ transition 26 
                    appendToPackage(itsPressureSensor.getId() ,params->valueBeingSent);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.SIGNAL_JOIN_TIMER_SERVER_REQUEST");
                    pushNullTransition();
                    rootState_subState = SIGNAL_JOIN_TIMER_SERVER_REQUEST;
                    rootState_active = SIGNAL_JOIN_TIMER_SERVER_REQUEST;
                    NOTIFY_TRANSITION_TERMINATED("26");
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
                    NOTIFY_TRANSITION_STARTED("27");
                    NOTIFY_STATE_EXITED("ROOT.sendaction_44");
                    //#[ transition 27 
                    createPackage(params->time);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_37");
                    rootState_subState = sendaction_37;
                    rootState_active = sendaction_37;
                    //#[ state sendaction_37.(Entry) 
                    itsAnnemometer.GEN(readSensorMess);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_37");
                    NOTIFY_TRANSITION_TERMINATED("27");
                    res = eventConsumed;
                }
            
        }
        break;
        // State INTO_NON_ACTIVE
        case INTO_NON_ACTIVE:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("30");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.INTO_NON_ACTIVE");
                    NOTIFY_STATE_ENTERED("ROOT.STAND_BY_CONTROLLER");
                    pushNullTransition();
                    rootState_subState = STAND_BY_CONTROLLER;
                    rootState_active = STAND_BY_CONTROLLER;
                    //#[ state STAND_BY_CONTROLLER.(Entry) 
                    handleEnergySavingSystem();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("30");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ACTIVATE
        case ACTIVATE:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("32");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ACTIVATE");
                    NOTIFY_STATE_ENTERED("ROOT.STAND_BY_CONTROLLER");
                    pushNullTransition();
                    rootState_subState = STAND_BY_CONTROLLER;
                    rootState_active = STAND_BY_CONTROLLER;
                    //#[ state STAND_BY_CONTROLLER.(Entry) 
                    handleEnergySavingSystem();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("32");
                    res = eventConsumed;
                }
            
        }
        break;
        // State READ_INFO
        case READ_INFO:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("33");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.READ_INFO");
                    NOTIFY_STATE_ENTERED("ROOT.STAND_BY_CONTROLLER");
                    pushNullTransition();
                    rootState_subState = STAND_BY_CONTROLLER;
                    rootState_active = STAND_BY_CONTROLLER;
                    //#[ state STAND_BY_CONTROLLER.(Entry) 
                    handleEnergySavingSystem();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("33");
                    res = eventConsumed;
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
    if(IS_EVENT_TYPE_OF(evCalibrate_MainPackage_id))
        {
            //## transition 13 
            if(stopMeasurementFlag)
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.STAND_BY_CONTROLLER");
                    //#[ transition 13 
                    handleEnergySavingSystem();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.CALIBRATE");
                    rootState_subState = CALIBRATE;
                    rootState_active = CALIBRATE;
                    //#[ state CALIBRATE.(Entry) 
                    calibrate();
                    std::cout << "=====calibration=====" << std::endl;
                    //#]
                    rootState_timeout = scheduleTimeout(1000, "ROOT.CALIBRATE");
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evActivate_MainPackage_id))
        {
            NOTIFY_TRANSITION_STARTED("31");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.STAND_BY_CONTROLLER");
            NOTIFY_STATE_ENTERED("ROOT.ACTIVATE");
            pushNullTransition();
            rootState_subState = ACTIVATE;
            rootState_active = ACTIVATE;
            //#[ state ACTIVATE.(Entry) 
            stacjaAktywna();
            //#]
            NOTIFY_TRANSITION_TERMINATED("31");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evToNonactive_MainPackage_id))
        {
            NOTIFY_TRANSITION_STARTED("29");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.STAND_BY_CONTROLLER");
            NOTIFY_STATE_ENTERED("ROOT.INTO_NON_ACTIVE");
            pushNullTransition();
            rootState_subState = INTO_NON_ACTIVE;
            rootState_active = INTO_NON_ACTIVE;
            //#[ state INTO_NON_ACTIVE.(Entry) 
            stacjaUspiona();
            //#]
            NOTIFY_TRANSITION_TERMINATED("29");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            NOTIFY_TRANSITION_STARTED("34");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.STAND_BY_CONTROLLER");
            NOTIFY_STATE_ENTERED("ROOT.READ_INFO");
            pushNullTransition();
            rootState_subState = READ_INFO;
            rootState_active = READ_INFO;
            //#[ state READ_INFO.(Entry) 
            readInfo();
            //#]
            NOTIFY_TRANSITION_TERMINATED("34");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evInitialize_MainPackage_id))
        {
            //## transition 0 
            if(!stopMeasurementFlag)
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.STAND_BY_CONTROLLER");
                    //#[ transition 0 
                    handleEnergySavingSystem();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_44");
                    rootState_subState = sendaction_44;
                    rootState_active = sendaction_44;
                    //#[ state sendaction_44.(Entry) 
                    itsTimer.GEN(requestTime);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evTimerInitialize_MainPackage_id))
        {
            OMSETPARAMS(evTimerInitialize);
            //## transition 3 
            if(!stopMeasurementFlag)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.STAND_BY_CONTROLLER");
                    //#[ transition 3 
                    handleEnergySavingSystem();whetherTimerRead=true;createPackage(params->time);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_37");
                    rootState_subState = sendaction_37;
                    rootState_active = sendaction_37;
                    //#[ state sendaction_37.(Entry) 
                    itsAnnemometer.GEN(readSensorMess);
                    //#]
                    rootState_timeout = scheduleTimeout(150, "ROOT.sendaction_37");
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedController::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("stationId", x2String(myReal->stationId));
    aomsAttributes->addAttribute("dataPackage", X2ITEM(myReal->dataPackage));
    aomsAttributes->addAttribute("time", x2String(myReal->time));
    aomsAttributes->addAttribute("stationStatus", x2String((int)myReal->stationStatus));
    aomsAttributes->addAttribute("alert", UNKNOWN2STRING(myReal->alert));
    aomsAttributes->addAttribute("iterator", x2String(myReal->iterator));
    aomsAttributes->addAttribute("whetherTimerRead", x2String(myReal->whetherTimerRead));
    aomsAttributes->addAttribute("stopMeasurementFlag", x2String(myReal->stopMeasurementFlag));
    OMAnimatediPrint::serializeAttributes(aomsAttributes);
    OMAnimatediInitialize::serializeAttributes(aomsAttributes);
    OMAnimatediConfirmDataReceival::serializeAttributes(aomsAttributes);
    OMAnimatediGetAlertDetails::serializeAttributes(aomsAttributes);
    OMAnimatediCalibrateRequest::serializeAttributes(aomsAttributes);
    OMAnimatediConfirmAlertReceival::serializeAttributes(aomsAttributes);
    OMAnimatediAktywujStacje::serializeAttributes(aomsAttributes);
    OMAnimatediUspijStacje::serializeAttributes(aomsAttributes);
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
    OMAnimatediPrint::serializeRelations(aomsRelations);
    OMAnimatediInitialize::serializeRelations(aomsRelations);
    OMAnimatediConfirmDataReceival::serializeRelations(aomsRelations);
    OMAnimatediGetAlertDetails::serializeRelations(aomsRelations);
    OMAnimatediCalibrateRequest::serializeRelations(aomsRelations);
    OMAnimatediConfirmAlertReceival::serializeRelations(aomsRelations);
    OMAnimatediAktywujStacje::serializeRelations(aomsRelations);
    OMAnimatediUspijStacje::serializeRelations(aomsRelations);
}

void OMAnimatedController::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Controller::STAND_BY_CONTROLLER:
        {
            STAND_BY_CONTROLLER_serializeStates(aomsState);
        }
        break;
        case Controller::wysylanieAlertu:
        {
            wysylanieAlertu_serializeStates(aomsState);
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
        case Controller::checkLimits:
        {
            checkLimits_serializeStates(aomsState);
        }
        break;
        case Controller::SIGNAL_JOIN_TIMER_SERVER_REQUEST:
        {
            SIGNAL_JOIN_TIMER_SERVER_REQUEST_serializeStates(aomsState);
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
        case Controller::INTO_NON_ACTIVE:
        {
            INTO_NON_ACTIVE_serializeStates(aomsState);
        }
        break;
        case Controller::ACTIVATE:
        {
            ACTIVATE_serializeStates(aomsState);
        }
        break;
        case Controller::READ_INFO:
        {
            READ_INFO_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedController::wysylanieAlertu_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.wysylanieAlertu");
}

void OMAnimatedController::STAND_BY_CONTROLLER_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.STAND_BY_CONTROLLER");
}

void OMAnimatedController::SIGNAL_JOIN_TIMER_SERVER_REQUEST_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SIGNAL_JOIN_TIMER_SERVER_REQUEST");
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

void OMAnimatedController::READ_INFO_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.READ_INFO");
}

void OMAnimatedController::PACKAGE_READY_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PACKAGE_READY");
}

void OMAnimatedController::INTO_NON_ACTIVE_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.INTO_NON_ACTIVE");
}

void OMAnimatedController::DELETE_PACKAGE_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DELETE_PACKAGE");
}

void OMAnimatedController::checkLimits_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.checkLimits");
}

void OMAnimatedController::CALIBRATE_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CALIBRATE");
}

void OMAnimatedController::ACTIVATE_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ACTIVATE");
}
//#]

IMPLEMENT_REACTIVE_META_M_P(Controller, MainPackage, false, _ControllerSuper, 8, OMAnimatedController)

OMINIT_SUPERCLASS(iPrint, OMAnimatediPrint)

OMINIT_SUPERCLASS(iInitialize, OMAnimatediInitialize)

OMINIT_SUPERCLASS(iConfirmDataReceival, OMAnimatediConfirmDataReceival)

OMINIT_SUPERCLASS(iGetAlertDetails, OMAnimatediGetAlertDetails)

OMINIT_SUPERCLASS(iCalibrateRequest, OMAnimatediCalibrateRequest)

OMINIT_SUPERCLASS(iConfirmAlertReceival, OMAnimatediConfirmAlertReceival)

OMINIT_SUPERCLASS(iAktywujStacje, OMAnimatediAktywujStacje)

OMINIT_SUPERCLASS(iUspijStacje, OMAnimatediUspijStacje)

OMREGISTER_REACTIVE_CLASS

IMPLEMENT_META_OBJECT_P(Controller::object_0, Controller::object_0_C, MainPackage, MainPackage, false, OMAnimatedobject_0_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Controller.cpp
*********************************************************************/
