#include <iostream>

class Fraccion{
    int num = 1, den = 2;
    void reducir();
        
    public:
        Fraccion(int n, int d);    
        Fraccion operator+(const Fraccion& o) const;
        Fraccion operator*(const Fraccion& o) const;
        bool operator==(const Fraccion& o) const;
        bool operator<(const Fraccion& o) const;
        friend std::ostream& operator<<(std::ostream&, const Fraccion&);
};