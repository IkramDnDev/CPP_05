#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
    : AForm("PresidentialPardonForm", 25, 5),
      _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
    : AForm(other),
      _target(other._target)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        // _target is const → not assigned
    }
    return *this;
}

// PresidentialPardonForm::~PresidentialPardonForm()
// {
// }
