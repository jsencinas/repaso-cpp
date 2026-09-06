#include <iostream>
#include "Gerente.h"

Gerente::Gerente(std::string nombre, int edad) : Empleado(nombre, edad){
    std::cout << "Constructor clase Gerente" << std::endl;
}

Gerente::~Gerente(){
    std::cout << "Destructor clase Gerente" << std::endl;
}