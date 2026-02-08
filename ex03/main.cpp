#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
    Intern intern;
    Bureaucrat boss("Boss", 1);

    std::cout << "-----------------------------------" << std::endl;

    AForm* f1 = intern.makeForm("shrubbery creation", "home");
    AForm* f2 = intern.makeForm("robotomy request", "Bender");
    AForm* f3 = intern.makeForm("presidential pardon", "Arthur Dent");
    AForm* f4 = intern.makeForm("unknown form", "test");

    std::cout << "-----------------------------------" << std::endl;

    if (f1)
    {
        boss.signForm(*f1);
        boss.executeForm(*f1);
        delete f1;
    }

    std::cout << "-----------------------------------" << std::endl;

    if (f2)
    {
        boss.signForm(*f2);
        boss.executeForm(*f2);
        delete f2;
    }

    std::cout << "-----------------------------------" << std::endl;

    if (f3)
    {
        boss.signForm(*f3);
        boss.executeForm(*f3);
        delete f3;
    }

    std::cout << "-----------------------------------" << std::endl;
    
    (void)f4;
    return 0;
}
