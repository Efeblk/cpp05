#include "AForm.h"
#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "Intern.h"

int main()
{
    try{
        ShrubberyCreationForm f1 = ShrubberyCreationForm("f1");
        RobotomyRequestForm f2("f2");
        Bureaucrat b1("b1", 70);
        Bureaucrat b2("b2", 45);
        Bureaucrat b3("b3", 144);
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        AForm* rrf2;
        rrf2 = someRandomIntern.makeForm("FOO", "Bender");
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