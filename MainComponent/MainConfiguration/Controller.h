/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: MainComponent 
	Configuration 	: MainConfiguration
	Model Element	: Controller
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: MainComponent\MainConfiguration\Controller.h
*********************************************************************/

#ifndef Controller_H
#define Controller_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## dependency StationData
#include "StationData.h"
//## link itsTimer
#include "Timer.h"
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
#include "MainPackage.h"
//## link itsAnnemometer
#include "Annemometer.h"
//## link itsHumiditySensor
#include "HumiditySensor.h"
//## link itsPressureSensor
#include "PressureSensor.h"
//## link itsRainAmountSensor
#include "RainAmountSensor.h"
//## link itsTemperatureSensor
#include "TemperatureSensor.h"
//## link itsWindDirectionSensor
#include "WindDirectionSensor.h"
//## auto_generated
#include <string>
//## auto_generated
#include <cstdlib>
//## auto_generated
#include <ctime>
//## auto_generated
#include <math.h>
//## class Controller
#include "iToStation.h"
//## class port_35_C
#include "iToServer.h"
//## package MainPackage

//## class Controller
class Controller : public OMThread, public OMReactive, public iToStation {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedController;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior();

private :

    //## auto_generated
    int getStationId() const;
    
    //## auto_generated
    void setStationId(int p_stationId);
    
    //## auto_generated
    int getStationStatus() const;

protected :

    //## auto_generated
    void initRelations();
    
    ////    Attributes    ////
    
    int stationId;		//## attribute stationId
    
    ////    Relations and components    ////
    
    PressureSensor itsPressureSensor;		//## link itsPressureSensor
    
    HumiditySensor itsHumiditySensor;		//## link itsHumiditySensor
    
    TemperatureSensor itsTemperatureSensor;		//## link itsTemperatureSensor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    virtual void destroy();
    
    //## operation Controller()
    Controller(IOxfActive* theActiveContext = 0);
    
    //## class Controller::object_0
    class object_0_C {
        ////    Friends    ////
        
    public :
    
    #ifdef _OMINSTRUMENT
        friend class OMAnimatedobject_0_C;
    #endif // _OMINSTRUMENT
    
        ////    Constructors and destructors    ////
        
        //## auto_generated
        object_0_C();
        
        //## auto_generated
        ~object_0_C();
    };
    
//#[ ignore
    //## package MainPackage
    class port_33_C : public iToStation {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_33_C();
        
        //## auto_generated
        virtual ~port_33_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectController(Controller* part);
        
        //## auto_generated
        virtual void evActivateWrap();
        
        //## auto_generated
        virtual void evCalibrateWrap(int whichSensor);
        
        //## auto_generated
        virtual void evConfirmPackageReceivalWrap();
        
        //## auto_generated
        virtual void evGetInfoWrap();
        
        //## auto_generated
        virtual void evInitializeWrap();
        
        //## auto_generated
        virtual void evToNonactiveWrap();
        
        //## auto_generated
        iToStation* getItsIToStation();
        
        //## auto_generated
        virtual StationData print();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIToStation(iToStation* p_iToStation);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        iToStation* itsIToStation;		//## link itsIToStation
    };
    
    //## package MainPackage
    class port_35_C : public iToServer {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_35_C();
        
        //## auto_generated
        virtual ~port_35_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void evAlertWithdrawWrap();
        
        //## auto_generated
        virtual void evBatteryAlarmWrap();
        
        //## auto_generated
        virtual void evInformPackReadyWrap();
        
        //## auto_generated
        virtual void getInfo(
        std::string info, int batteryLvl);
        
        //## auto_generated
        iToServer* getItsIToServer();
        
        //## auto_generated
        iToServer* getOutBound();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIToServer(iToServer* p_iToServer);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        iToServer* itsIToServer;		//## link itsIToServer
    };
//#]

    //## auto_generated
    ~Controller();
    
    //## operation appendToPackage(int,double)
    void appendToPackage(int whichSensor, double value);
    
    //## operation calibrate()
    void calibrate();
    
    //## operation evCalibrateWrap(int)
    void evCalibrateWrap(int whichSensor);
    
    //## operation evConfirmPackageReceivalWrap()
    void evConfirmPackageReceivalWrap();
    
    //## operation createPackage(unsigned long long)
    void createPackage(unsigned long long time);
    
    //## operation deletePackage()
    void deletePackage();
    
    //## operation getDataPackage() const
    StationData* getDataPackage() const;
    
    //## operation evInitializeWrap()
    void evInitializeWrap();
    
    //## operation print()
    StationData print();
    
    //## operation printPackage()
    void printPackage();
    
    //## auto_generated
    port_33_C* getPort_33() const;
    
    //## auto_generated
    port_33_C* get_port_33() const;
    
    //## auto_generated
    port_35_C* getPort_35() const;
    
    //## auto_generated
    port_35_C* get_port_35() const;
    
    //## auto_generated
    Timer* getItsTimer() const;
    
    //## auto_generated
    object_0_C* getObject_0() const;

private :

    //## auto_generated
    std::map<int, bool> getAlert() const;
    
    //## auto_generated
    void setAlert(std::map<int, bool> p_alert);
    
    //## auto_generated
    unsigned long long getTime() const;
    
    //## auto_generated
    void setTime(unsigned long long p_time);

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    std::map<int, bool> alert;		//## attribute alert
    
    StationData* dataPackage;		//## attribute dataPackage
    
    int stationStatus;		//## attribute stationStatus
    
    unsigned long long time;		//## attribute time
    
    WindDirectionSensor itsWindDirectionSensor;		//## link itsWindDirectionSensor
    
    Annemometer itsAnnemometer;		//## link itsAnnemometer
    
    RainAmountSensor itsRainAmountSensor;		//## link itsRainAmountSensor
    
    Timer itsTimer;		//## link itsTimer

public :

    //## operation activate()
    void activate();
    
    //## operation batteryCheck()
    void batteryCheck();
    
    //## operation batteryCheckLPM()
    void batteryCheckLPM();
    
    //## operation evActivateWrap()
    void evActivateWrap();
    
    //## operation evGetInfoWrap()
    void evGetInfoWrap();
    
    //## operation evToNonactiveWrap()
    void evToNonactiveWrap();
    
    //## operation getGivenPercentage(int) const
    double getGivenPercentage(int position) const;
    
    //## operation giveGenTime()
    unsigned long long giveGenTime();
    
    //## operation makeInfoStr()
    std::string makeInfoStr();
    
    //## operation toNonactive()
    void toNonactive();
    
    //## auto_generated
    void setBatteryLevel(int p_batteryLevel);
    
    //## auto_generated
    Annemometer* getItsAnnemometer() const;
    
    //## auto_generated
    HumiditySensor* getItsHumiditySensor() const;
    
    //## auto_generated
    PressureSensor* getItsPressureSensor() const;
    
    //## auto_generated
    RainAmountSensor* getItsRainAmountSensor() const;
    
    //## auto_generated
    TemperatureSensor* getItsTemperatureSensor() const;
    
    //## auto_generated
    WindDirectionSensor* getItsWindDirectionSensor() const;

private :

    //## auto_generated
    void setAlertSet(bool p_alertSet);
    
    //## auto_generated
    int getBatteryLevel() const;
    
    //## auto_generated
    int getWhichSensorCal() const;
    
    //## auto_generated
    void setWhichSensorCal(int p_whichSensorCal);

protected :

    bool alertSet;		//## attribute alertSet
    
    int batteryLevel;		//## attribute batteryLevel
    
    int whichSensorCal;		//## attribute whichSensorCal

public :

    //## operation getAlertSet()
    bool getAlertSet();

private :

    //## auto_generated
    void setDataPackage(StationData* p_dataPackage);
    
    //## auto_generated
    void setStationStatus(int p_stationStatus);

protected :

//#[ ignore
    port_33_C port_33;
    
    port_35_C port_35;
//#]

    object_0_C object_0;		//## classInstance object_0

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // STAND_BY_CONTROLLER:
    //## statechart_method
    inline bool STAND_BY_CONTROLLER_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus STAND_BY_CONTROLLER_handleEvent();
    
    // sendaction_44:
    //## statechart_method
    inline bool sendaction_44_IN() const;
    
    // sendaction_42:
    //## statechart_method
    inline bool sendaction_42_IN() const;
    
    // sendaction_41:
    //## statechart_method
    inline bool sendaction_41_IN() const;
    
    // sendaction_40:
    //## statechart_method
    inline bool sendaction_40_IN() const;
    
    // sendaction_39:
    //## statechart_method
    inline bool sendaction_39_IN() const;
    
    // sendaction_38:
    //## statechart_method
    inline bool sendaction_38_IN() const;
    
    // sendaction_37:
    //## statechart_method
    inline bool sendaction_37_IN() const;
    
    // SEND_INFO:
    //## statechart_method
    inline bool SEND_INFO_IN() const;
    
    // SEND_ALERT_WITHDRAW:
    //## statechart_method
    inline bool SEND_ALERT_WITHDRAW_IN() const;
    
    // SEND_ALERT:
    //## statechart_method
    inline bool SEND_ALERT_IN() const;
    
    // PACKAGE_READY:
    //## statechart_method
    inline bool PACKAGE_READY_IN() const;
    
    // NON_ACTIVE:
    //## statechart_method
    inline bool NON_ACTIVE_IN() const;
    
    // DELETE_PACKAGE:
    //## statechart_method
    inline bool DELETE_PACKAGE_IN() const;
    
    // CALIBRATE:
    //## statechart_method
    inline bool CALIBRATE_IN() const;
    
    // BATTERY_LEVEL_LOW:
    //## statechart_method
    inline bool BATTERY_LEVEL_LOW_IN() const;

protected :

//#[ ignore
    enum Controller_Enum {
        OMNonState = 0,
        STAND_BY_CONTROLLER = 1,
        sendaction_44 = 2,
        sendaction_42 = 3,
        sendaction_41 = 4,
        sendaction_40 = 5,
        sendaction_39 = 6,
        sendaction_38 = 7,
        sendaction_37 = 8,
        SEND_INFO = 9,
        SEND_ALERT_WITHDRAW = 10,
        SEND_ALERT = 11,
        PACKAGE_READY = 12,
        NON_ACTIVE = 13,
        DELETE_PACKAGE = 14,
        CALIBRATE = 15,
        BATTERY_LEVEL_LOW = 16
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedController : public OMAnimatediToStation {
    DECLARE_REACTIVE_META(Controller, OMAnimatedController)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void STAND_BY_CONTROLLER_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_44_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_42_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_41_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_40_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_39_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_38_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_37_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SEND_INFO_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SEND_ALERT_WITHDRAW_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SEND_ALERT_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PACKAGE_READY_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void NON_ACTIVE_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DELETE_PACKAGE_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CALIBRATE_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void BATTERY_LEVEL_LOW_serializeStates(AOMSState* aomsState) const;
};

class OMAnimatedobject_0_C : virtual public AOMInstance {
    DECLARE_META(Controller::object_0_C, OMAnimatedobject_0_C)
};
//#]
#endif // _OMINSTRUMENT

inline bool Controller::rootState_IN() const {
    return true;
}

inline bool Controller::STAND_BY_CONTROLLER_IN() const {
    return rootState_subState == STAND_BY_CONTROLLER;
}

inline bool Controller::sendaction_44_IN() const {
    return rootState_subState == sendaction_44;
}

inline bool Controller::sendaction_42_IN() const {
    return rootState_subState == sendaction_42;
}

inline bool Controller::sendaction_41_IN() const {
    return rootState_subState == sendaction_41;
}

inline bool Controller::sendaction_40_IN() const {
    return rootState_subState == sendaction_40;
}

inline bool Controller::sendaction_39_IN() const {
    return rootState_subState == sendaction_39;
}

inline bool Controller::sendaction_38_IN() const {
    return rootState_subState == sendaction_38;
}

inline bool Controller::sendaction_37_IN() const {
    return rootState_subState == sendaction_37;
}

inline bool Controller::SEND_INFO_IN() const {
    return rootState_subState == SEND_INFO;
}

inline bool Controller::SEND_ALERT_WITHDRAW_IN() const {
    return rootState_subState == SEND_ALERT_WITHDRAW;
}

inline bool Controller::SEND_ALERT_IN() const {
    return rootState_subState == SEND_ALERT;
}

inline bool Controller::PACKAGE_READY_IN() const {
    return rootState_subState == PACKAGE_READY;
}

inline bool Controller::NON_ACTIVE_IN() const {
    return rootState_subState == NON_ACTIVE;
}

inline bool Controller::DELETE_PACKAGE_IN() const {
    return rootState_subState == DELETE_PACKAGE;
}

inline bool Controller::CALIBRATE_IN() const {
    return rootState_subState == CALIBRATE;
}

inline bool Controller::BATTERY_LEVEL_LOW_IN() const {
    return rootState_subState == BATTERY_LEVEL_LOW;
}

#endif
/*********************************************************************
	File Path	: MainComponent\MainConfiguration\Controller.h
*********************************************************************/
