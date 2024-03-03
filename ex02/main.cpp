#include "AForm.h"
#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"

int main()
{
    try{
        ShrubberyCreationForm f1 = ShrubberyCreationForm("f1");
        RobotomyRequestForm f2("f2");
        Bureaucrat b1("b1", 70);
        Bureaucrat b2("b2", 45);
        b1.signForm(f1);
        b2.signForm(f1);
        f1.execute(b1);
        b1.signForm(f2);
        f2.execute(b1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}