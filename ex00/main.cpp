#include "Bureaucrat.h"

int main(int argc, const char** argv) 
{
    (void)argc;
    (void)argv;
    Bureaucrat b1("b1", 1);
    Bureaucrat b2("b2", 150);
    Bureaucrat b3("b3", 75);
    Bureaucrat b4("b4", 75);
    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << b3 << std::endl;
    std::cout << b4 << std::endl;
    try
    {
        Bureaucrat b5("b5", 0);
    }
    catch(Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat b6("b6", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        b1.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        b2.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        throw Bureaucrat::GradeTooHighException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}