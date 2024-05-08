#include "../include/gate.h"
#include "../include/pin.h"

Gate::Gate(const std::string& id, int numberOfInputs) : Component(id){
    this->output = new Pin(id);
    for(int i = 0; i<numberOfInputs; i++){
        Pin* inputPin = nullptr;
        inputs.push_back(inputPin);
    }
}


Pin* Gate::getOutputPin(){
    return this->output;
}

Pin* Gate::getInputPin(int i){
    return inputs[i];
}

Gate::~Gate(){
    for (Pin* pin : inputs){
        delete pin;
    }
    delete output;
}