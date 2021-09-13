/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: MainComponent 
	Configuration 	: MainConfiguration
	Model Element	: MainConfiguration
//!	Generated Date	: Mon, 13, Sep 2021  
	File Path	: MainComponent\MainConfiguration\MainMainComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainMainComponent.h"
//## auto_generated
#include "MainPackage.h"
MainComponent::MainComponent() {
    MainPackage_initRelations();
    MainPackage_startBehavior();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            MainComponent initializer_MainComponent;
            //#[ configuration MainComponent::MainConfiguration 
            //#]
            OXF::start();
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: MainComponent\MainConfiguration\MainMainComponent.cpp
*********************************************************************/
