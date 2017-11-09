#include "Horista.h"

Horista::Horista() : Funcionario()
{
    //ctor
}
double Horista::calculaSalario(){
    cout<<"Para calcular o salario ";
    setHorasTrabalhadas();

    if(horasTrabalhadas <= 40){
        return (horasTrabalhadas * salarioPorHora);

    }else{
        return ((40 * salarioPorHora) + ((horasTrabalhadas - 40) * salarioPorHora * 1.5));

    }
}
double Horista::getSalarioPorHora(){
    return salarioPorHora;
}
double Horista::getHorasTrabalhadas(){
    return horasTrabalhadas;
}
void Horista::setSalarioPorHora(){
    cout<<"Digite o valor pago por hora ao funcionario "<<getNome()<<": ";
    cin>>salarioPorHora;
}
void Horista::setHorasTrabalhadas(){
    cout<<"Digite a quantidade de horas trabalhadas de "<<getNome()<<": ";
    cin>>horasTrabalhadas;
}
Horista::~Horista()
{
    //dtor
}
