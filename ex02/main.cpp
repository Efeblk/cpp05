#include "AForm.h"
#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"

int main()
{
    try{
        ShrubberyCreationForm f1("f1");
        Bureaucrat b1("b1", 144);
        b1.signForm(f1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}