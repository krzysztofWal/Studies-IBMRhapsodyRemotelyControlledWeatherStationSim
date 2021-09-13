/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Receiver
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: DefaultComponent\DefaultConfig\Receiver.h
*********************************************************************/

#ifndef Receiver_H
#define Receiver_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "MainPackage.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## class Receiver
#include "iInform.h"
//## dependency StationData
#include "StationData.h"
//## auto_generated
#include <map>
//## auto_generated
#include <utility>
//## auto_generated
#include <vector>
//## auto_generated
#include <array>
//## class port_3_C
#include "iAktywujStacje.h"
//## class port_3_C
#include "iCalibrateRequest.h"
//## class port_3_C
#include "iConfirmDataReceival.h"
//## class port_3_C
#include "iInitialize.h"
//## class port_3_C
#include "iPrint.h"
//## class port_3_C
#include "iUspijStacje.h"
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
//#[ ignore
#define OMAnim_MainPackage_Receiver_setWhichToCalibrate_int_ARGS_DECLARATION int p_whichToCalibrate;
//#]

//## package MainPackage

//## class Receiver
class Receiver : public OMThread, public OMReactive, public iInform {
public :

//#[ ignore
    //## package MainPackage
    class port_3_C : public iPrint, public iInitialize, public iConfirmDataReceival, public iCalibrateRequest, public iUspijStacje, public iAktywujStacje {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_3_C();
        
        //## auto_generated
        virtual ~port_3_C();
        
        ////    Operations    ////
        
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
        iAktywujStacje* getItsIAktywujStacje();
        
        //## auto_generated
        iCalibrateRequest* getItsICalibrateRequest();
        
        //## auto_generated
        iConfirmDataReceival* getItsIConfirmDataReceival();
        
        //## auto_generated
        iInitialize* getItsIInitialize();
        
        //## auto_generated
        iPrint* getItsIPrint();
        
        //## auto_generated
        iUspijStacje* getItsIUspijStacje();
        
        //## auto_generated
        Receiver::port_3_C* getOutBound();
        
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
        
        iInitialize* itsIInitialize;		//## link itsIInitialize
        
        iPrint* itsIPrint;		//## link itsIPrint
        
        iUspijStacje* itsIUspijStacje;		//## link itsIUspijStacje
    };
    
    //## package MainPackage
    class port_5_C : public iInform {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_5_C();
        
        //## auto_generated
        virtual ~port_5_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectReceiver(Receiver* part);
        
        //## auto_generated
        virtual void evInformPackReadyWrap();
        
        //## auto_generated
        virtual void getInfo(
        std::string info);
        
        //## auto_generated
        iInform* getItsIInform();
        
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

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedReceiver;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Receiver(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~Receiver();
    
    ////    Operations    ////
    
    //## operation evInformPackReadyWrap()
    virtual void evInformPackReadyWrap();
    
    //## operation getInfo(std::string)
    void getInfo(std::string info);
    
    ////    Additional operations    ////
    
    //## auto_generated
    port_3_C* getPort_3() const;
    
    //## auto_generated
    port_3_C* get_port_3() const;
    
    //## auto_generated
    port_5_C* getPort_5() const;
    
    //## auto_generated
    port_5_C* get_port_5() const;
    
    //## auto_generated
    void setWhichToCalibrate(int p_whichToCalibrate);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    std::vector<StationData> getDataReceived() const;
    
    //## auto_generated
    void setDataReceived(std::vector<StationData> p_dataReceived);
    
    //## auto_generated
    int getIterator() const;
    
    //## auto_generated
    void setIterator(int p_iterator);
    
    //## auto_generated
    int getWhichToCalibrate() const;
    
    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    std::vector<StationData> dataReceived;		//## attribute dataReceived
    
    int iterator;		//## attribute iterator
    
    int whichToCalibrate;		//## attribute whichToCalibrate
    
    ////    Relations and components    ////
    
//#[ ignore
    port_3_C port_3;
    
    port_5_C port_5;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // STANDBY:
    //## statechart_method
    inline bool STANDBY_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus STANDBY_handleEvent();
    
    // INFO_DEMAND_SEND:
    //## statechart_method
    inline bool INFO_DEMAND_SEND_IN() const;
    
    // DESACTIVATE_SEND:
    //## statechart_method
    inline bool DESACTIVATE_SEND_IN() const;
    
    // DEMAND_SEND:
    //## statechart_method
    inline bool DEMAND_SEND_IN() const;
    
    // CALIBRATE_SEND:
    //## statechart_method
    inline bool CALIBRATE_SEND_IN() const;
    
    // ACTIVATE_SEND:
    //## statechart_method
    inline bool ACTIVATE_SEND_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Receiver_Enum {
        OMNonState = 0,
        STANDBY = 1,
        INFO_DEMAND_SEND = 2,
        DESACTIVATE_SEND = 3,
        DEMAND_SEND = 4,
        CALIBRATE_SEND = 5,
        ACTIVATE_SEND = 6
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(MainPackage_Receiver_setWhichToCalibrate_int)

//#[ ignore
class OMAnimatedReceiver : public OMAnimatediInform {
    DECLARE_REACTIVE_META(Receiver, OMAnimatedReceiver)
    
    DECLARE_META_OP(MainPackage_Receiver_setWhichToCalibrate_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void STANDBY_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void INFO_DEMAND_SEND_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DESACTIVATE_SEND_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DEMAND_SEND_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CALIBRATE_SEND_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ACTIVATE_SEND_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Receiver::rootState_IN() const {
    return true;
}

inline bool Receiver::STANDBY_IN() const {
    return rootState_subState == STANDBY;
}

inline bool Receiver::INFO_DEMAND_SEND_IN() const {
    return rootState_subState == INFO_DEMAND_SEND;
}

inline bool Receiver::DESACTIVATE_SEND_IN() const {
    return rootState_subState == DESACTIVATE_SEND;
}

inline bool Receiver::DEMAND_SEND_IN() const {
    return rootState_subState == DEMAND_SEND;
}

inline bool Receiver::CALIBRATE_SEND_IN() const {
    return rootState_subState == CALIBRATE_SEND;
}

inline bool Receiver::ACTIVATE_SEND_IN() const {
    return rootState_subState == ACTIVATE_SEND;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Receiver.h
*********************************************************************/
