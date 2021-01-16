#include "fvt.h"
#include "ui_fvt.h"

FVT::FVT(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FVT)
{
    ui->setupUi(this);
    obj.exec("SELECT number_of_group FROM All_Groups WHERE id_facult = 2;");
    while(obj.next())
    {
        ui->listWidget->addItem(obj.value(0).toString()); // Output a list of groups in listwidget
    }
    Initial_Settings();
}

FVT::~FVT()
{
    delete ui;
    if (qtw0 && qtw1 && qtw2 != nullptr)
    {
        delete qtw0;
        delete qtw1;
        delete qtw2;
    }
}

void FVT::Show_FVT_Window()
{
    FVT::show();
}

void FVT::on_pushButton_clicked()
{
    FVT::close();
    emit FVT_Window_Close();
}

void FVT::on_pushButton_4_clicked()
{
    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->label_kol_stud_in_group->setVisible(false);
    ui->tableWidget->setVisible(false);
    ui->label->setVisible(true);
    ui->label_2->setVisible(true);
    ui->lineEdit->setVisible(true);
    ui->lineEdit_2->setVisible(true);
    ui->pushButton_5->setVisible(true);

}

void FVT::Initial_Settings()
{
    qtw0 = nullptr;
    qtw1 = nullptr;
    qtw2 = nullptr;
    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_kol_stud_in_group->setVisible(false);
    ui->lineEdit->setVisible(false);
    ui->lineEdit_2->setVisible(false);
    ui->comboBox->setVisible(false);
    ui->comboBox->setStyle(new ComboBoxStyle("Выберите студента (ID)"));
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->tableWidget->setEditTriggers(0);
    ui->tableWidget->setColumnCount(3); // Installed the number of columns
    ui->tableWidget->setHorizontalHeaderLabels(Inizialisation_Titles_Of_Tables()); // Set the column names
    ui->tableWidget->setShowGrid(true); // Grid On
    ui->tableWidget->verticalHeader()->setVisible(false); // Disable line numbering
    ui->tableWidget->horizontalHeader()->setDefaultSectionSize(250);
    ui->tableWidget->horizontalHeader()->resizeSection(0,120); // Set the size of the first column
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch); // Stretched the middle column
}

void FVT::on_pushButton_5_clicked()
{
    int key = ui->listWidget->currentItem()->text().toInt();
    QString default_values = "0";
    QString values = map_with_number_of_groups.value(key,default_values); // id group
    QString FIO = ui->lineEdit->text(); // FIO
    QString data = ui->lineEdit_2->text(); // data_birthday

    obj.prepare("INSERT INTO All_Students (id_group_of_student, fio_of_student, date_of_birthday)"
                " VALUES (:id_group_of_student, :fio_of_student, :date_of_birthday);");
    obj.bindValue(":id_group_of_student", values.toInt());
    obj.bindValue(":fio_of_student", FIO);
    obj.bindValue(":date_of_birthday", data.toInt());
    bool b = obj.exec();
    if (!b)
    {
        QMessageBox::warning(this, "Ошибка", obj.lastError().text());

    }
    else
    {
        QMessageBox::information(this, "Студент успешно добавлен", "Ок");
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
    }
    ui->pushButton_3->setVisible(true);
    ui->pushButton_4->setVisible(true);
    ui->label_kol_stud_in_group->setVisible(true);
    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->lineEdit->setVisible(false);
    ui->lineEdit_2->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->tableWidget->setVisible(true);
    Print_Info_About_Of_Students();
}



void FVT::Print_Info_About_Of_Students()
{
    ui->tableWidget->setRowCount(0);
    QString current_group = ui->listWidget->currentItem()->text();

    // Request to the database to output students of the selected group
    bool b = obj.exec("SELECT a.id_student, a.fio_of_student, DATE_FORMAT(a.date_of_birthday, '%d.%m.%Y')"
                     " FROM All_Students AS a"
                     " INNER JOIN All_Groups AS b ON b.id_group = a.id_group_of_student"
                     " WHERE b.number_of_group = " + current_group +
                     " ORDER BY a.fio_of_student;");
    if (!b)
    {
        QMessageBox::warning(this, "Ошибка", obj.lastError().text());
    }
    else
    {
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
    }
    Counting_The_Number_Of_Students_In_A_Group();
}

void FVT::on_listWidget_itemClicked()
{
    emit signal_about_change();
    ui->pushButton_3->setVisible(true);
    ui->pushButton_4->setVisible(true);
    ui->pushButton_2->setVisible(false);
    ui->comboBox->setVisible(false);
    ui->comboBox->clear();
    ui->label_kol_stud_in_group->setVisible(true);
}

void FVT::on_pushButton_3_clicked()
{
    ui->comboBox->setVisible(true);
    ui->pushButton_2->setVisible(true);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(false);

    int key = ui->listWidget->currentItem()->text().toInt();
    QString default_values = "0";
    QString values = map_with_number_of_groups.value(key,default_values); // id group
    bool b = obj.exec("SELECT id_student"
                     " FROM All_Students"
                     " WHERE id_group_of_student = "+values+
                     " ORDER BY fio_of_student;");
    if (!b)
    {
        QMessageBox::warning(this, "Ошибка", obj.lastError().text());
    }
    else
    {
        while(obj.next())
        {
            ui->comboBox->addItem(obj.value(0).toString()); // Output a list of groups in listwidget
        }
    }
}

void FVT::on_pushButton_2_clicked()
{
    if (ui->tableWidget->rowCount() == 0)
    {
        QMessageBox::warning(this, "Ошибка", "В группе нет студентов");
        return;
    }
    QString id_stud = ui->comboBox->currentText();
    bool b = obj.exec("DELETE FROM All_Students"
                      " WHERE id_student = "+id_stud+";");
    if (!b)
    {
        QMessageBox::warning(this, "Ошибка", obj.lastError().text());
    }
    else
    {
        ui->pushButton_2->setVisible(false);
        ui->comboBox->setVisible(false);
        ui->comboBox->clear();
        ui->pushButton_3->setVisible(true);
        ui->pushButton_4->setVisible(true);
        Print_Info_About_Of_Students();
    }
}

void FVT::Counting_The_Number_Of_Students_In_A_Group()
{
    int key = ui->listWidget->currentItem()->text().toInt();
    QString default_values = "0";
    QString values = map_with_number_of_groups.value(key,default_values); // id group
    bool b = obj.exec("SELECT COUNT(*)"
                     " FROM All_Students"
                     " WHERE id_group_of_student = "+values+";");
    if (!b)
    {
        QMessageBox::warning(this, "Ошибка", obj.lastError().text());
    }
    else
    {
        while(obj.next())
        {
            ui->label_kol_stud_in_group->setText("Кол-во студентов в группе: "+obj.value(0).toString());
        }
        ui->label_kol_stud_in_group->setVisible(true);
    }
}


QStringList FVT::Inizialisation_Titles_Of_Tables()
{
    QStringList value;
    value << "ID студента" << "ФИО студента" << "Дата рождения";
    return value;
}
