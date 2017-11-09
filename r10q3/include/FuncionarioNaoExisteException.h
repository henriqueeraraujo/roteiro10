#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <exception>

class FuncionarioNaoExisteException : public std::exception
{
    public:
        FuncionarioNaoExisteException();
        virtual ~FuncionarioNaoExisteException() throw();

    protected:

    private:
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
