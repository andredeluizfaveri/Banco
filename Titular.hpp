#pragma once 
#include <string>

class Titular{
private:
    std::string nome;
    std::string cpf;
public:  
    Titular(std::string cpf, std::string nome);
    std:: string pegaNome();
    std:: string pegaCpf();
private:
    void verificaTamanhoDoNome();  
};