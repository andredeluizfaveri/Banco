#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main (){

    Conta umaoutraconta ("Andre", "062939999999", "222.444-9"), umaconta("Andressa", "99988330221", "111.000-2");
    umaoutraconta.depositar(200);
    cout << umaconta.pegaSaldo() << "Nome: " << umaconta.pegaNome() << endl;
    cout << "Número de contas: " << Conta:: pegaNumeroDeContas << endl;
    
    return 0;
}