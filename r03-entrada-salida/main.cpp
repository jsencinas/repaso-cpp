#include <iostream>
#include <limits>
#include <string>

using namespace std;

void limpiarLinea(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
} 

int leerEnRango(const string& msg, int lo, int hi){
    int num = 0;
    while(true){
        cout << msg << ' ';
        bool ok = static_cast<bool>(cin >> num);
        limpiarLinea();
        if(ok && num>=lo && num<=hi) return num;
        else cout << "Inserte un numero entre:" 
                    << lo << " y " << hi << '\n';  
    }

}

int main() {
    leerEnRango("Hola ", 2, 10);
}