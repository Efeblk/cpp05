#ifndef AFORM_H
# define AFORM_H
#include <iostream>
#include "Bureaucrat.h"

class Bureaucrat;

class AForm {
private:
    const std::string _name;
    bool _signed;
    const int _gradeToSign;
    const int _gradeToExecute;
public:
    AForm();
    AForm(std::string name, int gradeToSign, int gradeToExecute);
    AForm(AForm const &form);
    AForm &operator=(AForm const &form);
    std::string getName() const;
    bool getSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(Bureaucrat &bureaucrat);
    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class FormNotSignedException : public std::exception {
        virtual const char *what() const throw();
    };

    virtual ~AForm() = 0;
};

std::ostream &operator<<(std::ostream &out, AForm const &form);

#endif