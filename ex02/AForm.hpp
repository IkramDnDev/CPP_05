#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>

class Bureaucrat; 

class AForm
{
    private:
        std::string const _name;
        bool _isSigned;
        int const _GradeToSign; //Minimum grade needed to sign
        int const _GradeToExec;
    protected:
        std::string const _target;
    public:
        AForm();
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        ~AForm();

        AForm(std::string const name, int const GradeToSign, int const GradeToExec);
        std::string const& getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool getIsSigned() const;

        void beSigned(const Bureaucrat& bureaucrat);

        class GradeTooHighException : public std::exception
        {
            public :
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public :
                virtual const char* what() const throw();
        };
        void execute(Bureaucrat const & executor) const;
        virtual void executeAction() const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif