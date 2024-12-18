#include "mainwindow.h"
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void MainWindow::setupUi(QMainWindow *MainWindow)
{
    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName(QStringLiteral("MainWindow"));

    MainWindow->resize(800, 600);

    centralWidget = new QWidget(MainWindow);
    setCentralWidget(centralWidget);

    QVBoxLayout *layout = new QVBoxLayout(centralWidget);
    
    addContactButton = new QPushButton("Add Contact", centralWidget);
    layout->addWidget(addContactButton);

    searchContactButton = new QPushButton("Search Contact", centralWidget);
    layout->addWidget(searchContactButton);

    // Connect signals and slots
    connect(addContactButton, &QPushButton::clicked, this, &MainWindow::addContact);
    connect(searchContactButton, &QPushButton::clicked, this, &MainWindow::searchContact);
}

void MainWindow::addContact()
{
    // Add contact implementation
}

void MainWindow::searchContact()
{
    // Search contact implementation
}
