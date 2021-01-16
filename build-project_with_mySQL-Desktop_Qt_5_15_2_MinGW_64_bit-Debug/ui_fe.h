/********************************************************************************
** Form generated from reading UI file 'fe.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FE_H
#define UI_FE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FE
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *label_kol_stud_in_group;
    QListWidget *listWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_5;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QComboBox *comboBox;

    void setupUi(QWidget *FE)
    {
        if (FE->objectName().isEmpty())
            FE->setObjectName(QString::fromUtf8("FE"));
        FE->resize(1308, 653);
        gridLayout = new QGridLayout(FE);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(FE);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(16);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        label_kol_stud_in_group = new QLabel(FE);
        label_kol_stud_in_group->setObjectName(QString::fromUtf8("label_kol_stud_in_group"));

        gridLayout->addWidget(label_kol_stud_in_group, 0, 2, 1, 1);

        listWidget = new QListWidget(FE);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        listWidget->setFont(font1);

        gridLayout->addWidget(listWidget, 1, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetMinimumSize);
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::WrapAllRows);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        formLayout->setHorizontalSpacing(7);
        formLayout->setVerticalSpacing(8);
        formLayout->setContentsMargins(15, 0, 15, 0);
        label = new QLabel(FE);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(FE);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(FE);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(FE);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        pushButton_5 = new QPushButton(FE);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(14);
        pushButton_5->setFont(font2);
        pushButton_5->setAutoFillBackground(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_5);


        gridLayout->addLayout(formLayout, 1, 1, 1, 1);

        tableWidget = new QTableWidget(FE);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(12);
        tableWidget->setFont(font3);

        gridLayout->addWidget(tableWidget, 1, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_4 = new QPushButton(FE);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font2);

        horizontalLayout->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(FE);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font2);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(FE);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font2);

        horizontalLayout->addWidget(pushButton_3);

        comboBox = new QComboBox(FE);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout, 2, 2, 1, 1);


        retranslateUi(FE);

        QMetaObject::connectSlotsByName(FE);
    } // setupUi

    void retranslateUi(QWidget *FE)
    {
        FE->setWindowTitle(QCoreApplication::translate("FE", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("FE", "\320\235\320\260\320\267\320\260\320\264 ", nullptr));
        label_kol_stud_in_group->setText(QCoreApplication::translate("FE", "\320\232\320\276\320\273-\320\262\320\276 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\276\320\262 \320\262 \320\263\321\200\321\203\320\277\320\277\320\265:", nullptr));
        label->setText(QCoreApplication::translate("FE", "\320\244\320\230\320\236 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("FE", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217 (\320\223\320\223\320\223\320\223\320\234\320\234\320\224\320\224)", nullptr));
        pushButton_5->setText(QCoreApplication::translate("FE", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FE", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FE", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\263\320\276 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FE", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        comboBox->setCurrentText(QString());
    } // retranslateUi

};

namespace Ui {
    class FE: public Ui_FE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FE_H
