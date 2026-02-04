#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
    : _name(other._name),
      _grade(other._grade)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    std::cout << "Bureaucrat assignment operator called" << std::endl;
    if (this != &other)
        _grade = other._grade;
    return *this;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    std::cout << "Bureaucrat parameterized constructor called" << std::endl;
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        _grade = grade;
}

std::string const& Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

void Bureaucrat::incrementGrade()
{
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade--;
}

void Bureaucrat::decrementGrade()
{
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName()
       << ", bureaucrat grade "
       << bureaucrat.getGrade()
       << ".";
    return os;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    const char *str = "Bureaucrat grade too high";
    return (str);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    const char *str = "Bureaucrat grade too low";
    return (str);
}

void Bureaucrat::signForm(AForm& form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << this->_name << " couldn’t sign "
                  << form.getName()
                  << " because " << e.what() << std::endl;
    }
}

// void Bureaucrat::executeForm(AForm const & form)
// {
//     try
//     {
//         form.execute(*this);
//         std::cout << this->_name << " executed " << form.getName() << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cout << e.what() << '\n';
//     }
// }
