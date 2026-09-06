#include <cmath>
#include "Circulo.h"

Circulo::Circulo(double r) : radio(r){}

double Circulo::area() const {
    return M_PI * radio * radio;
}

std::string Circulo::nombre() const {
    return "Circulo";
}