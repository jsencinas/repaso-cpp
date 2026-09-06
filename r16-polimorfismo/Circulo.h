#include "Figura.h"
#pragma once

class Circulo : public Figura{
    private:
        double radio;

    public:
        Circulo(double radio);

        double area() const override;
        std::string nombre()const override;
};