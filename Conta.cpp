#include "Conta.hpp"
#include<iostream>
// This (É um método construtor, indica algo dentro da classe que está sendo trabalhada) para usar como ponteiro, 
//podendo assim, passar parâmetros já quando é criado a conta
//Usar : depois das definiçoes de recebimento, faz o mesmo trabalho que usar o This
//Nome disso é inicialization list
Conta::Conta (std:: string nomeTitular, std:: string cpfTitular, std:: string numeroTitular)
: nomeTitular(nomeTitular), cpfTitular(cpfTitular), numeroTitular(numeroTitular), saldo(0)
{

}

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
/*
void Conta:: definirNomeTitular(std:: string nome){
    nomeTitular = nome;
}

void Conta:: definirCpfTitular(std:: string cpf){
    cpfTitular = cpf;
}

void Conta:: definirNumeroTitular(std:: string numero){
    numeroTitular = numero;
}
*/