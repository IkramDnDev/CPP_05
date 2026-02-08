 #include "RobotomyRequestForm.hpp"
 #include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 45, 72), _target("default") {};


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
    (void)other;
    return *this;
}

void RobotomyRequestForm::executeAction() const
{
    std::cout << "* drilling noises *" << std::endl;

    std::srand(std::time(NULL));
    if (std::rand() % 2)
        std::cout << _target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "Robotomy failed on " << _target << std::endl;
}

AForm* RobotomyRequestForm::create(std::string const& target)
{
    return new RobotomyRequestForm(target);
}

RobotomyRequestForm::~RobotomyRequestForm(){}