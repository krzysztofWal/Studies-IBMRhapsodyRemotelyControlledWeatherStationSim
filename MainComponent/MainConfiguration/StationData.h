/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: MainComponent 
	Configuration 	: MainConfiguration
	Model Element	: StationData
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: MainComponent\MainConfiguration\StationData.h
*********************************************************************/

#ifndef StationData_H
#define StationData_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "MainPackage.h"
//## auto_generated
#include <map>
//## auto_generated
#include <utility>
//## auto_generated
#include <vector>
//## auto_generated
#include <fstream>
//## auto_generated
#include <climits>
//## auto_generated
#include <string>
//## auto_generated
#include <cstdlib>
//## auto_generated
#include <ctime>
//## auto_generated
#include <math.h>
//## package MainPackage

//## class StationData
class StationData {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStationData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## operation StationData(unsigned long long)
    StationData(unsigned long long time);
    
    //## operation StationData()
    StationData();
    
    //## auto_generated
    ~StationData();
    
    ////    Operations    ////
    
    //## operation get(int)
    double get(int which);
    
    //## operation getTime()
    unsigned long long getTime();
    
    //## operation set(int,double)
    void set(int which, double value);
    
    ////    Additional operations    ////

private :

    //## auto_generated
    double getDirectionSensorVal() const;
    
    //## auto_generated
    void setDirectionSensorVal(double p_directionSensorVal);
    
    //## auto_generated
    double getHumidityVal() const;
    
    //## auto_generated
    void setHumidityVal(double p_humidityVal);
    
    //## auto_generated
    double getPressureVal() const;
    
    //## auto_generated
    void setPressureVal(double p_pressureVal);
    
    //## auto_generated
    double getRainVal() const;
    
    //## auto_generated
    void setRainVal(double p_rainVal);
    
    //## auto_generated
    double getSpeedVal() const;
    
    //## auto_generated
    void setSpeedVal(double p_speedVal);
    
    //## auto_generated
    double getStationId() const;
    
    //## auto_generated
    void setStationId(double p_stationId);
    
    //## auto_generated
    double getTempVal() const;
    
    //## auto_generated
    void setTempVal(double p_tempVal);
    
    //## auto_generated
    void setTime(unsigned long long p_time);
    
    ////    Attributes    ////

protected :

    double directionSensorVal;		//## attribute directionSensorVal
    
    double humidityVal;		//## attribute humidityVal
    
    double pressureVal;		//## attribute pressureVal
    
    double rainVal;		//## attribute rainVal
    
    double speedVal;		//## attribute speedVal
    
    double stationId;		//## attribute stationId
    
    double tempVal;		//## attribute tempVal
    
    unsigned long long time;		//## attribute time
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStationData : virtual public AOMInstance {
    DECLARE_META(StationData, OMAnimatedStationData)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: MainComponent\MainConfiguration\StationData.h
*********************************************************************/
