#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private slots:
    void addContact();
    void searchContact();

private:
    QWidget *centralWidget;
    QPushButton *addContactButton;
    QPushButton *searchContactButton;
    void setupUi(QMainWindow *MainWindow);
};

#endif // MAINWINDOW_H
