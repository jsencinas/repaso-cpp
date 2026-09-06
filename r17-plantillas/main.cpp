#include "arreglo.hpp"
#include <string>
#include <iostream>

int main(){
    arreglo<double> numero(3);
    numero.set(0, 3.4);
    arreglo numeroA = numero;
    std::cout << numeroA.get(0) << std::endl;

    arreglo<std::string> texto(3);
    texto.set(0, "Hola");
    arreglo textoA = texto;
    std::cout << textoA.get(0) << std::endl;

    return 0;
}