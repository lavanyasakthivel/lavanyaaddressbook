#ifndef QTFINDFORM_H
#define QTFINDFORM_H


#include <QDialog>
#include <QWidget>
#include "qtcontactform.h"
#include "contact.h"

class Qtfindform : public QDialog
{
    Q_OBJECT

    public:
        Qtfindform(Contact &c, QWidget *parent=0, Qt::WindowFlags f=0);

    public slots:
        void accept();

    private:
        void fillForm();

        QtContactForm *contactForm;
        Contact &contactTofind;

};










#endif // QTFINDFORM_H
