#include "Assalariado.h"

Assalariado::Assalariado() : Funcionario()
{
    //ctor
}
double Assalariado::getSalario(){
    return salario;
}
void Assalariado::setSalario(){
    cout<<"Digite o salario: ";
    cin>>salario;
}
double Assalariado::calculaSalario(){
    return salario;
}
Assalariado::~Assalariado()
{
    //dtor
}
