#include "Conta.h"

Conta::Conta()
{
    //ctor
}
Conta::Conta(string nomeCliente, double salarioMensal, double saldo, string numeroConta){
    this->nomeCliente=nomeCliente;
    this->salarioMensal=salarioMensal;
    this->saldo=saldo;
    this->numeroConta=numeroConta;
    saldoNaoDisponivel = SaldoNaoDisponivelException();
}
string Conta::getnomeCliente(){
    return nomeCliente;
}
void Conta::setnomeCliente(string nomeCliente){
    this->nomeCliente=nomeCliente;
}
double Conta::getsalarioMensal(){
    return salarioMensal;
}
void Conta::setsalarioMensal(double salarioMensal){
    this->salarioMensal=salarioMensal;
    definirLimite();
}
double Conta::getsaldo(){
    return saldo;
}
void Conta::setsaldo(double saldo){
    this->saldo=saldo;
}
double Conta::getlimite(){
    return limite;
}
void Conta::setlimite(double limite){
    this->limite=limite;
}
string Conta::getnumeroConta(){
    return numeroConta;
}
void Conta::setnumeroConta(string){
    this->numeroConta=numeroConta;
}
void Conta::definirLimite(){
    limite=2*salarioMensal;
}
void Conta::sacar(double valor){
    if(valor <= (limite + saldo)){
        saldo-=valor;
        cout<<"Saque: R$ "<<valor<<endl;
    }else{
        throw saldoNaoDisponivel;
    }
}
void Conta::depositar(double valor){
    saldo+=valor;
}
Conta::~Conta()throw()
{
    //dtor
}
