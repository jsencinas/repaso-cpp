#include <iostream>
#include "Persona.h"

Persona::Persona(std::string nombre, int edad) : nombre(nombre), edad(edad){
    std::cout << "Constructor clase persona" << std::endl;
}

Persona::~Persona(){
    std::cout << "Destructor clase persona" << std::endl;
}