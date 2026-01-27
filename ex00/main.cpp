#include "Bureaucrat.hpp"

int main ()
{
    std::cout << "Hello cpp05" << std::endl;
    Bureaucrat B1;
    Bureaucrat B2(B1);
    Bureaucrat B3 = B1;
}
