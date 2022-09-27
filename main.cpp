#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main (){

    Conta umaoutraconta, umaconta;
    umaoutraconta.depositar(200);
    cout << umaconta.pegaSaldo() << endl;
    
    return 0;
}