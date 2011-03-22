#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contactsnonaffectes.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    workspace = new QWorkspace();
    setCentralWidget(workspace);
    ContactsNonAffectes *cna  = new ContactsNonAffectes();
    workspace->addWindow(cna);
    cna->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}
