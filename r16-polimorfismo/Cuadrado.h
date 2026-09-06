#include "Figura.h"
#pragma once

class Cuadrado : public Figura{
    private:
        double lado;

    public:
        Cuadrado(double lado);

        double area() const override;
        std::string nombre()const override;
};