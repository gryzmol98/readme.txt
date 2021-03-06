#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "baza.h"
#include "dodawanie.h"
#include "aktualizacja.h"
#include "usuwanie.h"
#include "porownaj.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_actionDodaj_triggered();

    void on_actionZmie_rekord_triggered();

    void on_actionUsu_triggered();

    void on_actionPor_wnaj_triggered();

private:
    Ui::MainWindow *ui;
    Dodawanie dodaj;
    Aktualizacja aktualizuj;
    Usuwanie usun;
    Porownaj porownaj;

};

#endif // MAINWINDOW_H
