#include <numeric>
#include "Fraccion.h"

Fraccion::Fraccion(int n, int d) : num(n), den(d){
    reducir();
};

void Fraccion::reducir(){
    int comunDenominador = std::gcd(num, den);
    num /= comunDenominador;
    den /= comunDenominador;
}

Fraccion Fraccion::operator+(const Fraccion& o) const{
    return Fraccion(num * o.den + o.num * den,
                    den * o.den);
}

Fraccion Fraccion::operator*(const Fraccion& o) const{
    return Fraccion(num * o.num, 
                    den * o.den);
}

bool Fraccion::operator==(const Fraccion& o) const {
    return num * o.den == o.num * den;
}

bool Fraccion::operator<(const Fraccion& o) const {
    return num * o.den < o.num * den;  // den_ > 0 siempre
}

std::ostream& operator<<(std::ostream& os, const Fraccion& f) {
    return os << f.num << '/' << f.den;
}