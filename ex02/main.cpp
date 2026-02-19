#include <iostream>
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main()
{
    try
    {
        
        Bureaucrat Ikram("Ikram dahhan", 3);
        std::cout << Ikram << std::endl;
        std::cout << std::endl;
        std::string target_1 = "Robot";
        RobotomyRequestForm R(target_1);
        std::cout << R << std::endl;
        Ikram.signForm(R);
        std::cout << std::endl;
        Ikram.executeForm(R);

        std::cout << "-----------------------------------" << std::endl;
        
        std::cout << Ikram << std::endl;
        std::cout << std::endl;
        std::string target_2 = "HOME";
        ShrubberyCreationForm S(target_2);
        std::cout << S << std::endl;
        Ikram.signForm(S);
        std::cout << std::endl;
        Ikram.executeForm(S);
        
        std::cout << "-----------------------------------" << std::endl;
        
        std::cout << Ikram << std::endl;
        std::cout << std::endl;
        std::string target_3 = "President";
        PresidentialPardonForm P(target_2);
        std::cout << P << std::endl;
        Ikram.signForm(P);
        std::cout << std::endl;
        Ikram.executeForm(P);
     
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << "\n";
    }
}
