#pragma once
#include<string>

struct Conta{
    std::string numero, cpfTitular, nomeTitular;
    float saldo;

    void sacar(float valorASacar);
    void depositar(float valorADepositar);

};