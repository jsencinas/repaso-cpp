#include <iostream>

void pedirNotas(double n[], int cantidad){
    for (int i = 0; i < cantidad; i++) {
        std::cout << "Nota " << i + 1 << ": ";
        std::cin >> n[i];
    }
}

double calcularPromedio(const double n[], int cantidad){
    double suma=0;
    for(int i=0; i<cantidad; i++) {suma+=n[i];}
    return suma/cantidad;
}

bool aprueba(double prom){return (prom >= 70);}

int main() {
    double notas[5], promedio;
    int cantidad = 5;

    pedirNotas(notas, cantidad);
    promedio = calcularPromedio(notas, cantidad);
    std::cout << "Promedio: " << promedio << std::endl;
    std::cout << "Este estudiante pasa: " << aprueba(promedio) << std::endl;

}