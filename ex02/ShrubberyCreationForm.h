#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
#include <iostream>
#include "AForm.h"
#include <fstream>

class ShrubberyCreationForm : public AForm {
private:
    std::string _target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const &form);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &form);
    void execute(Bureaucrat const &executor) const;    
    ~ShrubberyCreationForm();
};

#endif