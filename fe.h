#ifndef FE_H
#define FE_H

#include "mainwindow.h"
#include <QWidget>

namespace Ui {
class FE;
}

class FE : public QWidget
{
    Q_OBJECT

signals:
    void FE_Window_Close();
    void signal_about_change();

public:
    explicit FE(QWidget *parent = nullptr);
    ~FE();

private slots:
    void Show_FE_Window();     // Slot for displaying a window on the screen
    void on_pushButton_clicked(); // Button to access the main menu
    void on_pushButton_4_clicked(); // Button to add a student to a group
    void Initial_Settings(); // Settings for the initial display of the window
    void on_pushButton_5_clicked(); // Adding a student to the database (INSERT)
    void Print_Info_About_Of_Students(); // Output information in QTableWidget
    void on_listWidget_itemClicked(); // Changing a group in QListWidget (Emits a signal_about_change())
    void on_pushButton_3_clicked(); // The button allows you to delete a student from the database
    void on_pushButton_2_clicked(); // Deletes a student from the database by the ID selected in QComboBox
    void Counting_The_Number_Of_Students_In_A_Group(); // Counting the number of students in the group
    QStringList Inizialisation_Titles_Of_Tables(); // Filling in the column names in QTableWidget

private:
    Ui::FE *ui;
    QSqlQuery obj;

    // Declaring pointers of the QTableWidgetItem type to get
    // information from the database and insert it into QTableWidget
    QTableWidgetItem *qtw0;
    QTableWidgetItem *qtw1;
    QTableWidgetItem *qtw2;
};

#endif // FE_H
