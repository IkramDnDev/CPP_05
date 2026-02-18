#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("default"), _isSigned(false), _GradeToSign(1), _GradeToExec(1)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const Form& other) 
    : _name(other._name),
      _isSigned(other._isSigned),
      _GradeToSign(other._GradeToSign),
      _GradeToExec(other._GradeToExec)
{
    std::cout << "Form copy constructor called" << std::endl;
}

Form::Form(std::string const name, int const GradeToSign, int const GradeToExec)
    : _name(name),
      _isSigned(false),
      _GradeToSign(GradeToSign),
      _GradeToExec(GradeToExec)
{
    std::cout << "Form parameterized constructor called" << std::endl;
    if (GradeToSign < 1 || GradeToExec < 1)
        throw Form::GradeTooHighException();
    else if (GradeToSign > 150 || GradeToExec > 150)
        throw Form::GradeTooLowException();
}

Form& Form::operator=(const Form& other)
{
    std::cout << "Form assignment operator called" << std::endl;
    _isSigned = other._isSigned;

    return (*this);
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName() const
{
    return (_name);
}

int Form::getGradeToSign() const
{
    return (_GradeToSign);
}

int Form::getGradeToExecute() const
{
    return (_GradeToExec);
}

bool Form::getIsSigned() const
{
    return (_isSigned);
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form "
       << form.getName()
       << ", Signed:"
       << form.getIsSigned()
       << ", grade to sign: "
       << form.getGradeToSign()
       << ", grade to execute: "
       << form.getGradeToExecute()
       << ".";
    return os;
}

const char* Form::GradeTooHighException::what() const throw()
{
    const char *str = "Form grade is too high";
    return (str);
}

const char* Form::GradeTooLowException::what() const throw()
{
    const char *str = "Form grade is too low";
    return (str);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _GradeToSign)
        throw Form::GradeTooLowException();
    else
        _isSigned = true;
}