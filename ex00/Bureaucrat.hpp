#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);
        ~Bureaucrat();

        Bureaucrat(std::string name, int grade);
        std::string const& getName() const;
        int getGrade();
        void increment_grade();
        void decrement_grade();
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const& bureaucrat);