#include <iostream>

int main(){
    const int N = 5;
    int d[N] = {10, 20, 30, 40, 50};

    int suma = 0;                            // A: sumar todo
    for (int i = 0; i < N; i++) suma += d[i];
    std::cout << suma << std::endl;
    /* Sin cambios, el loop iba a acceder a un index que no existe en el
    array, por lo que iba a regresar basura. Se soluciona quitando el =
    en el i<=N */

    int cuantos = 0;                         // B: contar > 25
    for (int i = 0; i < N; i++)
        if (d[i] > 25) cuantos++;
    std::cout << cuantos << std::endl;
    /* Para loopear por todo el array, se tiene que iniciar en 0, no en 1.
    Como estaba el codigo, no se iba a tomar en cuenta el primer elemento */

    int k = 0;                               // C: imprimir todo
    while (k < N) { std::cout << d[k] << ' '; k++;}
    /* Este loop iba a correr de manera indefinida porque la variable contador
    no estaba siendo modificada dentro del loop */
}