#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        const std::string _target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const & target);
        RobotomyRequestForm(const RobotomyRequestForm& other);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
        ~RobotomyRequestForm();

        static AForm* create(std::string const& target);

    protected:
        void executeAction() const;
};

#endif