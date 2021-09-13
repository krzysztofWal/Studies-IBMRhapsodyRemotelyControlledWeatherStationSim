/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: MainComponent 
	Configuration 	: MainConfiguration
	Model Element	: MainPackage
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: MainComponent\MainConfiguration\MainPackage.h
*********************************************************************/

#ifndef MainPackage_H
#define MainPackage_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class Annemometer;

//## classInstance itsController
class Controller;

//## auto_generated
class HumiditySensor;

//## auto_generated
class PressureSensor;

//## auto_generated
class RainAmountSensor;

//## classInstance itsReceiver
class Receiver;

//## auto_generated
class Sensor;

//## auto_generated
class StationData;

//## auto_generated
class TemperatureSensor;

//## auto_generated
class Timer;

//## auto_generated
class WindDirectionSensor;

//## auto_generated
class iToServer;

//## auto_generated
class iToStation;

//#[ ignore
#define evInitialize_MainPackage_id 18601

#define evSendReadFromSensor_MainPackage_id 18602

#define evConfirmPackageReceival_MainPackage_id 18603

#define evInform_MainPackage_id 18604

#define evReadSensor_MainPackage_id 18605

#define evTimerInitialize_MainPackage_id 18606

#define evCalibrate_MainPackage_id 18607

#define evRequestTime_MainPackage_id 18608

#define evProvideTime_MainPackage_id 18609

#define evInitializeInTimer_MainPackage_id 18610

#define evExitCalibration_MainPackage_id 18611

#define evActivate_MainPackage_id 18612

#define evToNonactive_MainPackage_id 18613

#define evServerDemandPacket_MainPackage_id 18614

#define evServerActivate_MainPackage_id 18615

#define evServGoIntoInactive_MainPackage_id 18616

#define evSerwSkalibruj_MainPackage_id 18617

#define evServCalibrate_MainPackage_id 18618

#define evServGetInfo_MainPackage_id 18619

#define evGetInfo_MainPackage_id 18620

#define evCheckBat_MainPackage_id 18621

#define evBatteryCheckInit_MainPackage_id 18622

#define evBatteryAlarm_MainPackage_id 18623

#define evAlertWithdraw_MainPackage_id 18624
//#]

//## package MainPackage


//#[ type statusType
#define STAND_BY 1
#define ON 2
//#]

//#[ type sensorType
#define			WIND_SPEED_SENS 1
#define	     	RAIN_AMOUNT_SENS 2
#define        	WIND_DIR_SENS 3
#define        	TEMP_SENS 4
#define        	HUMID_SENS 5
#define        	PRESSURE_SENS 6
//#]

//## classInstance itsController
extern Controller itsController;

//## classInstance itsReceiver
extern Receiver itsReceiver;

//## auto_generated
void MainPackage_initRelations();

//## auto_generated
bool MainPackage_startBehavior();

//#[ ignore
class MainPackage_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    MainPackage_OMInitializer();
    
    //## auto_generated
    ~MainPackage_OMInitializer();
};
//#]

//## event evInitialize()
class evInitialize : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevInitialize;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evInitialize();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevInitialize : virtual public AOMEvent {
    DECLARE_META_EVENT(evInitialize)
};
//#]
#endif // _OMINSTRUMENT

//## event evSendReadFromSensor(double)
class evSendReadFromSensor : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSendReadFromSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSendReadFromSensor();
    
    //## auto_generated
    evSendReadFromSensor(double p_valueBeingSent);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    double valueBeingSent;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSendReadFromSensor : virtual public AOMEvent {
    DECLARE_META_EVENT(evSendReadFromSensor)
};
//#]
#endif // _OMINSTRUMENT

//## event evConfirmPackageReceival()
class evConfirmPackageReceival : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevConfirmPackageReceival;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evConfirmPackageReceival();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevConfirmPackageReceival : virtual public AOMEvent {
    DECLARE_META_EVENT(evConfirmPackageReceival)
};
//#]
#endif // _OMINSTRUMENT

//## event evInform()
class evInform : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevInform;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evInform();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevInform : virtual public AOMEvent {
    DECLARE_META_EVENT(evInform)
};
//#]
#endif // _OMINSTRUMENT

//## event evReadSensor()
class evReadSensor : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevReadSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evReadSensor();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevReadSensor : virtual public AOMEvent {
    DECLARE_META_EVENT(evReadSensor)
};
//#]
#endif // _OMINSTRUMENT

//## event evTimerInitialize(unsigned long long)
class evTimerInitialize : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevTimerInitialize;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evTimerInitialize();
    
    //## auto_generated
    evTimerInitialize(unsigned long long p_time);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    unsigned long long time;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevTimerInitialize : virtual public AOMEvent {
    DECLARE_META_EVENT(evTimerInitialize)
};
//#]
#endif // _OMINSTRUMENT

//## event evCalibrate()
class evCalibrate : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevCalibrate;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evCalibrate();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevCalibrate : virtual public AOMEvent {
    DECLARE_META_EVENT(evCalibrate)
};
//#]
#endif // _OMINSTRUMENT

//## event evRequestTime()
class evRequestTime : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRequestTime;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRequestTime();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRequestTime : virtual public AOMEvent {
    DECLARE_META_EVENT(evRequestTime)
};
//#]
#endif // _OMINSTRUMENT

//## event evProvideTime(unsigned long long)
class evProvideTime : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevProvideTime;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evProvideTime();
    
    //## auto_generated
    evProvideTime(unsigned long long p_time);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    unsigned long long time;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevProvideTime : virtual public AOMEvent {
    DECLARE_META_EVENT(evProvideTime)
};
//#]
#endif // _OMINSTRUMENT

//## event evInitializeInTimer()
class evInitializeInTimer : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevInitializeInTimer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evInitializeInTimer();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevInitializeInTimer : virtual public AOMEvent {
    DECLARE_META_EVENT(evInitializeInTimer)
};
//#]
#endif // _OMINSTRUMENT

//## event evExitCalibration()
class evExitCalibration : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevExitCalibration;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evExitCalibration();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevExitCalibration : virtual public AOMEvent {
    DECLARE_META_EVENT(evExitCalibration)
};
//#]
#endif // _OMINSTRUMENT

//## event evActivate()
class evActivate : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevActivate;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evActivate();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevActivate : virtual public AOMEvent {
    DECLARE_META_EVENT(evActivate)
};
//#]
#endif // _OMINSTRUMENT

//## event evToNonactive()
class evToNonactive : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevToNonactive;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evToNonactive();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevToNonactive : virtual public AOMEvent {
    DECLARE_META_EVENT(evToNonactive)
};
//#]
#endif // _OMINSTRUMENT

//## event evServerDemandPacket()
class evServerDemandPacket : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevServerDemandPacket;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evServerDemandPacket();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevServerDemandPacket : virtual public AOMEvent {
    DECLARE_META_EVENT(evServerDemandPacket)
};
//#]
#endif // _OMINSTRUMENT

//## event evServerActivate()
class evServerActivate : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevServerActivate;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evServerActivate();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevServerActivate : virtual public AOMEvent {
    DECLARE_META_EVENT(evServerActivate)
};
//#]
#endif // _OMINSTRUMENT

//## event evServGoIntoInactive()
class evServGoIntoInactive : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevServGoIntoInactive;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evServGoIntoInactive();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevServGoIntoInactive : virtual public AOMEvent {
    DECLARE_META_EVENT(evServGoIntoInactive)
};
//#]
#endif // _OMINSTRUMENT

//## event evSerwSkalibruj()
class evSerwSkalibruj : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSerwSkalibruj;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSerwSkalibruj();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSerwSkalibruj : virtual public AOMEvent {
    DECLARE_META_EVENT(evSerwSkalibruj)
};
//#]
#endif // _OMINSTRUMENT

//## event evServCalibrate()
class evServCalibrate : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevServCalibrate;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evServCalibrate();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevServCalibrate : virtual public AOMEvent {
    DECLARE_META_EVENT(evServCalibrate)
};
//#]
#endif // _OMINSTRUMENT

//## event evServGetInfo()
class evServGetInfo : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevServGetInfo;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evServGetInfo();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevServGetInfo : virtual public AOMEvent {
    DECLARE_META_EVENT(evServGetInfo)
};
//#]
#endif // _OMINSTRUMENT

//## event evGetInfo()
class evGetInfo : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevGetInfo;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evGetInfo();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevGetInfo : virtual public AOMEvent {
    DECLARE_META_EVENT(evGetInfo)
};
//#]
#endif // _OMINSTRUMENT

//## event evCheckBat()
class evCheckBat : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevCheckBat;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evCheckBat();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevCheckBat : virtual public AOMEvent {
    DECLARE_META_EVENT(evCheckBat)
};
//#]
#endif // _OMINSTRUMENT

//## event evBatteryCheckInit()
class evBatteryCheckInit : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevBatteryCheckInit;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evBatteryCheckInit();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevBatteryCheckInit : virtual public AOMEvent {
    DECLARE_META_EVENT(evBatteryCheckInit)
};
//#]
#endif // _OMINSTRUMENT

//## event evBatteryAlarm()
class evBatteryAlarm : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevBatteryAlarm;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evBatteryAlarm();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevBatteryAlarm : virtual public AOMEvent {
    DECLARE_META_EVENT(evBatteryAlarm)
};
//#]
#endif // _OMINSTRUMENT

//## event evAlertWithdraw()
class evAlertWithdraw : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevAlertWithdraw;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evAlertWithdraw();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevAlertWithdraw : virtual public AOMEvent {
    DECLARE_META_EVENT(evAlertWithdraw)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: MainComponent\MainConfiguration\MainPackage.h
*********************************************************************/
