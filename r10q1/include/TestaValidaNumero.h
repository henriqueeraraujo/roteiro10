#ifndef TESTAVALIDANUMERO_H
#define TESTAVALIDANUMERO_H
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

class TestaValidaNumero : public ValorAbaixoException, ValorAcimaException, ValorMuitoAcimaException
{
    protected:

    ValorAbaixoException abaixo;
    ValorAcimaException acima;
    ValorMuitoAcimaException muitoAcima;

    public:
        TestaValidaNumero();
        void validaNumero(int num);
        virtual ~TestaValidaNumero()throw();
};

#endif // TESTAVALIDANUMERO_H
