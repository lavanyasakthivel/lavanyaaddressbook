#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        cityField(new QLineEdit()),
        countryField(new QLineEdit())
{

    addRow("First Name<font color='red'>*</font>", firstNameField);
    addRow("Last Name<font color='red'>*</font>", lastNameField);
    addRow("Address", addressField);
    addRow("Phone Number<font color='red'>*</font>", phoneNumberField);
    addRow("Email<font color='red'>*</font>", emailField);
    addRow("city", cityField);
    addRow("country", countryField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    cityField->setText("");
    countryField->setText("");
}
