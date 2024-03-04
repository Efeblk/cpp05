#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include "AForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

class Intern
{
public:
    Intern();
    Intern(Intern const &intern);
    Intern &operator=(Intern const &intern);
    ~Intern();
    AForm *makeForm(std::string formName, std::string target);
};

#endif
