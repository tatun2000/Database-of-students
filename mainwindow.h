#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QString>
#include <QMap>
#include <QList>
#include <QListWidgetItem>
#include <QComboBox>
#include <QStringList>
#include <QTableWidgetItem>
#include <QMessageBox>
#include <QCloseEvent>
#include "comboboxstyle.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

// An associative container that contains information about groups and faculties
extern QMap<int, QString> map_with_number_of_groups;

// Filling the Associative container QMap
void Set_Map();


class MainWindow : public QMainWindow
{
    Q_OBJECT

// Signals for closing the main window
signals:
    void Main_Window_Close();
    void Main_Window_Close2();
    void Main_Window_Close3();
    void Main_Window_Close4();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void Show_Main_Window();     // Slot for displaying a window on the screen

private slots:
    void on_pushButton_clicked(); // Button to select a faculty
    void on_pushButton_2_clicked(); // Button to display information about all students

private:
    Ui::MainWindow *ui;

};


#endif // MAINWINDOW_H
