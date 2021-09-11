
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC10x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\ProgramData\IBM\Rational\Rhapsody\8.3.1\Share"
RHPROOT="C:\Program Files\IBM\Rational\Rhapsody\8.3.1"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  Sensor.obj \
  Controller.obj \
  TemperatureSensor.obj \
  HumiditySensor.obj \
  PressureSensor.obj \
  StationData.obj \
  Receiver.obj \
  Annemometer.obj \
  RainAmountSensor.obj \
  WindDirectionSensor.obj \
  iPrint.obj \
  iInitialize.obj \
  iInform.obj \
  iConfirmDataReceival.obj \
  iSendAlert.obj \
  iGetAlertDetails.obj \
  iCalibrateRequest.obj \
  Timer.obj \
  iConfirmAlertReceival.obj \
  iAktywujStacje.obj \
  iUspijStacje.obj \
  MainPackage.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






Sensor.obj : Sensor.cpp Sensor.h    MainPackage.h Controller.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Sensor.obj" "Sensor.cpp" 



Controller.obj : Controller.cpp Controller.h    MainPackage.h TemperatureSensor.h HumiditySensor.h PressureSensor.h WindDirectionSensor.h RainAmountSensor.h Annemometer.h Timer.h StationData.h iInform.h iSendAlert.h iPrint.h Sensor.h iInitialize.h iConfirmDataReceival.h iGetAlertDetails.h iCalibrateRequest.h iConfirmAlertReceival.h iAktywujStacje.h iUspijStacje.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Controller.obj" "Controller.cpp" 



TemperatureSensor.obj : TemperatureSensor.cpp TemperatureSensor.h    MainPackage.h Controller.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TemperatureSensor.obj" "TemperatureSensor.cpp" 



HumiditySensor.obj : HumiditySensor.cpp HumiditySensor.h    MainPackage.h Controller.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"HumiditySensor.obj" "HumiditySensor.cpp" 



PressureSensor.obj : PressureSensor.cpp PressureSensor.h    MainPackage.h Controller.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PressureSensor.obj" "PressureSensor.cpp" 



StationData.obj : StationData.cpp StationData.h    MainPackage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"StationData.obj" "StationData.cpp" 



Receiver.obj : Receiver.cpp Receiver.h    MainPackage.h StationData.h iPrint.h iInitialize.h iConfirmDataReceival.h iGetAlertDetails.h iCalibrateRequest.h iConfirmAlertReceival.h iUspijStacje.h iAktywujStacje.h iInform.h iSendAlert.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Receiver.obj" "Receiver.cpp" 



Annemometer.obj : Annemometer.cpp Annemometer.h    MainPackage.h Controller.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Annemometer.obj" "Annemometer.cpp" 



RainAmountSensor.obj : RainAmountSensor.cpp RainAmountSensor.h    MainPackage.h Controller.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"RainAmountSensor.obj" "RainAmountSensor.cpp" 



WindDirectionSensor.obj : WindDirectionSensor.cpp WindDirectionSensor.h    MainPackage.h Controller.h Sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WindDirectionSensor.obj" "WindDirectionSensor.cpp" 



iPrint.obj : iPrint.cpp iPrint.h    MainPackage.h StationData.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iPrint.obj" "iPrint.cpp" 



iInitialize.obj : iInitialize.cpp iInitialize.h    MainPackage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iInitialize.obj" "iInitialize.cpp" 



iInform.obj : iInform.cpp iInform.h    MainPackage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iInform.obj" "iInform.cpp" 



iConfirmDataReceival.obj : iConfirmDataReceival.cpp iConfirmDataReceival.h    MainPackage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iConfirmDataReceival.obj" "iConfirmDataReceival.cpp" 



iSendAlert.obj : iSendAlert.cpp iSendAlert.h    MainPackage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iSendAlert.obj" "iSendAlert.cpp" 



iGetAlertDetails.obj : iGetAlertDetails.cpp iGetAlertDetails.h    MainPackage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iGetAlertDetails.obj" "iGetAlertDetails.cpp" 



iCalibrateRequest.obj : iCalibrateRequest.cpp iCalibrateRequest.h    MainPackage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iCalibrateRequest.obj" "iCalibrateRequest.cpp" 



Timer.obj : Timer.cpp Timer.h    MainPackage.h Controller.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Timer.obj" "Timer.cpp" 



iConfirmAlertReceival.obj : iConfirmAlertReceival.cpp iConfirmAlertReceival.h    MainPackage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iConfirmAlertReceival.obj" "iConfirmAlertReceival.cpp" 



iAktywujStacje.obj : iAktywujStacje.cpp iAktywujStacje.h    MainPackage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iAktywujStacje.obj" "iAktywujStacje.cpp" 



iUspijStacje.obj : iUspijStacje.cpp iUspijStacje.h    MainPackage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"iUspijStacje.obj" "iUspijStacje.cpp" 



MainPackage.obj : MainPackage.cpp MainPackage.h    Sensor.h Controller.h TemperatureSensor.h HumiditySensor.h PressureSensor.h StationData.h Receiver.h Annemometer.h RainAmountSensor.h WindDirectionSensor.h iPrint.h iInitialize.h iInform.h iConfirmDataReceival.h iSendAlert.h iGetAlertDetails.h iCalibrateRequest.h Timer.h iConfirmAlertReceival.h iAktywujStacje.h iUspijStacje.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MainPackage.obj" "MainPackage.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist Sensor.obj erase Sensor.obj
	if exist Controller.obj erase Controller.obj
	if exist TemperatureSensor.obj erase TemperatureSensor.obj
	if exist HumiditySensor.obj erase HumiditySensor.obj
	if exist PressureSensor.obj erase PressureSensor.obj
	if exist StationData.obj erase StationData.obj
	if exist Receiver.obj erase Receiver.obj
	if exist Annemometer.obj erase Annemometer.obj
	if exist RainAmountSensor.obj erase RainAmountSensor.obj
	if exist WindDirectionSensor.obj erase WindDirectionSensor.obj
	if exist iPrint.obj erase iPrint.obj
	if exist iInitialize.obj erase iInitialize.obj
	if exist iInform.obj erase iInform.obj
	if exist iConfirmDataReceival.obj erase iConfirmDataReceival.obj
	if exist iSendAlert.obj erase iSendAlert.obj
	if exist iGetAlertDetails.obj erase iGetAlertDetails.obj
	if exist iCalibrateRequest.obj erase iCalibrateRequest.obj
	if exist Timer.obj erase Timer.obj
	if exist iConfirmAlertReceival.obj erase iConfirmAlertReceival.obj
	if exist iAktywujStacje.obj erase iAktywujStacje.obj
	if exist iUspijStacje.obj erase iUspijStacje.obj
	if exist MainPackage.obj erase MainPackage.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
