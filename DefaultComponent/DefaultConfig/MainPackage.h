/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MainPackage
//!	Generated Date	: Sat, 11, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\MainPackage.h
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
class iAktywujStacje;

//## auto_generated
class iCalibrateRequest;

//## auto_generated
class iConfirmAlertReceival;

//## auto_generated
class iConfirmDataReceival;

//## auto_generated
class iGetAlertDetails;

//## auto_generated
class iInform;

//## auto_generated
class iInitialize;

//## auto_generated
class iPrint;

//## auto_generated
class iSendAlert;

//## auto_generated
class iUspijStacje;

//#[ ignore
#define evInitialize_MainPackage_id 18601

#define evSendReadFromSensor_MainPackage_id 18602

#define create_MainPackage_id 18603

#define evInicjujWyslaniePakietu_MainPackage_id 18604

#define potwierdzOdbior_MainPackage_id 18605

#define evConfirmPackageReceival_MainPackage_id 18606

#define Inform_MainPackage_id 18607

#define SendAlert_MainPackage_id 18608

#define serwZadajPakietu_MainPackage_id 18609

#define readSensorMess_MainPackage_id 18610

#define evTimerInitialize_MainPackage_id 18611

#define serwSkalibruj_MainPackage_id 18612

#define evCalibrate_MainPackage_id 18613

#define requestTime_MainPackage_id 18614

#define evProvideTime_MainPackage_id 18615

#define inicjujOdczytTimer_MainPackage_id 18616

#define evExitCalibration_MainPackage_id 18617

#define potwierdzSygnalOdTimera_MainPackage_id 18618

#define confirmAlertReceival_MainPackage_id 18619

#define serwPrzejdzWStanNieaktywny_MainPackage_id 18620

#define serwAktywuj_MainPackage_id 18621

#define serwCzytajLog_MainPackage_id 18622

#define serwCzytajInfo_MainPackage_id 18623

#define UspijStacje_MainPackage_id 18624

#define evActivate_MainPackage_id 18625

#define e_MainPackage_id 18626

#define evToNonactive_MainPackage_id 18627

#define evServerDemandPacket_MainPackage_id 18628

#define evServerActivate_MainPackage_id 18629

#define evServGoIntoInactive_MainPackage_id 18630
//#]

//## package MainPackage


//## type statusType
enum statusType {
    on = 1,
    standBy = 2
};

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

//## event create(long)
class create : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcreate;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    create();
    
    //## auto_generated
    create(long p_time);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    long time;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcreate : virtual public AOMEvent {
    DECLARE_META_EVENT(create)
};
//#]
#endif // _OMINSTRUMENT

//## event evInicjujWyslaniePakietu()
class evInicjujWyslaniePakietu : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevInicjujWyslaniePakietu;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evInicjujWyslaniePakietu();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevInicjujWyslaniePakietu : virtual public AOMEvent {
    DECLARE_META_EVENT(evInicjujWyslaniePakietu)
};
//#]
#endif // _OMINSTRUMENT

//## event potwierdzOdbior()
class potwierdzOdbior : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedpotwierdzOdbior;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    potwierdzOdbior();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedpotwierdzOdbior : virtual public AOMEvent {
    DECLARE_META_EVENT(potwierdzOdbior)
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

//## event Inform()
class Inform : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedInform;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Inform();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedInform : virtual public AOMEvent {
    DECLARE_META_EVENT(Inform)
};
//#]
#endif // _OMINSTRUMENT

//## event SendAlert()
class SendAlert : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSendAlert;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SendAlert();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSendAlert : virtual public AOMEvent {
    DECLARE_META_EVENT(SendAlert)
};
//#]
#endif // _OMINSTRUMENT

//## event serwZadajPakietu()
class serwZadajPakietu : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedserwZadajPakietu;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    serwZadajPakietu();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedserwZadajPakietu : virtual public AOMEvent {
    DECLARE_META_EVENT(serwZadajPakietu)
};
//#]
#endif // _OMINSTRUMENT

//## event readSensorMess()
class readSensorMess : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreadSensorMess;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    readSensorMess();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreadSensorMess : virtual public AOMEvent {
    DECLARE_META_EVENT(readSensorMess)
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

//## event serwSkalibruj()
class serwSkalibruj : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedserwSkalibruj;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    serwSkalibruj();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedserwSkalibruj : virtual public AOMEvent {
    DECLARE_META_EVENT(serwSkalibruj)
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

//## event requestTime()
class requestTime : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrequestTime;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    requestTime();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrequestTime : virtual public AOMEvent {
    DECLARE_META_EVENT(requestTime)
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

//## event inicjujOdczytTimer()
class inicjujOdczytTimer : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedinicjujOdczytTimer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    inicjujOdczytTimer();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedinicjujOdczytTimer : virtual public AOMEvent {
    DECLARE_META_EVENT(inicjujOdczytTimer)
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

//## event potwierdzSygnalOdTimera()
class potwierdzSygnalOdTimera : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedpotwierdzSygnalOdTimera;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    potwierdzSygnalOdTimera();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedpotwierdzSygnalOdTimera : virtual public AOMEvent {
    DECLARE_META_EVENT(potwierdzSygnalOdTimera)
};
//#]
#endif // _OMINSTRUMENT

//## event confirmAlertReceival()
class confirmAlertReceival : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedconfirmAlertReceival;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    confirmAlertReceival();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedconfirmAlertReceival : virtual public AOMEvent {
    DECLARE_META_EVENT(confirmAlertReceival)
};
//#]
#endif // _OMINSTRUMENT

//## event serwPrzejdzWStanNieaktywny()
class serwPrzejdzWStanNieaktywny : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedserwPrzejdzWStanNieaktywny;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    serwPrzejdzWStanNieaktywny();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedserwPrzejdzWStanNieaktywny : virtual public AOMEvent {
    DECLARE_META_EVENT(serwPrzejdzWStanNieaktywny)
};
//#]
#endif // _OMINSTRUMENT

//## event serwAktywuj()
class serwAktywuj : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedserwAktywuj;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    serwAktywuj();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedserwAktywuj : virtual public AOMEvent {
    DECLARE_META_EVENT(serwAktywuj)
};
//#]
#endif // _OMINSTRUMENT

//## event serwCzytajLog()
class serwCzytajLog : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedserwCzytajLog;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    serwCzytajLog();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedserwCzytajLog : virtual public AOMEvent {
    DECLARE_META_EVENT(serwCzytajLog)
};
//#]
#endif // _OMINSTRUMENT

//## event serwCzytajInfo()
class serwCzytajInfo : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedserwCzytajInfo;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    serwCzytajInfo();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedserwCzytajInfo : virtual public AOMEvent {
    DECLARE_META_EVENT(serwCzytajInfo)
};
//#]
#endif // _OMINSTRUMENT

//## event UspijStacje()
class UspijStacje : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUspijStacje;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UspijStacje();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUspijStacje : virtual public AOMEvent {
    DECLARE_META_EVENT(UspijStacje)
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

//## event e()
class e : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatede;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    e();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatede : virtual public AOMEvent {
    DECLARE_META_EVENT(e)
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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MainPackage.h
*********************************************************************/
