#include "Titular.hpp"
#include <iostream>
int Titular:: numerodetitulares =0;

Titular::Titular(Cpf cpf, std::string nome): cpf(cpf), nome(nome){
    verificaTamanhoDoNome();
    Titular:: numerodetitulares++;
    std:: cout << "Nmeroooo de titulares: " << numerodetitulares << std::endl;
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


