#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
    // std::cout << "========== CONSTRUCTION TEST ==========" << std::endl;
    // try
    // {
    //     Form f1("TaxForm", 50, 25);
    //     Form f2("SecretForm", 1, 1);
    //     Form f3("EasyForm", 150, 150);

    //     std::cout << f1 << std::endl;
    //     std::cout << f2 << std::endl;
    //     std::cout << f3 << std::endl;
    // }
    // catch (std::exception& e)
    // {
    //     std::cout << "Exception: " << e.what() << std::endl;
    // }

    // std::cout << "\n========== INVALID FORM GRADES ==========" << std::endl;
    // try
    // {
    //     Form bad1("BadForm1", 0, 10);
    // }
    // catch (std::exception& e)
    // {
    //     std::cout << "Exception: " << e.what() << std::endl;
    // }

    // try
    // {
    //     Form bad2("BadForm2", 10, 151);
    // }
    // catch (std::exception& e)
    // {
    //     std::cout << "Exception: " << e.what() << std::endl;
    // }

    // std::cout << "\n========== SIGNING TEST ==========" << std::endl;
    // Bureaucrat low("LowRank", 100);
    // Bureaucrat mid("MidRank", 50);
    // Bureaucrat high("HighRank", 1);

    // Form form("ImportantForm", 50, 10);

    // std::cout << form << std::endl;

    // low.signForm(form);
    // std::cout << form << std::endl;

    // mid.signForm(form);
    // std::cout << form << std::endl;

    // high.signForm(form);
    // std::cout << form << std::endl;

    // std::cout << "\n========== COPY / ASSIGNMENT ==========" << std::endl;
    // try
    // {
    //     Form original("Original", 42, 20);
    //     Form copy(original);
    //     Form assigned("Assigned", 100, 100);

    //     assigned = original;

    //     std::cout << original << std::endl;
    //     std::cout << copy << std::endl;
    //     std::cout << assigned << std::endl;
    // }
    // catch (std::exception& e)
    // {
    //     std::cout << "Exception: " << e.what() << std::endl;
    // }

    // std::cout << "\n========== END ==========" << std::endl;
    return 0;
}
