/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: MainComponent 
	Configuration 	: MainConfiguration
	Model Element	: StationData
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: MainComponent\MainConfiguration\StationData.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "StationData.h"
//#[ ignore
#define MainPackage_StationData_set_SERIALIZE \
    aomsmethod->addAttribute("which", x2String(which));\
    aomsmethod->addAttribute("value", x2String(value));
#define MainPackage_StationData_StationData_SERIALIZE aomsmethod->addAttribute("time", x2String(time));

#define OM_MainPackage_StationData_StationData_1_SERIALIZE OM_NO_OP

#define MainPackage_StationData_get_SERIALIZE aomsmethod->addAttribute("which", x2String(which));

#define MainPackage_StationData_getTime_SERIALIZE OM_NO_OP
//#]

//## package MainPackage

//## class StationData
StationData::StationData(unsigned long long time) : directionSensorVal(0), humidityVal(0), pressureVal(0), rainVal(0), speedVal(0), stationId(0), tempVal(0), time(time) {
    NOTIFY_CONSTRUCTOR(StationData, StationData(unsigned long long), 1, MainPackage_StationData_StationData_SERIALIZE);
    //#[ operation StationData(unsigned long long)
    //std::cout << "Created StationData object with time: "<< getTime() << std::endl;
    //#]
}

StationData::StationData() : directionSensorVal(0), humidityVal(0), pressureVal(0), rainVal(0), speedVal(0), stationId(0), tempVal(0), time(0) {
    NOTIFY_CONSTRUCTOR(StationData, StationData(), 0, OM_MainPackage_StationData_StationData_1_SERIALIZE);
    //#[ operation StationData()
    //#]
}

StationData::~StationData() {
    NOTIFY_DESTRUCTOR(~StationData, true);
}

double StationData::get(int which) {
    NOTIFY_OPERATION(get, get(int), 1, MainPackage_StationData_get_SERIALIZE);
    //#[ operation get(int)
    switch(which){
    case WIND_SPEED_SENS:
    	return this->speedVal;
    case RAIN_AMOUNT_SENS:
    	return this->rainVal; 
    case WIND_DIR_SENS:
    	return this->directionSensorVal;
    case TEMP_SENS:
    	return this->tempVal;
    case HUMID_SENS:
    	return this->humidityVal;
    case PRESSURE_SENS:
    	return this->pressureVal;
    default:
    	std::cout << "DEBUG: ERROR: Reached default in StationData::get()" << std::endl;
    	return DBL_MAX;
    }
    //#]
}

unsigned long long StationData::getTime() {
    NOTIFY_OPERATION(getTime, getTime(), 0, MainPackage_StationData_getTime_SERIALIZE);
    //#[ operation getTime()
    return time;
    //#]
}

void StationData::set(int which, double value) {
    NOTIFY_OPERATION(set, set(int,double), 2, MainPackage_StationData_set_SERIALIZE);
    //#[ operation set(int,double)
    switch(which){
    case WIND_SPEED_SENS:
    	this->speedVal = value;
    	break;
    case RAIN_AMOUNT_SENS:
    	this->rainVal = value;
    	break; 
    case WIND_DIR_SENS:
    	this->directionSensorVal = value;   
    	break;
    case TEMP_SENS:
    	this->tempVal = value;   
    	break;
    case HUMID_SENS:
    	this->humidityVal = value; 
    	break;
    case PRESSURE_SENS:
    	this->pressureVal = value;   
    	break;
    default:
    	std::cout << "DEBUG: ERROR: Reached default in StationData::set()" << std::endl;
    }
    
    //#]
}

double StationData::getDirectionSensorVal() const {
    return directionSensorVal;
}

void StationData::setDirectionSensorVal(double p_directionSensorVal) {
    directionSensorVal = p_directionSensorVal;
}

double StationData::getHumidityVal() const {
    return humidityVal;
}

void StationData::setHumidityVal(double p_humidityVal) {
    humidityVal = p_humidityVal;
}

double StationData::getPressureVal() const {
    return pressureVal;
}

void StationData::setPressureVal(double p_pressureVal) {
    pressureVal = p_pressureVal;
}

double StationData::getRainVal() const {
    return rainVal;
}

void StationData::setRainVal(double p_rainVal) {
    rainVal = p_rainVal;
}

double StationData::getSpeedVal() const {
    return speedVal;
}

void StationData::setSpeedVal(double p_speedVal) {
    speedVal = p_speedVal;
}

double StationData::getStationId() const {
    return stationId;
}

void StationData::setStationId(double p_stationId) {
    stationId = p_stationId;
}

double StationData::getTempVal() const {
    return tempVal;
}

void StationData::setTempVal(double p_tempVal) {
    tempVal = p_tempVal;
}

void StationData::setTime(unsigned long long p_time) {
    time = p_time;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStationData::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("time", x2String(myReal->time));
    aomsAttributes->addAttribute("stationId", x2String(myReal->stationId));
    aomsAttributes->addAttribute("humidityVal", x2String(myReal->humidityVal));
    aomsAttributes->addAttribute("directionSensorVal", x2String(myReal->directionSensorVal));
    aomsAttributes->addAttribute("speedVal", x2String(myReal->speedVal));
    aomsAttributes->addAttribute("tempVal", x2String(myReal->tempVal));
    aomsAttributes->addAttribute("pressureVal", x2String(myReal->pressureVal));
    aomsAttributes->addAttribute("rainVal", x2String(myReal->rainVal));
}
//#]

IMPLEMENT_META_P(StationData, MainPackage, MainPackage, false, OMAnimatedStationData)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MainComponent\MainConfiguration\StationData.cpp
*********************************************************************/
