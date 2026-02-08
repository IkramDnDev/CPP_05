#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        const std::string _target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const & target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
        ~PresidentialPardonForm();

        static AForm* create(std::string const& target);

    protected:
        void executeAction() const;
};

#endif