#pragma once
#include<string>
#include "Titular.hpp"
#include "Cpf.hpp"

class Conta{
private:
    //Criar uma propriedade que não é do objeto, é da classe Conta::, fazendo assim contar corretamente quantas contas existem.
    static int numeroDeContas;
public: 
    static int pegaNumeroDeContas();
private:
    //Atributos
    std::string numeroTitular;
    Titular titular;
    float saldo;

public:
    //metodo
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    //metodos geter
    float pegaSaldo() const;
    std:: string pegaNumero();
    /*metodos seter são os que setam, vamos deixar sem para que não se possa alterar estes atributos posteriormente a criaçao da conta
    void definirNomeTitular(std:: string nome);
    void definirCpfTitular(std:: string cpf);
    void definirNumeroTitular(std:: string numero);
    */

    Conta (std:: string numero, Titular titular);
    //Deleta construtor vazio criado por padrão, para não poder criar construtor sem parâmetros.
    Conta() = delete;
    // Inicializa método destrutor
    ~Conta();



};