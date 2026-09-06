#include "Empleado.h"
#include <iostream>

Empleado::Empleado(std::string nombre, int edad) : Persona(nombre, edad){
    std::cout << "Constructor clase Empleado" << std::endl;
}

Empleado::~Empleado(){
    std::cout << "Destructor clase Empleado" << std::endl;
}
