/********************************************************************************
** Form generated from reading UI file 'placcount.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLACCOUNT_H
#define UI_PLACCOUNT_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PLAccount
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *UpperLogoBar;
    QWidget *LogoStack;
    QTextEdit *Motto;
    QPushButton *LogoButton;
    QLineEdit *Title;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QDateEdit *ReadFromDate;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_2;
    QDateEdit *ReadToDate;
    QTreeView *PLTable;

    void setupUi(QMainWindow *PLAccount)
    {
        if (PLAccount->objectName().isEmpty())
            PLAccount->setObjectName("PLAccount");
        PLAccount->resize(1299, 600);
        PLAccount->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;"));
        centralwidget = new QWidget(PLAccount);
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
        LogoStack = new QWidget();
        LogoStack->setObjectName("LogoStack");
        LogoStack->setMinimumSize(QSize(0, 100));
        LogoStack->setMaximumSize(QSize(16777215, 100));
        Motto = new QTextEdit(LogoStack);
        Motto->setObjectName("Motto");
        Motto->setGeometry(QRect(250, 20, 914, 80));
        Motto->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        Motto->setStyleSheet(QString::fromUtf8("margin-bottom:3px;\n"
"color:white;"));
        Motto->setReadOnly(true);
        LogoButton = new QPushButton(LogoStack);
        LogoButton->setObjectName("LogoButton");
        LogoButton->setGeometry(QRect(0, 10, 300, 100));
        LogoButton->setMinimumSize(QSize(300, 100));
        LogoButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/AppLogo.png"), QSize(), QIcon::Active, QIcon::On);
        LogoButton->setIcon(icon);
        LogoButton->setIconSize(QSize(300, 100));
        UpperLogoBar->addWidget(LogoStack);
        LogoButton->raise();
        Motto->raise();

        verticalLayout->addWidget(UpperLogoBar);

        Title = new QLineEdit(centralwidget);
        Title->setObjectName("Title");
        Title->setMinimumSize(QSize(300, 40));
        QFont font;
        font.setPointSize(15);
        Title->setFont(font);
        Title->setAlignment(Qt::AlignCenter);
        Title->setReadOnly(true);

        verticalLayout->addWidget(Title);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 50));
        frame->setMaximumSize(QSize(16777215, 50));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(100, 40));
        lineEdit->setMaximumSize(QSize(100, 100));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:gray;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);

        ReadFromDate = new QDateEdit(frame);
        ReadFromDate->setObjectName("ReadFromDate");
        ReadFromDate->setMinimumSize(QSize(150, 40));
        ReadFromDate->setStyleSheet(QString::fromUtf8("background-color:gray;"));
        ReadFromDate->setCalendarPopup(true);
        ReadFromDate->setDate(QDate(2024, 10, 1));

        horizontalLayout->addWidget(ReadFromDate);

        horizontalSpacer = new QSpacerItem(752, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMinimumSize(QSize(100, 40));
        lineEdit_2->setMaximumSize(QSize(100, 16777215));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:gray;"));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_2->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_2);

        ReadToDate = new QDateEdit(frame);
        ReadToDate->setObjectName("ReadToDate");
        ReadToDate->setMinimumSize(QSize(150, 40));
        ReadToDate->setStyleSheet(QString::fromUtf8("background-color:gray;"));
        ReadToDate->setCalendarPopup(true);
        ReadToDate->setDate(QDate(2024, 10, 30));

        horizontalLayout->addWidget(ReadToDate);


        verticalLayout->addWidget(frame);

        PLTable = new QTreeView(centralwidget);
        PLTable->setObjectName("PLTable");
        PLTable->setAutoExpandDelay(2);
        PLTable->header()->setMinimumSectionSize(500);
        PLTable->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(PLTable);

        PLAccount->setCentralWidget(centralwidget);

        retranslateUi(PLAccount);

        QMetaObject::connectSlotsByName(PLAccount);
    } // setupUi

    void retranslateUi(QMainWindow *PLAccount)
    {
        PLAccount->setWindowTitle(QCoreApplication::translate("PLAccount", "PLAccount", nullptr));
        Motto->setHtml(QCoreApplication::translate("PLAccount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">ACCOUNTING MADE EASY</span></p></body></html>", nullptr));
        LogoButton->setText(QCoreApplication::translate("PLAccount", "PushButton", nullptr));
        Title->setText(QCoreApplication::translate("PLAccount", "PROFIT AND LOSS ACCOUNT FROM _______ TO ___________", nullptr));
        lineEdit->setText(QCoreApplication::translate("PLAccount", "FROM", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("PLAccount", "TO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PLAccount: public Ui_PLAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLACCOUNT_H
