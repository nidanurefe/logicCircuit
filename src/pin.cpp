#include "../include/pin.h"
#include <iostream>



Pin::Pin(const std::string& id) : Component(id), value(false){};


void Pin::setSignal(bool val){
    this->value = val;
}

bool Pin::getSignal() const{
    return this->value;
}

void Pin::evaluate() {
    std::cout << "Pin " << id << " evaluated." << std::endl;
}

