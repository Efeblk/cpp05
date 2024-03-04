#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H
#include "AForm.h"

class PresidentialPardonForm : public AForm {
private:
    std::string _target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
    void execute(Bureaucrat const &executor) const;
    ~PresidentialPardonForm(void);
};

#endif