#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
    : AForm("ShrubberyCreationForm", 145, 137),
      _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other),
      _target(other._target)
{
}

ShrubberyCreationForm&
ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
    {}
    return *this;
}

// ShrubberyCreationForm::~ShrubberyCreationForm()
// {
// }
