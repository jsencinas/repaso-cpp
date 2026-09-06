#include <string>
#pragma once

class Persona{
    protected:
        std::string nombre;

    private:
        int edad = 0;
    
        public:
        Persona(std::string nombre, int edad);
        ~Persona();
};