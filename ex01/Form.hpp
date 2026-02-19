#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat; 

class Form
{
    private:
        std::string const _name;
        bool _isSigned;
        int const _GradeToSign;
        int const _GradeToExec;
    public:
        Form();
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

        Form(std::string const name, int const GradeToSign, int const GradeToExec);
        std::string getName() const;
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
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif