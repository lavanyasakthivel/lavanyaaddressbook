#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit())
{
   // QLabel * textLabel=new QLabel();
    //textLabel ->setText("");
    addRow("first Name <font color='red'>*</font>",firstNameField);
    addRow("Last Name <font color='red'>*</font>", lastNameField);
    addRow("Address", addressField);
    addRow("Phone Number <font color='red'>*</font>", phoneNumberField);
    addRow("Email", emailField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
}
