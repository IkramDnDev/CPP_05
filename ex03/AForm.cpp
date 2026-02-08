#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"), _isSigned(false), _GradeToSign(1), _GradeToExec(1)
{
    std::cout << "Form default constructor called" << std::endl;
}

AForm::AForm(const AForm& other) 
    : _name(other._name),
      _isSigned(other._isSigned),
      _GradeToSign(other._GradeToSign),
      _GradeToExec(other._GradeToExec)
{
    std::cout << "Form copy constructor called" << std::endl;
}

AForm::AForm(std::string const name, int const GradeToSign, int const GradeToExec)
    : _name(name),
      _isSigned(false),
      _GradeToSign(GradeToSign),
      _GradeToExec(GradeToExec)
{
    std::cout << "Form parameterized constructor called" << std::endl;
    if (GradeToSign < 1 || GradeToExec < 1)
        throw AForm::GradeTooHighException();
    else if (GradeToSign > 150 || GradeToExec > 150)
        throw AForm::GradeTooLowException();
}

AForm& AForm::operator=(const AForm& other)
{
    std::cout << "Form assignment operator called" << std::endl;
    _isSigned = other._isSigned;

    return (*this);
}

AForm::~AForm()
{
    std::cout << "Form destructor called" << std::endl;
}

std::string const& AForm::getName() const
{
    return (_name);
}

int AForm::getGradeToSign() const
{
    return (_GradeToSign);
}

int AForm::getGradeToExecute() const
{
    return (_GradeToExec);
}

bool AForm::getIsSigned() const
{
    return (_isSigned);
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
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

const char* AForm::GradeTooHighException::what() const throw()
{
    const char *str = "Form grade is too high";
    return (str);
}

const char* AForm::GradeTooLowException::what() const throw()
{
    const char *str = "Form grade is too low";
    return (str);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _GradeToSign)
        throw AForm::GradeTooLowException();
    else
        _isSigned = true;
}

void AForm::execute(Bureaucrat const & executor) const
{
    if (!getIsSigned())
        throw AForm::GradeTooLowException();
    if (executor.getGrade() > getGradeToExecute())
        throw AForm::GradeTooLowException();
    executeAction();
}
