#pragma once
#include<string>

class Conta{
private:
    //Atributos
    std::string numeroTitular, cpfTitular, nomeTitular;
    float saldo;

public:
    //metodo
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    //metodos geter
    float pegaSaldo() const;
    std:: string pegaNome();
    std:: string pegaCpf();
    std:: string pegaNumero();
    /*metodos seter são os que setam, vamos deixar sem para que não se possa alterar estes atributos posteriormente a criaçao da conta
    void definirNomeTitular(std:: string nome);
    void definirCpfTitular(std:: string cpf);
    void definirNumeroTitular(std:: string numero);
    */

    Conta (std:: string nome, std:: string cpf, std:: string numero);
    //Deleta construtor vazio criado por padrão, para não poder criar construtor sem parâmetros.
    Conta() = delete;



};