#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &form) : AForm(form), _target(form._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &form) {
    if (this != &form) {
        AForm::operator=(form);
        _target = form._target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    AForm::execute(executor);
    std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

