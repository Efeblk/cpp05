#include "Intern.h"

std::string const _formNames[3] = {
    "shrubbery creation",
    "robotomy request",
    "presidential pardon"
};

Intern::Intern() {}

Intern::Intern(Intern const &intern) {
    *this = intern;
}

Intern &Intern::operator=(Intern const &intern) {
    if (this != &intern) {
        *this = intern;
    }
    return *this;
}

Intern::~Intern() {}

AForm *Intern::makeForm(std::string formName, std::string target) {
    size_t size = sizeof(_formNames) / sizeof(_formNames[0]); 
    for (size_t i = 0; i < size; i++)
    {
        if (formName == _formNames[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            switch (i)
            {
            case 0:
                return new ShrubberyCreationForm(target);
            case 1:
                return new RobotomyRequestForm(target);
            case 2:
                return new PresidentialPardonForm(target);
            }
        }
    }
    std::cout << "Form name not found" << std::endl;
    return NULL;
}