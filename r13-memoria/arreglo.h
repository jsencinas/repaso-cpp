#pragma once

class arreglo{
    int* datos;
    int capacidad;

    public:
        arreglo(int tam);
        arreglo(const arreglo& otro);
        arreglo& operator=(const arreglo& otro);
        ~arreglo();

        void set(int pos, int val);
        int get(int pos);
        int tam() const;
};