/********************************************************************************
** Form generated from reading UI file 'allstudents.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLSTUDENTS_H
#define UI_ALLSTUDENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllStudents
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *AllStudents)
    {
        if (AllStudents->objectName().isEmpty())
            AllStudents->setObjectName(QString::fromUtf8("AllStudents"));
        AllStudents->resize(1031, 648);
        gridLayout = new QGridLayout(AllStudents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(AllStudents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        tableWidget = new QTableWidget(AllStudents);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 1, 1, 1);


        retranslateUi(AllStudents);

        QMetaObject::connectSlotsByName(AllStudents);
    } // setupUi

    void retranslateUi(QWidget *AllStudents)
    {
        AllStudents->setWindowTitle(QCoreApplication::translate("AllStudents", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("AllStudents", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllStudents: public Ui_AllStudents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLSTUDENTS_H
