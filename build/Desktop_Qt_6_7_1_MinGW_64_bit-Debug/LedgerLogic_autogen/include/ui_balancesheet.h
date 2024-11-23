/********************************************************************************
** Form generated from reading UI file 'balancesheet.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALANCESHEET_H
#define UI_BALANCESHEET_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BalanceSheet
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *UpperLogoBar;
    QWidget *LogoStack_2;
    QTextEdit *Motto_2;
    QPushButton *LogoButton;
    QLineEdit *Title;
    QFrame *DateFrame;
    QVBoxLayout *verticalLayout_2;
    QDateEdit *ReadDate;
    QTreeView *BalanceSheetTable;

    void setupUi(QMainWindow *BalanceSheet)
    {
        if (BalanceSheet->objectName().isEmpty())
            BalanceSheet->setObjectName("BalanceSheet");
        BalanceSheet->resize(1312, 600);
        BalanceSheet->setStyleSheet(QString::fromUtf8("background-color:black;"));
        centralwidget = new QWidget(BalanceSheet);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QTreeView {\n"
"    background-color: #2e2e2e; /* Dark background */\n"
"    color: white; /* White text color */\n"
"    alternate-background-color: #3e3e3e; /* Slightly lighter background for alternate rows */\n"
"    border: none;\n"
"    font: 12pt 'Arial'; /* Font settings */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #1f1f1f; /* Dark header background */\n"
"    color: white; /* White header text */\n"
"    border: none;\n"
"    padding: 5px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QTreeView::item {\n"
"    border-bottom: 1px solid #444; /* Border between rows */\n"
"	height:40px;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        UpperLogoBar = new QStackedWidget(centralwidget);
        UpperLogoBar->setObjectName("UpperLogoBar");
        UpperLogoBar->setMinimumSize(QSize(0, 100));
        UpperLogoBar->setMaximumSize(QSize(16777215, 100));
        UpperLogoBar->setStyleSheet(QString::fromUtf8("background-color:black;"));
        UpperLogoBar->setFrameShape(QFrame::StyledPanel);
        UpperLogoBar->setFrameShadow(QFrame::Raised);
        LogoStack_2 = new QWidget();
        LogoStack_2->setObjectName("LogoStack_2");
        LogoStack_2->setMinimumSize(QSize(0, 100));
        LogoStack_2->setMaximumSize(QSize(16777215, 100));
        Motto_2 = new QTextEdit(LogoStack_2);
        Motto_2->setObjectName("Motto_2");
        Motto_2->setGeometry(QRect(250, 20, 914, 80));
        Motto_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        Motto_2->setStyleSheet(QString::fromUtf8("margin-bottom:3px;\n"
"color:white;"));
        Motto_2->setReadOnly(true);
        LogoButton = new QPushButton(LogoStack_2);
        LogoButton->setObjectName("LogoButton");
        LogoButton->setGeometry(QRect(0, 10, 300, 100));
        LogoButton->setMinimumSize(QSize(300, 100));
        LogoButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/AppLogo.png"), QSize(), QIcon::Active, QIcon::On);
        LogoButton->setIcon(icon);
        LogoButton->setIconSize(QSize(300, 100));
        UpperLogoBar->addWidget(LogoStack_2);
        LogoButton->raise();
        Motto_2->raise();

        verticalLayout->addWidget(UpperLogoBar);

        Title = new QLineEdit(centralwidget);
        Title->setObjectName("Title");
        Title->setMinimumSize(QSize(400, 40));
        QFont font;
        font.setPointSize(15);
        Title->setFont(font);
        Title->setStyleSheet(QString::fromUtf8("background-color:gray;"));
        Title->setAlignment(Qt::AlignCenter);
        Title->setReadOnly(true);

        verticalLayout->addWidget(Title);

        DateFrame = new QFrame(centralwidget);
        DateFrame->setObjectName("DateFrame");
        DateFrame->setMinimumSize(QSize(150, 50));
        DateFrame->setFrameShape(QFrame::StyledPanel);
        DateFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(DateFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        ReadDate = new QDateEdit(DateFrame);
        ReadDate->setObjectName("ReadDate");
        ReadDate->setMinimumSize(QSize(0, 40));
        ReadDate->setMaximumSize(QSize(150, 16777215));
        ReadDate->setStyleSheet(QString::fromUtf8("background-color:gray;"));
        ReadDate->setCalendarPopup(true);
        ReadDate->setDate(QDate(2024, 10, 30));

        verticalLayout_2->addWidget(ReadDate);


        verticalLayout->addWidget(DateFrame, 0, Qt::AlignRight);

        BalanceSheetTable = new QTreeView(centralwidget);
        BalanceSheetTable->setObjectName("BalanceSheetTable");
        BalanceSheetTable->header()->setMinimumSectionSize(700);

        verticalLayout->addWidget(BalanceSheetTable);

        BalanceSheet->setCentralWidget(centralwidget);

        retranslateUi(BalanceSheet);

        QMetaObject::connectSlotsByName(BalanceSheet);
    } // setupUi

    void retranslateUi(QMainWindow *BalanceSheet)
    {
        BalanceSheet->setWindowTitle(QCoreApplication::translate("BalanceSheet", "BalanceSheet", nullptr));
        Motto_2->setHtml(QCoreApplication::translate("BalanceSheet", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">ACCOUNTING MADE EASY</span></p></body></html>", nullptr));
        LogoButton->setText(QCoreApplication::translate("BalanceSheet", "PushButton", nullptr));
        Title->setText(QCoreApplication::translate("BalanceSheet", "BALANCE SHEET AT ___________", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BalanceSheet: public Ui_BalanceSheet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALANCESHEET_H
