#include <iostream>

int main(){
    std::cout << 7 / 2 << '\n';                       // 1- 3 [Division entera]
    std::cout << 7 / 2.0 << '\n';                     // 2- 3.5 [Division decimal]
    std::cout << 7 % 2 << '\n';                       // 3- 1 [Residuo de division entera]
    std::cout << static_cast<int>(3.99) << '\n';      // 4- 3 [Truncar decimales]
    std::cout << (1 == 1.0) << '\n';                  // 5- 1 (true) [Comparacion de int con decimal]
    unsigned int u = 3;
    std::cout << u - 5 << '\n';                       // 6- 4294967294 [Se le da la 
                                                      // vuelta completa al unsigned]
}