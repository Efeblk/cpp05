#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &form) : AForm(form), _target(form._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &form) {
    if (this != &form) {
        AForm::operator=(form);
        _target = form._target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &Bureaucrat) const {
    AForm::execute(Bureaucrat);
    std::ofstream file;
    file.open(_target + "_shrubbery");
    file << "      /\\      " << std::endl;
    file << "     /\\*\\     " << std::endl;
    file << "    /\\O\\*\\    " << std::endl;
    file << "   /*/\\/\\/\\   " << std::endl;
    file << "  /\\O\\/\\*\\/\\  " << std::endl;
    file << " /\\*\\/\\*\\/\\/\\ " << std::endl;
    file << "/\\O\\/\\/*/\\/O/\\" << std::endl;
    file << "      ||      " << std::endl;
    file <<      "      ||      " << std::endl;
    file <<      "      ||      " << std::endl;
    file << "      ||      " << std::endl;
    file << "      ||      " << std::endl;
    file << "      ||      " << std::endl;
    file << "     /||\\     " << std::endl;
    file.close();
}
