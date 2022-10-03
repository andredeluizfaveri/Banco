#include "Titular.hpp"
#include <iostream>
int Titular:: numerodetitulares =0;

Titular::Titular(std::string cpf, std::string nome): cpf(cpf), nome(nome){
    verificaTamanhoDoNome();
    Titular:: numerodetitulares++;
}
int Titular:: peganumerodetitulares(){
    return numerodetitulares;
    }
void Titular::verificaTamanhoDoNome(){
    if (nome.size()<5){
    std:: cout << "Nome Muito Curto" << std:: endl;
    exit;
    }
}
std:: string Titular:: pegaNome(){
    return nome;
}

std:: string Titular:: pegaCpf(){
    return cpf;
}
