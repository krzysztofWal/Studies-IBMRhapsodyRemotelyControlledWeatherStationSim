/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\Controller.h
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
//## class Controller
#include "iCalibrateRequest.h"
//## class Controller
#include "iConfirmDataReceival.h"
//## class Controller
#include "iInitialize.h"
//## class Controller
#include "iPrint.h"
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
//## class port_35_C
#include "iInform.h"
//## auto_generated
#include "MainPackage.h"
//## link itsAnnemometer
#include "Annemometer.h"
//## link itsHumiditySensor
#include "HumiditySensor.h"
//## class Controller
#include "iAktywujStacje.h"
//## class Controller
#include "iUspijStacje.h"
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
//## class port_33_C
#include "iInformation.h"
//## package MainPackage

//## class Controller
class Controller : public OMThread, public OMReactive, public iPrint, public iInitialize, public iConfirmDataReceival, public iCalibrateRequest, public iAktywujStacje, public iUspijStacje {
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
    statusType getStationStatus() const;
    
    //## auto_generated
    void setStationStatus(statusType p_stationStatus);

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
    class port_33_C : public iPrint, public iInitialize, public iConfirmDataReceival, public iCalibrateRequest, public iAktywujStacje, public iUspijStacje, public iInformation {
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
        virtual void evCalibrateWrap();
        
        //## auto_generated
        virtual void evConfirmPackageReceivalWrap();
        
        //## auto_generated
        virtual void evGetInfoWrap();
        
        //## auto_generated
        virtual void evInitializeWrap();
        
        //## auto_generated
        virtual void evToNonactiveWrap();
        
        //## auto_generated
        iAktywujStacje* getItsIAktywujStacje();
        
        //## auto_generated
        iCalibrateRequest* getItsICalibrateRequest();
        
        //## auto_generated
        iConfirmDataReceival* getItsIConfirmDataReceival();
        
        //## auto_generated
        iInformation* getItsIInformation();
        
        //## auto_generated
        iInitialize* getItsIInitialize();
        
        //## auto_generated
        iPrint* getItsIPrint();
        
        //## auto_generated
        iUspijStacje* getItsIUspijStacje();
        
        //## auto_generated
        virtual StationData print();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIAktywujStacje(iAktywujStacje* p_iAktywujStacje);
        
        //## auto_generated
        void setItsICalibrateRequest(iCalibrateRequest* p_iCalibrateRequest);
        
        //## auto_generated
        void setItsIConfirmDataReceival(iConfirmDataReceival* p_iConfirmDataReceival);
        
        //## auto_generated
        void setItsIInformation(iInformation* p_iInformation);
        
        //## auto_generated
        void setItsIInitialize(iInitialize* p_iInitialize);
        
        //## auto_generated
        void setItsIPrint(iPrint* p_iPrint);
        
        //## auto_generated
        void setItsIUspijStacje(iUspijStacje* p_iUspijStacje);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        iAktywujStacje* itsIAktywujStacje;		//## link itsIAktywujStacje
        
        iCalibrateRequest* itsICalibrateRequest;		//## link itsICalibrateRequest
        
        iConfirmDataReceival* itsIConfirmDataReceival;		//## link itsIConfirmDataReceival
        
        iInformation* itsIInformation;		//## link itsIInformation
        
        iInitialize* itsIInitialize;		//## link itsIInitialize
        
        iPrint* itsIPrint;		//## link itsIPrint
        
        iUspijStacje* itsIUspijStacje;		//## link itsIUspijStacje
    };
    
    //## package MainPackage
    class port_35_C : public iInform {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_35_C();
        
        //## auto_generated
        virtual ~port_35_C();
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void evInformPackReadyWrap();
        
        //## auto_generated
        iInform* getItsIInform();
        
        //## auto_generated
        iInform* getOutBound();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIInform(iInform* p_iInform);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        iInform* itsIInform;		//## link itsIInform
    };
//#]

    //## auto_generated
    ~Controller();
    
    //## operation appendToPackage(int,double)
    void appendToPackage(int whichSensor, double value);
    
    //## operation calibrate()
    void calibrate();
    
    //## operation evCalibrateWrap()
    void evCalibrateWrap();
    
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
    
    //## operation handleEnergySavingSystem()
    void handleEnergySavingSystem();
    
    //## operation print()
    StationData print();
    
    //## operation printPackage()
    void printPackage();
    
    //## operation readInfo()
    void readInfo();
    
    //## auto_generated
    port_33_C* getPort_33() const;
    
    //## auto_generated
    port_33_C* get_port_33() const;
    
    //## auto_generated
    port_35_C* getPort_35() const;
    
    //## auto_generated
    port_35_C* get_port_35() const;

private :

    //## auto_generated
    int getStopMeasurementFlag() const;

public :

    //## auto_generated
    void setStopMeasurementFlag(int p_stopMeasurementFlag);
    
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
    
    //## auto_generated
    bool getWhetherTimerRead() const;
    
    //## auto_generated
    void setWhetherTimerRead(bool p_whetherTimerRead);

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);

private :

    //## auto_generated
    int getIterator() const;
    
    //## auto_generated
    void setIterator(int p_iterator);

protected :

    std::map<int, bool> alert;		//## attribute alert
    
    StationData* dataPackage;		//## attribute dataPackage
    
    int iterator;		//## attribute iterator
    
    statusType stationStatus;		//## attribute stationStatus
    
    int stopMeasurementFlag;		//## attribute stopMeasurementFlag
    
    unsigned long long time;		//## attribute time
    
    bool whetherTimerRead;		//## attribute whetherTimerRead
    
    WindDirectionSensor itsWindDirectionSensor;		//## link itsWindDirectionSensor
    
    Annemometer itsAnnemometer;		//## link itsAnnemometer
    
    RainAmountSensor itsRainAmountSensor;		//## link itsRainAmountSensor
    
    Timer itsTimer;		//## link itsTimer

public :

    //## operation activate()
    void activate();
    
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
    
    //## operation toNonactive()
    void toNonactive();
    
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
    void setDataPackage(StationData* p_dataPackage);

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
    
    // SIGNAL_JOIN_TIMER_SERVER_REQUEST:
    //## statechart_method
    inline bool SIGNAL_JOIN_TIMER_SERVER_REQUEST_IN() const;
    
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
    
    // READ_INFO:
    //## statechart_method
    inline bool READ_INFO_IN() const;
    
    // PACKAGE_READY:
    //## statechart_method
    inline bool PACKAGE_READY_IN() const;
    
    // INTO_NON_ACTIVE:
    //## statechart_method
    inline bool INTO_NON_ACTIVE_IN() const;
    
    // DELETE_PACKAGE:
    //## statechart_method
    inline bool DELETE_PACKAGE_IN() const;
    
    // CALIBRATE:
    //## statechart_method
    inline bool CALIBRATE_IN() const;
    
    // ACTIVATE:
    //## statechart_method
    inline bool ACTIVATE_IN() const;

protected :

//#[ ignore
    enum Controller_Enum {
        OMNonState = 0,
        STAND_BY_CONTROLLER = 1,
        SIGNAL_JOIN_TIMER_SERVER_REQUEST = 2,
        sendaction_44 = 3,
        sendaction_42 = 4,
        sendaction_41 = 5,
        sendaction_40 = 6,
        sendaction_39 = 7,
        sendaction_38 = 8,
        sendaction_37 = 9,
        READ_INFO = 10,
        PACKAGE_READY = 11,
        INTO_NON_ACTIVE = 12,
        DELETE_PACKAGE = 13,
        CALIBRATE = 14,
        ACTIVATE = 15
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedController : public OMAnimatediAktywujStacje, public OMAnimatediPrint, public OMAnimatediInitialize, public OMAnimatediConfirmDataReceival, public OMAnimatediCalibrateRequest, public OMAnimatediUspijStacje {
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
    void SIGNAL_JOIN_TIMER_SERVER_REQUEST_serializeStates(AOMSState* aomsState) const;
    
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
    void READ_INFO_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PACKAGE_READY_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void INTO_NON_ACTIVE_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DELETE_PACKAGE_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CALIBRATE_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ACTIVATE_serializeStates(AOMSState* aomsState) const;
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

inline bool Controller::SIGNAL_JOIN_TIMER_SERVER_REQUEST_IN() const {
    return rootState_subState == SIGNAL_JOIN_TIMER_SERVER_REQUEST;
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

inline bool Controller::READ_INFO_IN() const {
    return rootState_subState == READ_INFO;
}

inline bool Controller::PACKAGE_READY_IN() const {
    return rootState_subState == PACKAGE_READY;
}

inline bool Controller::INTO_NON_ACTIVE_IN() const {
    return rootState_subState == INTO_NON_ACTIVE;
}

inline bool Controller::DELETE_PACKAGE_IN() const {
    return rootState_subState == DELETE_PACKAGE;
}

inline bool Controller::CALIBRATE_IN() const {
    return rootState_subState == CALIBRATE;
}

inline bool Controller::ACTIVATE_IN() const {
    return rootState_subState == ACTIVATE;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Controller.h
*********************************************************************/
