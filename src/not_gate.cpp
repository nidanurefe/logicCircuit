#include "../include/not_gate.h"
#include "../include/pin.h"


NOTGate::NOTGate(const std::string& id) 
    : Gate(id, 2){};


void NOTGate::evaluate(){

    for(Pin* inputPin : inputs){
        if(inputPin->getSignal())
            output->setSignal(false);
        else if(!inputPin->getSignal())
            output->setSignal(true);
    }
}
