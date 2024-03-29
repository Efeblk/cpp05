#include "AForm.h"
#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
int main()
{
    try{
        ShrubberyCreationForm f1 = ShrubberyCreationForm("f1");
        RobotomyRequestForm f2("f2");
        PresidentialPardonForm f3("f3");

        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        std::cout << f3 << std::endl;

        Bureaucrat b1("b1", 70);
        Bureaucrat b2("b2", 45);
        Bureaucrat b3("b3", 144);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b3 << std::endl;

        b1.signForm(f1);
        b2.signForm(f1);

        b1.executeForm(f1);
        b2.executeForm(f1);
        b3.executeForm(f1);

        b1.signForm(f2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}