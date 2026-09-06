#include "Empleado.h"
#include <string>
#pragma once

class Gerente : Empleado{
    public:
        Gerente(std::string nombre, int edad); 
        ~Gerente();
};