#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"

using namespace std;

int main (){
    Titular Titular("062939999999", "Andre");
    Conta umaoutraconta ("222.444-9", Titular);
    Conta umaconta("111.000-2", Titular);
    umaoutraconta.depositar(200);
    cout << umaconta.pegaSaldo() << "Nome: " << Titular.pegaNome() << endl;
    cout << "Número de contas: " << Conta:: pegaNumeroDeContas << endl;
    
    return 0;
}