#include "../include/and_gate.h"
#include "../include/pin.h"


ANDGate::ANDGate(const std::string& id)
    : Gate(id,2){};



void ANDGate::evaluate() {
    bool outputValue = true;

    for(Pin* inputPin : inputs){
        if(!inputPin->getSignal()){
            outputValue = false;
            break;
        }
    }
    output->setSignal(outputValue);
}

