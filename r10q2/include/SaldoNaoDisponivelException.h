#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H
#include <exception>

class SaldoNaoDisponivelException : public std::exception
{
    public:
        SaldoNaoDisponivelException();
        virtual ~SaldoNaoDisponivelException() throw();
};

#endif // SALDONAODISPONIVELEXCEPTION_H
