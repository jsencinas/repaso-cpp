#include <iostream>
#pragma once

template <typename T>
class arreglo{
    T* datos;
    int capacidad;

    public:
        explicit arreglo(int tam) : capacidad(tam){
            datos = new T[capacidad]{};
            std::cout << "[Constr] Memoria reservada en: " << datos << "\n";
        }

        arreglo(const arreglo<T>& otro) : capacidad(otro.capacidad) {
            datos = new T[capacidad];
            for (int i = 0; i < capacidad; ++i) {
                datos[i] = otro.datos[i];
            }
            std::cout << "[Copia]    Nueva memoria en:     " << datos << "\n";
        }

        arreglo<T>& operator=(const arreglo<T>& otro) {
            if (this != &otro) {
                delete[] datos; // Libera su memoria vieja
                capacidad = otro.capacidad;
                datos = new T[capacidad]; // Pide nueva memoria
                for (int i = 0; i < capacidad; ++i) {
                    datos[i] = otro.datos[i];
                }
                std::cout << "[operator=] Nueva memoria en:     " << datos << "\n";
            }
            return *this;
        }

        ~arreglo() {
            std::cout << "[Destr]  Liberando memoria en: " << datos << "\n";
            delete[] datos;
        }

        void set(int pos, T val){
            datos[pos] = val;
        }

        T get(int pos){
            return datos[pos];
        }

        int tam() const{
            return capacidad;
        }
};