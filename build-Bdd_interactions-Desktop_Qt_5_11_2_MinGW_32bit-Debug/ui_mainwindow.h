/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_TITRE;
    QLabel *label_CLIENT;
    QLabel *label_TAG;
    QLabel *label_PROD;
    QPushButton *button_client_add;
    QPushButton *button_client_rm;
    QPushButton *button_client_upd;
    QPushButton *button_tag_upd;
    QPushButton *button_tag_rm;
    QPushButton *button_tag_add;
    QPushButton *button_prod_upd;
    QPushButton *button_prod_rm;
    QPushButton *button_prod_add;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1267, 776);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_TITRE = new QLabel(centralWidget);
        label_TITRE->setObjectName(QStringLiteral("label_TITRE"));
        label_TITRE->setGeometry(QRect(400, 50, 381, 51));
        QFont font;
        font.setPointSize(20);
        label_TITRE->setFont(font);
        label_CLIENT = new QLabel(centralWidget);
        label_CLIENT->setObjectName(QStringLiteral("label_CLIENT"));
        label_CLIENT->setGeometry(QRect(190, 170, 71, 31));
        label_CLIENT->setFont(font);
        label_TAG = new QLabel(centralWidget);
        label_TAG->setObjectName(QStringLiteral("label_TAG"));
        label_TAG->setGeometry(QRect(590, 170, 51, 31));
        label_TAG->setFont(font);
        label_PROD = new QLabel(centralWidget);
        label_PROD->setObjectName(QStringLiteral("label_PROD"));
        label_PROD->setGeometry(QRect(950, 160, 81, 31));
        label_PROD->setFont(font);
        button_client_add = new QPushButton(centralWidget);
        button_client_add->setObjectName(QStringLiteral("button_client_add"));
        button_client_add->setGeometry(QRect(60, 220, 91, 31));
        button_client_rm = new QPushButton(centralWidget);
        button_client_rm->setObjectName(QStringLiteral("button_client_rm"));
        button_client_rm->setGeometry(QRect(180, 220, 91, 31));
        button_client_upd = new QPushButton(centralWidget);
        button_client_upd->setObjectName(QStringLiteral("button_client_upd"));
        button_client_upd->setGeometry(QRect(300, 220, 91, 31));
        button_tag_upd = new QPushButton(centralWidget);
        button_tag_upd->setObjectName(QStringLiteral("button_tag_upd"));
        button_tag_upd->setGeometry(QRect(690, 220, 91, 31));
        button_tag_rm = new QPushButton(centralWidget);
        button_tag_rm->setObjectName(QStringLiteral("button_tag_rm"));
        button_tag_rm->setGeometry(QRect(570, 220, 91, 31));
        button_tag_add = new QPushButton(centralWidget);
        button_tag_add->setObjectName(QStringLiteral("button_tag_add"));
        button_tag_add->setGeometry(QRect(450, 220, 91, 31));
        button_prod_upd = new QPushButton(centralWidget);
        button_prod_upd->setObjectName(QStringLiteral("button_prod_upd"));
        button_prod_upd->setGeometry(QRect(1070, 220, 91, 31));
        button_prod_rm = new QPushButton(centralWidget);
        button_prod_rm->setObjectName(QStringLiteral("button_prod_rm"));
        button_prod_rm->setGeometry(QRect(950, 220, 91, 31));
        button_prod_add = new QPushButton(centralWidget);
        button_prod_add->setObjectName(QStringLiteral("button_prod_add"));
        button_prod_add->setGeometry(QRect(830, 220, 91, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1267, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_TITRE->setText(QApplication::translate("MainWindow", "INTERFACE BASE DE DONNEES", nullptr));
        label_CLIENT->setText(QApplication::translate("MainWindow", "Client", nullptr));
        label_TAG->setText(QApplication::translate("MainWindow", "TAG", nullptr));
        label_PROD->setText(QApplication::translate("MainWindow", "PROD", nullptr));
        button_client_add->setText(QApplication::translate("MainWindow", "AJOUTER", nullptr));
        button_client_rm->setText(QApplication::translate("MainWindow", "SUPPRIMER", nullptr));
        button_client_upd->setText(QApplication::translate("MainWindow", "METTRE A JOUR", nullptr));
        button_tag_upd->setText(QApplication::translate("MainWindow", "METTRE A JOUR", nullptr));
        button_tag_rm->setText(QApplication::translate("MainWindow", "SUPPRIMER", nullptr));
        button_tag_add->setText(QApplication::translate("MainWindow", "AJOUTER", nullptr));
        button_prod_upd->setText(QApplication::translate("MainWindow", "METTRE A JOUR", nullptr));
        button_prod_rm->setText(QApplication::translate("MainWindow", "SUPPRIMER", nullptr));
        button_prod_add->setText(QApplication::translate("MainWindow", "AJOUTER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
