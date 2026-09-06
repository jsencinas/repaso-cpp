#include <vector>
#include <iostream>
#include "Cuadrado.h"
#include "Circulo.h"
#include "Figura.h"

int main(){
    std::vector<Figura*> figuras = {new Cuadrado(2), new Circulo(1)};
    int n = figuras.size();
    double total = 0;

    for(int i=0; i<n; i++){
        std::cout << figuras[i]->area() << " " <<  figuras[i]->nombre() << std::endl;
        total += figuras[i]->area();
    }
    std::cout << "Total: " << total << std::endl;
    for (Figura* fig : figuras) {
        delete fig;
    }
    figuras.clear();

    return 0;
}