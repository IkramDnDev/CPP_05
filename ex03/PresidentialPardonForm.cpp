#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default") {};

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
    (void)other;
    return *this;
}

void PresidentialPardonForm::executeAction() const
{
    std::cout << _target
              << " has been pardoned by Zaphod Beeblebrox"
              << std::endl;
}

AForm* PresidentialPardonForm::create(std::string const& target)
{
    return new PresidentialPardonForm(target);
}

PresidentialPardonForm::~PresidentialPardonForm(){}