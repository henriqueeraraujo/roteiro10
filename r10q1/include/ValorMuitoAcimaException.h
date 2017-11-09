#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H
#include <exception>


class ValorMuitoAcimaException : public std::exception
{
    public:
        ValorMuitoAcimaException();
        virtual ~ValorMuitoAcimaException()throw();

    protected:

    private:
};

#endif // VALORMUITOACIMAEXCEPTION_H
