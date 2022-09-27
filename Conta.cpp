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
void exibeSaldo(const Conta& conta){
    std:: cout << "O saldo da conta é: " << conta.pegaSaldo() << std:: endl;
}
float Conta:: pegaSaldo() const{
    return saldo;
}

std:: string Conta:: pegaNome(){
    return nomeTitular;
}

std:: string Conta:: pegaCpf(){
    return cpfTitular;
}

std:: string Conta:: pegaNumero(){
    return numeroTitular;
}

void Conta:: definirNomeTitular(std:: string nome){
    nomeTitular = nome;
}

void Conta:: definirCpfTitular(std:: string cpf){
    cpfTitular = cpf;
}

void Conta:: definirNumeroTitular(std:: string numero){
    numeroTitular = numero;
}