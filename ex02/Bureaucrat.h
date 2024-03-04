#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
#include <iostream>
#include "AForm.h"

class AForm;

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &bureaucrat);
    Bureaucrat &operator=(Bureaucrat const &bureaucrat);
    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(AForm &form);
    void executeForm(AForm const &form);
    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);
#endif
