#include <string>
#include <iostream>

void saludar(std::string& saludo){
    std::cout << saludo << std::endl;
}

int main(){
    saludar(3);
    // Compilador, tipos: Se esperaba que pasaran un string y pasaron un int a una funcion
}