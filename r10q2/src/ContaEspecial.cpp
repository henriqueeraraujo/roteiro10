#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(){

}
ContaEspecial::ContaEspecial(string nomeCliente, double salarioMensal, double saldo, string numeroConta):Conta(nomeCliente, salarioMensal, saldo, numeroConta)
{

}
void ContaEspecial::definirLimite(){
    limite = 3 * salarioMensal;
}
ContaEspecial::~ContaEspecial()throw()
{
    //dtor
}
