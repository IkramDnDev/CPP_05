 #include "RobotomyRequestForm.hpp"
 #include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
    : AForm("RobotomyRequestForm", 72, 45),
      _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other),
      _target(other._target)
{
}

RobotomyRequestForm&
RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other)
    {}
    return *this;
}

// RobotomyRequestForm::~RobotomyRequestForm()
// {
// }
