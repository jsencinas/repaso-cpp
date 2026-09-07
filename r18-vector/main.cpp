#include <iostream>
#include <vector>

int main(){
    std::vector<int> lista;
    unsigned int capacidad = 0;
    int reasignaciones = -1;

    for(int i=0; i<1000; i++){
        lista.push_back(i);
        if(capacidad != lista.capacity()){
            capacidad = lista.capacity();
            reasignaciones += 1;
            std::cout << "Capacidad-> " << capacidad << std::endl;
        }
    }
    std::cout << "reasignaciones: " << reasignaciones << std::endl;
    std::cout << "---------------------------" << std::endl;
    
    capacidad = 0;
    reasignaciones = -1;
    std::vector<int> lista2;
    lista2.reserve(1000);

    for(int i=0; i<1000; i++){
        lista2.push_back(i);
        if(capacidad != lista2.capacity()){
            capacidad = lista2.capacity();
            reasignaciones += 1;
            std::cout << "Capacidad-> " << capacidad << std::endl;
        }
    }
    std::cout << "reasignaciones: " << reasignaciones << std::endl;
}