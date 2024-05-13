#include "../include/circuit.h"


void Circuit::addComponent(Component* comp){
    components.push_back(comp);
}

void Circuit::addWire(Wire* wire){
    wires.push_back(wire);
}


void Circuit::simulate(){
    for (Component* c : components) {
        for (Wire* w : wires) {
            w->propagateSignal();
        }
        c->evaluate();
    }
}



Circuit::~Circuit(){
    for(Component* comp : components){
        delete comp;
    }
    components.clear();

    for(Wire* wire : wires){
        delete wire;
    }
    wires.clear();
}
