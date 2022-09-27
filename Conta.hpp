#pragma once
#include<string>

class Conta{
private:
    //Atributos
    std::string numeroTitular, cpfTitular, nomeTitular;
    float saldo = 0;

public:
    //metodo
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    //metodos geter
    float pegaSaldo() const;
    std:: string pegaNome();
    std:: string pegaCpf();
    std:: string pegaNumero();
    //metodos seter
    void definirNomeTitular(std:: string nome);
    void definirCpfTitular(std:: string cpf);
    void definirNumeroTitular(std:: string numero);



};