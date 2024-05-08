#include "../include/wire.h"

Wire::Wire(Pin* src, Pin* dest){
    this->source = src;
    this->destination = dest;
}

void Wire::propagateSignal(){
    destination->setSignal(source->getSignal());
}