#include <iostream>
#include "suma.h"

int main() {
    std::cout << sumar(2, 3) << '\n';
}

/*
Compilacion individual
g++ -std=c++17 -Wall -Wextra -g -c main.cpp     -> Genera un main.o
g++ -std=c++17 -Wall -Wextra -g -c suma.cpp     -> Genera un suma.o
g++ main.o suma.o -o programa                   -> Juntar los arhivos .o
./programa                                      -> Ejecutar el binario


Si solo hacemos -o al archivo main.o: 
g++ main.o -o programa
Nos maracara un error:
undefined reference to `sumar(int, int)'
Esto pasa porque en el main.cpp, se prometio que la clase sumar existia
y no es hasta el proceso de enlazamiento que se da cuenta que no existe.
*/