#include "mainwindow.h"
#include "faitu.h"
#include "fvt.h"
#include "fe.h"
#include "allstudents.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    SecondWindow sw;
    FVT fv;
    FE fe;
    AllStudents AS;
    w.show();

    QObject::connect(&w, SIGNAL(Main_Window_Close()), &sw, SLOT(Show_FAITU_Window())); //Sending the window1_close signal from
                                                                                        //the first form to the FAITU form
                                                                                        //in the FAITU_window_show slot()

    QObject::connect(&sw, SIGNAL(FAITU_Window_Close()), &w, SLOT(Show_Main_Window()));   //Sending the FAITU_close signal from
                                                                                         //the second form to the first form
                                                                                         //in the show_window slot()

    QObject::connect(&w, SIGNAL(Main_Window_Close2()), &fv, SLOT(Show_FVT_Window()));   //Sending the window1_close signal from
                                                                                        //the first form to the FVT form
                                                                                        //in the FVT_window_show slot()

    QObject::connect(&fv, SIGNAL(FVT_Window_Close()), &w, SLOT(Show_Main_Window()));   //Sending the FVT_close signal from
                                                                                       //the FVT form to the first form
                                                                                       //in the show_window slot()

    QObject::connect(&w, SIGNAL(Main_Window_Close3()), &fe, SLOT(Show_FE_Window()));   //Sending the window1_close signal from
                                                                                        //the first form to the FE form
                                                                                        //in the FE_window_show slot()

    QObject::connect(&fe, SIGNAL(FE_Window_Close()), &w, SLOT(Show_Main_Window()));   //Sending the FE_close signal from
                                                                                       //the FE form to the first form
                                                                                       //in the show_window slot()

    QObject::connect(&w, SIGNAL(Main_Window_Close4()), &AS, SLOT(Show_AllStud_Window()));    //Sending the window1_close signal from
                                                                                             //the first form to the AllStud form
                                                                                             //in the AllStud_window_show slot()

    QObject::connect(&AS, SIGNAL(AllStud_Window_Close()), &w, SLOT(Show_Main_Window()));    //Sending the AllStud_close signal from
                                                                                            //the AllStud form to the first form
                                                                                            //in the show_window slot()

    // Catching signals that are generated when switching groups
    // on ListWidget objects on the corresponding FAITU, FVT, FE forms
    QObject::connect(&sw, SIGNAL(signal_about_change()), &sw, SLOT(Print_Info_About_Of_Students()));
    QObject::connect(&fv, SIGNAL(signal_about_change()), &fv, SLOT(Print_Info_About_Of_Students()));
    QObject::connect(&fe, SIGNAL(signal_about_change()), &fe, SLOT(Print_Info_About_Of_Students()));

    return a.exec();
}
