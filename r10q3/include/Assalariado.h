#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include <Funcionario.h>

class Assalariado : public Funcionario
{
    protected:
        double salario;

    public:
        Assalariado();
        double getSalario();
        void setSalario();
        double calculaSalario();
        virtual ~Assalariado();
};

#endif // ASSALARIADO_H
// TODO (henrique#1#):
