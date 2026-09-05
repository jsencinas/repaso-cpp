#include <iostream>
    
void intercambiar1(int a, int b){   // por valor - No modifica el valor fuera de la funcion
    int t=a;
    b=a;
    a=t;
}
void intercambiar2(int* a, int* b){    // por puntero - Modifica el valor fuera de la funcion
    int t=*a;
    *b=*a;
    *a=t;
}
void intercambiar3(int& a, int& b){    // por referencia - Modifica el valor fuera de la funcion
    int t = a;
    b=a;
    a=t;
}
    
int main() {
    int x=1, y=2;
    intercambiar1(x, y);
    std::cout << "X = " << x << '\n' << "Y = " << y << std::endl;

    intercambiar2(&x, &y);
    std::cout << "X = " << x << '\n' << "Y = " << y << std::endl;

    intercambiar3(x, y);
    std::cout << "X = " << x << '\n' << "Y = " << y << std::endl;
}