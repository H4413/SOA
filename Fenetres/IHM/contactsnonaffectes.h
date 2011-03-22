#ifndef CONTACTSNONAFFECTES_H
#define CONTACTSNONAFFECTES_H

#include <QWidget>

namespace Ui {
    class ContactsNonAffectes;
}

class ContactsNonAffectes : public QWidget
{
    Q_OBJECT

public:
    explicit ContactsNonAffectes(QWidget *parent = 0);
    ~ContactsNonAffectes();

private:
    Ui::ContactsNonAffectes *ui;
};

#endif // CONTACTSNONAFFECTES_H
