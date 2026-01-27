#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(0)
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

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat parameterized constructor called" << std::endl;
}

std::string const& Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade()
{
    return (_grade);
}

void Bureaucrat::increment_grade()
{
    _grade++;
}

void Bureaucrat::decrement_grade()
{
    _grade--;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName();
    return os;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}
