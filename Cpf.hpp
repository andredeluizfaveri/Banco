#pragma once 
#include <string>

class Cpf{
private:
    std::string numero;
public:  
    Cpf(std::string numero);
    std:: string pegaCpf();
private:
    void verificaTamanhoDoCpf(); 
};