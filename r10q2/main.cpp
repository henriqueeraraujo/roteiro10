#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{

    Conta c1;
    ContaEspecial c2;
    string nomeCliente, numeroConta;
    double salarioMensal, saldo, valor;

    cout << "***** Cadastrando conta *****" << endl;
    cout << "Digite o nome do cliente: " << endl;
    cin>>nomeCliente;
    cout << "Digite o numero da conta do cliente "<<nomeCliente << endl;
    cin>>numeroConta;
    cout << "Digite o salario mensal do cliente " <<nomeCliente<< endl;
    cin>>salarioMensal;
    cout << "Digite o saldo do cliente " <<nomeCliente<< endl;
    cin>>saldo;
    c1=Conta(nomeCliente, salarioMensal, saldo, numeroConta);
    c1.definirLimite();

    cout << "***** Cadastrando conta especial *****" << endl;
    cout << "Digite o nome do cliente: " << endl;
    cin>>nomeCliente;
    cout << "Digite o numero da conta do cliente "<<nomeCliente << endl;
    cin>>numeroConta;
    cout << "Digite o salario mensal do cliente " <<nomeCliente<< endl;
    cin>>salarioMensal;
    cout << "Digite o saldo do cliente " <<nomeCliente<< endl;
    cin>>saldo;
    c2=ContaEspecial(nomeCliente, salarioMensal, saldo, numeroConta);
    c2.definirLimite();

    try{
    cout<<"*****Conta normal*****\n";
    cout<<"Digite o valor que voce desejar sacar: ";
    cin>>valor;
    c1.sacar(valor);
    cout<<"Digite o valor que voce desejar depositar: ";
    cin>>valor;
    c1.depositar(valor);
    }catch(SaldoNaoDisponivelException saldoNaoDisponivel){
        cout<<"Saldo insuficiente!\n";
    }
    try{
    cout<<"*****Conta especial*****\n";
    cout<<"Digite o valor que voce desejar sacar: ";
    cin>>valor;
    c2.sacar(valor);
    cout<<"Digite o valor que voce desejar depositar: ";
    cin>>valor;
    c2.depositar(valor);
    }catch(SaldoNaoDisponivelException saldoNaoDisponivel){
        cout<<"Saldo insuficiente!\n";
    }

    return 0;
}
