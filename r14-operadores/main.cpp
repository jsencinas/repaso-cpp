#include "Fraccion.h"

int main(){
    Fraccion a(2, 3);
    Fraccion b(1, 2);
    
    std::cout << a * b << std::endl;
    std::cout << a + b << std::endl;
    std::cout << (a < b) << std::endl;

    std::cout << (a == b) << std::endl;
    std::cout << (a == Fraccion(2, 3)) << std::endl;
    

    Fraccion c(1, 2);
    Fraccion d(1, 3);
    std::cout << c + d << std::endl;

    Fraccion e(6, -8);
    std::cout << e << std::endl;
}