#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"


class Horista : public Funcionario
{
    protected:
        double salarioPorHora, horasTrabalhadas;

    public:
        Horista();
        double calculaSalario();
        double getSalarioPorHora();
        double getHorasTrabalhadas();
        void setSalarioPorHora();
        void setHorasTrabalhadas();
        virtual ~Horista();
};

#endif // HORISTA_H
