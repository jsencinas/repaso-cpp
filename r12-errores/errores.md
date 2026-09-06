1) p1.cpp:9:7: error: expected initializer before 'origen'
Compilador, sintaxis: Falta un punto y coma en la linea 9

2) /usr/bin/ld: undefined reference to `Cuenta::depositar(double)'
Enlazador: No se encuentra el cuerpo `depositar` o no existe

3) p3.cpp:6:24: error: cannot convert 'std::string' to 'int'
Compilador, tipos: Se esperaba que pasaran un int y pasaron un string a una funcion

4) p4.cpp:3:10: error: 'vector' is not a member of 'std'
Compilador, falta de include: no se incluyo la libreria vector

5) /usr/bin/ld: multiple definition of `doble(int)'
Enlazador: El cuerpo de double esta en un header incluido por dos .cpp.