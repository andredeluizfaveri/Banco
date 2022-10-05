#include "Cpf.hpp"
#include <iostream>

Cpf::Cpf(std::string numero): numero(numero){
    verificaTamanhoDoCpf();
}

void Cpf::verificaTamanhoDoCpf(){
    if (numero.size()<11){
    std:: cout << "Número de Cpf Errado" << std:: endl;
    exit;
    }
}

std:: string Cpf:: pegaCpf(){
    return numero;
}
