#ifndef ARTICULO_CPP
#define ARTICULO_CPP

#include "articulo.hpp"

Articulo::Articulo(Cadena cod, Cadena tit, Fecha f, double pr, int num) {
    cod_referencia_ = cod;
    titulo_ = tit;
    f_publi_ = f;
    precio_ = pr;
    numero_ejem_ = num;
}

std::basic_ostream<char>& operator <<(std::basic_ostream<char>& os, const Articulo& a) {
    char* precio_str = new char[3];
    sprintf(precio_str, "%.2f", a.precio());
    
    os << "[" << a.referencia() << "] " << "\"" << a.titulo() << "\", ";
    os << a.f_publi().anno() << ". " << precio_str << " €";
    os << std::endl;
    
    return os;
}


#endif
