#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &form) : AForm(form), _target(form._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &form) {
    if (this != &form) {
        AForm::operator=(form);
        _target = form._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const 
{
    AForm::execute(executor);
    std::srand(std::time(0));
    int rd = std::rand() % 2;
    if(rd == 0)
        std::cout << this->_target << " has been robotomized successfully\n";
    else
        std::cout << this->_target << " robotomization failed\n";
}