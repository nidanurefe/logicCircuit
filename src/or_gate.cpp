#include "../include/or_gate.h"
#include "../include/pin.h"

ORGate::ORGate(const std::string& id) 
    : Gate(id, 2){};

void ORGate::evaluate() {
    bool outputValue = true;

    for(Pin* inputPin : inputs){
        if(inputPin->getSignal()){
            outputValue = false;
            break;
        }
    }
    output->setSignal(outputValue);
}

