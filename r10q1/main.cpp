#include <iostream>
#include "TestaValidaNumero.h"
using namespace std;

int main()
{
    int num;
    TestaValidaNumero valida = TestaValidaNumero();

    cout<< "Digite um numero: ";
    cin>>num;

    try{

        valida.validaNumero(num);

        cout<<"Numero ok!\n";

    }
    catch(ValorAbaixoException abaixo){
        cout<<"Valor abaixo \n";
    }
    catch(ValorAcimaException acima){
        cout<<"Valor acima \n";
    }
    catch(ValorMuitoAcimaException muitoAcima){
        cout<<"Valor muito acima \n";
    }

    return 0;
}
