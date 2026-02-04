#include <iostream>
// #include 


class ikram : public std::exception 
{
    public :
        int x ;
        const char* what()  throw()
        {
            return("ikram");
        }

};

int main()
{
    try
    {
        throw ikram();
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << "\n";
    }
    catch(ikram &e)
    {
        std::cout << e.what() << "\n";
    }
}

