#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "AForm.h"
#include <iostream>

class RobotomyRequestForm : public AForm {
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &form);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &form);
        void execute(Bureaucrat const &executor) const;
        ~RobotomyRequestForm();
};

#endif
