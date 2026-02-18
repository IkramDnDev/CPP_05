#include "Bureaucrat.hpp"

int main()
{
    std::cout << "----------- Valid -----------" << std::endl;
    try
    {
        Bureaucrat a("Bob", 42);

        std::cout << a << std::endl;

    }
    catch(const std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n----------- Invalid -----------" << std::endl;
    try
    {
        Bureaucrat d("David", 0);
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    std::cout << "\n------------------------------" << std::endl;
    try
    {
        Bureaucrat e("Eve", 151);
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n----------- INCREMENT -----------" << std::endl;
    try
    {
        Bureaucrat f("Frank", 2);
        std::cout << f << std::endl;
        f.incrementGrade();
        std::cout << f << std::endl;
        f.incrementGrade();
        std::cout << f << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n----------- DECREMENT -----------" << std::endl;
    try
    {
        Bureaucrat g("Grace", 149);
        std::cout << g << std::endl;
        g.decrementGrade();
        std::cout << g << std::endl;
        g.decrementGrade();
        std::cout << g << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n----------- COPY & ASSIGNMENT -----------" << std::endl;
    try
    {
        Bureaucrat h("Henry", 10);
        Bureaucrat i(h);
        Bureaucrat j("Jack", 50);

        j = h;

        std::cout << h << std::endl;
        std::cout << i << std::endl;
        std::cout << j << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
