#pragma once 
#include <string>
#include "Cpf.hpp"

class Titular{  
private:
    Cpf cpf;
    std::string nome;
public:  
    Titular(Cpf cpf, std::string nome);
    std:: string pegaNome();
    static int peganumerodetitulares();
private:
    void verificaTamanhoDoNome(); 
    static int numerodetitulares; 
};