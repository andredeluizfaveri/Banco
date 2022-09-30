#include "Titular.hpp"
#include <iostream>

Titular::Titular(std::string cpf, std::string nome): cpf(cpf), nome(nome){
    verificaTamanhoDoNome();
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
