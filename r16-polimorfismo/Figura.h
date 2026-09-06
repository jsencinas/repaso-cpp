#include <string>
#pragma once

class Figura{
    public:
        virtual double area() const = 0;
        virtual std::string nombre() const = 0;

        virtual ~Figura();
};