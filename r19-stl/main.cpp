#include <string>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

int main(){
    /*
    Unordered Map es la mas util si la base de datos es muy grande.
    Vector funciona mejor que los demas si la base de datos es muy pequeña.
    Set sirve mejor si se require mantener los duplicados ordenados dinamicamente.    
    */

    std::vector<std::string> palabras{"sol","mar","sol","luz","sol"};

    // Vector
    std::vector<std::string> claves;
    std::vector<int> veces;
    for(const std::string& w : palabras){
        bool esta = false;
        for(std::size_t i=0; i<claves.size(); ++i){
            if(claves[i] == w){ veces[i]++; esta = true; break; }
        }
        if(!esta){ claves.push_back(w); veces.push_back(1); }
    }

    for(std::size_t i=0; i<claves.size(); i++){
        std::cout << claves[i] << ": " << veces[i] << std::endl;
    }

    std::cout << "------------------" << std::endl;

    // Map
    std::unordered_map<std::string, int> hashClaves;
    for(const std::string& w : palabras){
        if(hashClaves.count(w) == 0){ hashClaves[w] = 1; }
        else { hashClaves[w] += 1; }
    }

    for(const auto& par : hashClaves){
        std::cout << par.first << ": " << par.second << std::endl;
    }


    std::cout << "------------------" << std::endl;

    // Set
    std::set<std::string> setClaves(palabras.begin(), palabras.end());
    std::set<int> setVeces;

    for(const std::string& w : setClaves){
        int cantidad = 0;
        for(std::size_t i=0; i<palabras.size(); i++){
            if(palabras[i] == w) { cantidad += 1; }
        }

        std::cout << w << ": " << cantidad << std::endl;
    }
}