/********************************************************************************
** Form generated from reading UI file 'mainwindow_add_client.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_ADD_CLIENT_H
#define UI_MAINWINDOW_ADD_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_add_client
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *button_list;
    QLabel *label_nom;
    QLineEdit *lineEdit_nom;
    QTextBrowser *text_clients;
    QLabel *label_adress;
    QLineEdit *lineEdit_adress;
    QLabel *label_ville;
    QLineEdit *lineEdit_ville;
    QLabel *label_codep;
    QLineEdit *lineEdit_codep;
    QLabel *label_tel;
    QLineEdit *lineEdit_tel;
    QPushButton *button_save;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow_add_client)
    {
        if (MainWindow_add_client->objectName().isEmpty())
            MainWindow_add_client->setObjectName(QStringLiteral("MainWindow_add_client"));
        MainWindow_add_client->resize(800, 600);
        centralwidget = new QWidget(MainWindow_add_client);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        button_list = new QPushButton(centralwidget);
        button_list->setObjectName(QStringLiteral("button_list"));

        gridLayout->addWidget(button_list, 0, 2, 1, 1);

        label_nom = new QLabel(centralwidget);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        QFont font;
        font.setPointSize(20);
        label_nom->setFont(font);

        gridLayout->addWidget(label_nom, 1, 0, 1, 1);

        lineEdit_nom = new QLineEdit(centralwidget);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));

        gridLayout->addWidget(lineEdit_nom, 1, 1, 1, 1);

        text_clients = new QTextBrowser(centralwidget);
        text_clients->setObjectName(QStringLiteral("text_clients"));

        gridLayout->addWidget(text_clients, 1, 2, 6, 1);

        label_adress = new QLabel(centralwidget);
        label_adress->setObjectName(QStringLiteral("label_adress"));
        label_adress->setFont(font);

        gridLayout->addWidget(label_adress, 2, 0, 1, 1);

        lineEdit_adress = new QLineEdit(centralwidget);
        lineEdit_adress->setObjectName(QStringLiteral("lineEdit_adress"));

        gridLayout->addWidget(lineEdit_adress, 2, 1, 1, 1);

        label_ville = new QLabel(centralwidget);
        label_ville->setObjectName(QStringLiteral("label_ville"));
        label_ville->setFont(font);

        gridLayout->addWidget(label_ville, 3, 0, 1, 1);

        lineEdit_ville = new QLineEdit(centralwidget);
        lineEdit_ville->setObjectName(QStringLiteral("lineEdit_ville"));

        gridLayout->addWidget(lineEdit_ville, 3, 1, 1, 1);

        label_codep = new QLabel(centralwidget);
        label_codep->setObjectName(QStringLiteral("label_codep"));
        label_codep->setFont(font);

        gridLayout->addWidget(label_codep, 4, 0, 1, 1);

        lineEdit_codep = new QLineEdit(centralwidget);
        lineEdit_codep->setObjectName(QStringLiteral("lineEdit_codep"));

        gridLayout->addWidget(lineEdit_codep, 4, 1, 1, 1);

        label_tel = new QLabel(centralwidget);
        label_tel->setObjectName(QStringLiteral("label_tel"));
        label_tel->setFont(font);

        gridLayout->addWidget(label_tel, 5, 0, 1, 1);

        lineEdit_tel = new QLineEdit(centralwidget);
        lineEdit_tel->setObjectName(QStringLiteral("lineEdit_tel"));

        gridLayout->addWidget(lineEdit_tel, 5, 1, 1, 1);

        button_save = new QPushButton(centralwidget);
        button_save->setObjectName(QStringLiteral("button_save"));

        gridLayout->addWidget(button_save, 6, 0, 1, 1);

        MainWindow_add_client->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow_add_client);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow_add_client->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow_add_client);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow_add_client->setStatusBar(statusbar);

        retranslateUi(MainWindow_add_client);

        QMetaObject::connectSlotsByName(MainWindow_add_client);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_add_client)
    {
        MainWindow_add_client->setWindowTitle(QApplication::translate("MainWindow_add_client", "MainWindow", nullptr));
        button_list->setText(QApplication::translate("MainWindow_add_client", "LISTER", nullptr));
        label_nom->setText(QApplication::translate("MainWindow_add_client", "Nom", nullptr));
        label_adress->setText(QApplication::translate("MainWindow_add_client", "Adresse", nullptr));
        label_ville->setText(QApplication::translate("MainWindow_add_client", "Ville", nullptr));
        label_codep->setText(QApplication::translate("MainWindow_add_client", "Code Postal", nullptr));
        label_tel->setText(QApplication::translate("MainWindow_add_client", "T\303\251l\303\251phone", nullptr));
        button_save->setText(QApplication::translate("MainWindow_add_client", "ENREGISTRER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_add_client: public Ui_MainWindow_add_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_ADD_CLIENT_H
