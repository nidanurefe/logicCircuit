#include "../include/circuit.h"


void Circuit::addComponent(Component* comp){
    components.push_back(comp);
}

void Circuit::addWire(Wire* wire){
    wires.push_back(wire);
}


Circuit::~Circuit(){
    for(Component* comp : components){
        delete comp;
    }

    for(Wire* wire : wires){
        delete wire;
    }
}