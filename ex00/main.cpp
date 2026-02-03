#include "Bureaucrat.hpp"

int main()
{
    std::cout << "===== VALID CONSTRUCTION =====" << std::endl;
    {
        try
        {
            Bureaucrat a("Alice", 42);
            Bureaucrat b("Bob", 1);
            Bureaucrat c("Charlie", 150);

            std::cout << a << std::endl;
            std::cout << b << std::endl;
            std::cout << c << std::endl;
        }
        catch(const std::exception &e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }
    }

    std::cout << "\n===== INVALID CONSTRUCTION =====" << std::endl;
    {
        try
        {
            Bureaucrat d("David", 0);
        }
        catch(const std::exception& e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }

        try
        {
            Bureaucrat e("Eve", 151);
        }
        catch(const std::exception& e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }
    }

    std::cout << "\n===== INCREMENT TEST (PROMOTION) =====" << std::endl;
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

    std::cout << "\n===== DECREMENT TEST (DEMOTION) =====" << std::endl;
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

    std::cout << "\n===== COPY & ASSIGNMENT TEST =====" << std::endl;
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
