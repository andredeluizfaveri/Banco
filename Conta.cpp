#include "Conta.hpp"
#include "Titular.hpp"
#include<iostream>

int Conta:: numeroDeContas =0; // Inicializar propriedade
// This (É um método construtor, indica algo dentro da classe que está sendo trabalhada) para usar como ponteiro, 
//podendo assim, passar parâmetros já quando é criado a conta
//Usar : depois das definiçoes de recebimento, faz o mesmo trabalho que usar o This
//Nome disso é inicialization list
Conta::Conta (std:: string numeroTitular, Titular Titular): 
    Titular (Titular),
    numeroTitular(numeroTitular), 
    saldo(0)
{
    Conta:: numeroDeContas ++; // Conta somente quando é criado nova conta.
}

int Conta:: pegaNumeroDeContas(){
    return numeroDeContas;
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


std:: string Conta:: pegaNumero(){
    return numeroTitular;
}

Conta:: ~Conta(){
    numeroDeContas --;
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