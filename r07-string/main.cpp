#include <iostream>

int contarPalabras(const std::string& s){
    int length = s.size();
    int counter = 1;
    for(int i=0; i<length; i++){
        if(s[i] == ' '){
            counter += 1;
        }
    }
    return counter;
}

std::string voltear(const std::string& s){
    int length = s.size();
    std::string result;
    for(int i=length-1; i>=0; i--){
        result += s[i];
    }
    return result;
}

int main(){
    std::cout << contarPalabras("Hola amigo, esta es una frase") << std::endl;
    std::cout << voltear("sonar") << std::endl;
    return 0;
}