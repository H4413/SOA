#include "contactsnonaffectes.h"
#include "ui_contactsnonaffectes.h"
#include <QMenuBar>
#include <QFormLayout>

ContactsNonAffectes::ContactsNonAffectes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ContactsNonAffectes)
{
    ui->setupUi(this);
    //QFormLayout *layout = new QFormLayout();
    //layout->setMenuBar();
    //this->setLayout(layout);
}

ContactsNonAffectes::~ContactsNonAffectes()
{
    delete ui;
}
