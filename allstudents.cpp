#include "allstudents.h"
#include "ui_allstudents.h"

AllStudents::AllStudents(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AllStudents)
{
    ui->setupUi(this);

}

AllStudents::~AllStudents()
{
    delete ui;
}

void AllStudents::Show_AllStud_Window()
{
    ui->tableWidget->setEditTriggers(0);
    ui->tableWidget->setColumnCount(3); // Installed the number of columns
    ui->tableWidget->setHorizontalHeaderLabels(Inizialisation_Titles_Of_Tables()); // Set the column names
    ui->tableWidget->setShowGrid(true); // Grid On
    ui->tableWidget->verticalHeader()->setVisible(false); // Disable line numbering
    ui->tableWidget->horizontalHeader()->setDefaultSectionSize(150); // Standard column size
    ui->tableWidget->horizontalHeader()->resizeSection(0,400); // Set the size of the first column
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch); // Stretched the middle column
    Print_Info_About_Of_Students();
    AllStudents::show();
}

void AllStudents::on_pushButton_clicked()
{
    ui->tableWidget->setRowCount(0);
    AllStudents::close();
    emit AllStud_Window_Close();
}

void AllStudents::Print_Info_About_Of_Students()
{
    ui->tableWidget->setRowCount(0);
    // Query the database to display all students that exist in the database
    bool b = obj.exec("SELECT a.fio_of_student, b.number_of_group, b.title_of_direction"
                     " FROM All_Students AS a"
                     " INNER JOIN All_Groups AS b ON b.id_group = a.id_group_of_student"
                     " ORDER BY a.fio_of_student;");
    if (!b)
    {
        QMessageBox::warning(this, "Ошибка", obj.lastError().text());
    }
    else
    {
        QTableWidgetItem *qtw0;
        QTableWidgetItem *qtw1;
        QTableWidgetItem *qtw2;
        for (int i = 0; obj.next(); ++i)
        {
            ui->tableWidget->insertRow(i);
            qtw0 = new QTableWidgetItem(obj.value(0).toString());
            qtw1 = new QTableWidgetItem(obj.value(1).toString());
            qtw2 = new QTableWidgetItem(obj.value(2).toString());
            ui->tableWidget->setItem(i,0, qtw0);
            ui->tableWidget->setItem(i,1, qtw1);
            ui->tableWidget->setItem(i,2, qtw2);
        }
        delete qtw0;
        delete qtw1;
        delete qtw2;
    }
}


QStringList AllStudents::Inizialisation_Titles_Of_Tables()
{
    QStringList value;
    value << "ФИО студента" << "№ группы" << "Направление студента";
    return value;
}
