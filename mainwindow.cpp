#include "mainwindow.h"
#include "ui_mainwindow.h"

QMap<int, QString> map_with_number_of_groups;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Adding the names of faculties
    ui->listWidget->addItem("ФАИТУ");
    ui->listWidget->addItem("ФВТ");
    ui->listWidget->addItem("ФЭ");

    // Creating database connections by specifying the QMYSQL driver type
    QSqlDatabase dbase = QSqlDatabase::addDatabase("QMYSQL");
    dbase.setDatabaseName("qt_dtbase");
    dbase.setHostName("localhost");
    dbase.setPort(3306);
    dbase.setUserName("root");
    dbase.setPassword("Dima10910000");
    if(!dbase.open())
    {
        ui->statusbar->showMessage(dbase.lastError().text());
    }
    else
    {
        Set_Map();
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Show_Main_Window()
{
    MainWindow::show();
}

void Set_Map()
{
    // Creating a QSqlQuery object to perform queries to the database
    QSqlQuery obj_main;
    int res;
    bool b = obj_main.exec("SELECT number_of_group, id_group"
                           " FROM All_Groups;");
    if (!b)
    {
        QMessageBox msgBox;
        msgBox.setText("Ошибка!");
        msgBox.setIcon(QMessageBox::Warning);
        res = msgBox.exec();
    }
    else
    {
        while(obj_main.next())
        {
            // Filling the container with records obtained as a result of executing the SELECT query
            map_with_number_of_groups.insert(obj_main.value(0).toInt(), obj_main.value(1).toString());
        }
    }
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->listWidget->currentItem()->text() == "ФАИТУ")
    {
        hide();
        emit Main_Window_Close();
    }
    if (ui->listWidget->currentItem()->text() == "ФВТ")
    {
        hide();
        emit Main_Window_Close2();
    }
    if (ui->listWidget->currentItem()->text() == "ФЭ")
    {
        hide();
        emit Main_Window_Close3();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    hide();
    emit Main_Window_Close4();
}
