#include "Cuadrado.h"

Cuadrado::Cuadrado(double l) : lado(l){}

double Cuadrado::area() const {
    return lado * lado;
}

std::string Cuadrado::nombre() const {
    return "Cuadrado";
}