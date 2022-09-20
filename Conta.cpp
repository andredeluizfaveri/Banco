#include "Conta.hpp"
#include<iostream>

void Conta::depositar (float valorADepositar){
        if (valorADepositar < 0)
        {
            std::cout << "Impossível depositar valor negativo" << std::endl;
            return;
        }
    saldo += valorADepositar;
}

void Conta::sacar (float valorASacar){
    if (valorASacar < 0)
        {
            std::cout << "Impossível sacar valor negativo" << std::endl;
            return;
        }
        if (valorASacar > saldo)
        {
            std::cout << "Saldo Insuficiente!" << std::endl;
            return;
        }
        saldo -= valorASacar;
}