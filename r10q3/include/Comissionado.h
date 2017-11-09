#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"

class Comissionado : public Funcionario
{
    protected:
        double vendasSemanais, percentualComissao;

    public:
        Comissionado();
        double calculaSalario();
        double getVendasSemanais();
        double getPercentualComissao();
        void setVendasSemanais();
        void setPercentualComissao();
        virtual ~Comissionado();
};

#endif // COMISSIONADO_H
