#include "AForm.h"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &Aform) : _name(Aform._name), _signed(Aform._signed), _gradeToSign(Aform._gradeToSign), _gradeToExecute(Aform._gradeToExecute) {}

const char *AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

const char *AForm::FormNotSignedException::what() const throw() {
    return "Form is not signed";
}

AForm &AForm::operator=(AForm const &Aform) {
    if (this != &Aform) {
        _signed = Aform._signed;
    }
    return *this;
}

std::string AForm::getName() const {
    return _name;
}

bool AForm::getSigned() const {
    return _signed;
}

int AForm::getGradeToSign() const {
    return _gradeToSign;
}

int AForm::getGradeToExecute() const {
    return _gradeToExecute;
}

void AForm::beSigned(Bureaucrat &bureaucrat) 
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw AForm::GradeTooLowException();
    else if (_signed == true)
        std::cout << "Form " << _name << " is already signed\n";
    else
    {
        std::cout << "Form " << _name << " has been signed by " << bureaucrat.getName() << "\n";
        _signed = true;
    }
}

void AForm::execute(Bureaucrat const &executor) const {
    if (_signed == false) {
        throw FormNotSignedException();
    }
    else if (executor.getGrade() > _gradeToExecute) {
        throw GradeTooLowException();
    }
}

AForm::~AForm() {}

std::ostream &operator<<(std::ostream &out, AForm const &Aform) {
    out << "AForm " << Aform.getName() << " is ";
    if (!Aform.getSigned())
        out << "not ";
    out << "signed, grade to sign: " << Aform.getGradeToSign() << ", grade to execute: " << Aform.getGradeToExecute();
    return out;
}