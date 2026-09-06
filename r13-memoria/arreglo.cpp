#include <iostream>
#include "arreglo.h"

arreglo::arreglo(int tam) : capacidad(tam){
    datos = new int[capacidad]{};
    std::cout << "[Constr] Memoria reservada en: " << datos << "\n";
}

// Constructor de Copia
arreglo::arreglo(const arreglo& otro) : capacidad(otro.capacidad) {
    datos = new int[capacidad];
    for (int i = 0; i < capacidad; ++i) {
        datos[i] = otro.datos[i];
    }
    std::cout << "[Copia]    Nueva memoria en:     " << datos << "\n";
}

// Operador de Asignación (Corregida la firma)
arreglo& arreglo::operator=(const arreglo& otro) {
    if (this != &otro) {
        delete[] datos; // Libera su memoria vieja
        capacidad = otro.capacidad;
        datos = new int[capacidad]; // Pide nueva memoria
        for (int i = 0; i < capacidad; ++i) {
            datos[i] = otro.datos[i];
        }
        std::cout << "[operator=] Nueva memoria en:     " << datos << "\n";
    }
    return *this;
}

arreglo::~arreglo() {
    std::cout << "[Destr]  Liberando memoria en: " << datos << "\n";
    delete[] datos;
}

void arreglo::set(int pos, int val){
    datos[pos] = val;
}

int arreglo::get(int pos){
    return datos[pos];
}

int arreglo::tam() const{
    return capacidad;
}