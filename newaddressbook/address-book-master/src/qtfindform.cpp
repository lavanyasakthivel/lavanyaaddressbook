#include "contact.h"
#include "qtcontactform.h"
#include "qtfindform.h"
#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include<sqlite3.h>

Qtfindform::Qtfindform(Contact &c,
                                        QWidget *parent,
                                        Qt::WindowFlags f) :
                                        QDialog(parent, f),
                                        contactForm(new QtContactForm()),
                                        contactTofind(c)
{
    QVBoxLayout *mainContainer = new QVBoxLayout();
    mainContainer->addLayout(contactForm);

    QHBoxLayout *buttonContainer = new QHBoxLayout();
    QPushButton *okButton = new QPushButton("OK");
    QPushButton *cancelButton = new QPushButton("Cancel");
    buttonContainer->addWidget(okButton);
    buttonContainer->addWidget(cancelButton);
    mainContainer->addLayout(buttonContainer);

    connect(okButton, SIGNAL(clicked()), this, SLOT(accept()));

    connect(cancelButton, SIGNAL(clicked()), this, SLOT(reject()));

   //fillForm();
    setLayout(mainContainer);
    setWindowTitle("find Contact");
}
/*void getTableData()
{
    sqlite3_stmt *statement;

    char *query = "select * from Contacts2";

    if ( sqlite3_prepare(dbfile, query, -1, &statement, 0 ) == SQLITE_OK )
    {
        contactTofind.firstname = sqlite3_column_count(statement);
        int res = 0;

        while ( 1 )
        {
            res = sqlite3_step(statement);

            if ( res == SQLITE_ROW )
            {
                for ( int i = 0; i < ctotal; i++ )
                {
                    string s = (char*)sqlite3_column_text(statement, i);
                    // print or format the output as you want
                    cout << s << " " ;
                }
                cout << endl;
            }

            if ( res == SQLITE_DONE || res==SQLITE_ERROR)
            {
                cout << "done " << endl;
                break;
            }
        }
    }
}*/
void Qtfindform::fillForm()
{
    contactForm->firstNameField->setText(contactTofind.firstName.c_str());
    contactForm->lastNameField->setText(contactTofind.lastName.c_str());
    contactForm->addressField->setText(contactTofind.address.c_str());
    contactForm->phoneNumberField->setText(contactTofind.phoneNumber.c_str());
    contactForm->emailField->setText(contactTofind.email.c_str());
    contactForm->cityField->setText(contactTofind.city.c_str());
    contactForm->countryField->setText(contactTofind.country.c_str());



}

void Qtfindform::accept()
{
    contactTofind.firstName = contactForm->firstNameField->text().toStdString();
    contactTofind.lastName = contactForm->lastNameField->text().toStdString();
    contactTofind.address = contactForm->addressField->text().toStdString();
    contactTofind.phoneNumber = contactForm->phoneNumberField->text().toStdString();
    contactTofind.email = contactForm->emailField->text().toStdString();
    contactTofind.city = contactForm->cityField->text().toStdString();
    contactTofind.country = contactForm->countryField->text().toStdString();

    QDialog::accept();

}
