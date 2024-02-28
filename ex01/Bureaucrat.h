#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
#include <iostream>
#include "Form.h"

class Form;

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
    void signForm(Form &form);

    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw() { return "grade is too high"; };
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw() { return "grade is too low"; };
    };
    ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);
#endif
