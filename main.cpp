#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"

using namespace std;

int main (){
    Titular titular("062939999999", "Andre");
    Conta umaoutraconta ("222.444-9", titular);
    Titular outrotitular("062939933399", "NEGaaA");
    Conta umaconta("111.000-2", outrotitular);
    Titular maisumtitular("062939999999", "Tifuncio");
    Conta outraconta("111.000-2", maisumtitular);
    umaoutraconta.depositar(200);
    cout << umaconta.pegaSaldo() << " Nome: " << outrotitular.pegaNome() << endl;
    cout << "Número de contas: " << Conta:: pegaNumeroDeContas << endl << "Numero de Titulares: " << Titular::peganumerodetitulares << endl;
    
    return 0;
}