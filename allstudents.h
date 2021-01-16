#ifndef ALLSTUDENTS_H
#define ALLSTUDENTS_H

#include "mainwindow.h"
#include <QWidget>

namespace Ui {
class AllStudents;
}

class AllStudents : public QWidget
{
    Q_OBJECT

signals:
    void AllStud_Window_Close();

public:
    explicit AllStudents(QWidget *parent = nullptr);
    ~AllStudents();

private slots:
    void Show_AllStud_Window();     // Slot for displaying a window on the screen
    void on_pushButton_clicked();   // Button to access the main menu
    void Print_Info_About_Of_Students(); // Output information in QTableWidget
    QStringList Inizialisation_Titles_Of_Tables(); // Filling in the column names in QTableWidget

private:
    Ui::AllStudents *ui;
    QSqlQuery obj;


};

#endif // ALLSTUDENTS_H
