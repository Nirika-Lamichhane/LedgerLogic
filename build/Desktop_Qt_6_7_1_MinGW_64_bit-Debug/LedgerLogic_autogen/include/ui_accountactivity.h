/********************************************************************************
** Form generated from reading UI file 'accountactivity.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTACTIVITY_H
#define UI_ACCOUNTACTIVITY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActivitySummary
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *UpperLogoBar;
    QWidget *LogoStack_2;
    QTextEdit *Motto_2;
    QPushButton *MainWindow;
    QLineEdit *lineEdit;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QFrame *frame;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QDateEdit *ReadFromDate;
    QDateEdit *ReadToDate;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_2;
    QLineEdit *lineEdit_7;
    QLineEdit *ReadOpeningBalance;
    QLineEdit *lineEdit_8;
    QLineEdit *ReadClosingBalance;
    QPushButton *GoBack;
    QLineEdit *LabelAccount;
    QTableWidget *ActivityTable;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *ActivitySummary)
    {
        if (ActivitySummary->objectName().isEmpty())
            ActivitySummary->setObjectName("ActivitySummary");
        ActivitySummary->resize(1196, 664);
        ActivitySummary->setStyleSheet(QString::fromUtf8("background-color:black;\n"
""));
        centralwidget = new QWidget(ActivitySummary);
        centralwidget->setObjectName("centralwidget");
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
        Motto_2->setGeometry(QRect(260, 20, 914, 80));
        Motto_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        Motto_2->setStyleSheet(QString::fromUtf8("margin-bottom:3px;\n"
"color:white;"));
        Motto_2->setReadOnly(true);
        MainWindow = new QPushButton(LogoStack_2);
        MainWindow->setObjectName("MainWindow");
        MainWindow->setGeometry(QRect(0, 10, 300, 100));
        MainWindow->setMinimumSize(QSize(300, 100));
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/AppLogo.png"), QSize(), QIcon::Active, QIcon::On);
        MainWindow->setIcon(icon);
        MainWindow->setIconSize(QSize(300, 100));
        UpperLogoBar->addWidget(LogoStack_2);
        MainWindow->raise();
        Motto_2->raise();

        verticalLayout->addWidget(UpperLogoBar);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(700, 50));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"\n"
"font: 900 10pt \"Segoe UI Black\";\n"
""));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);

        verticalLayout->addWidget(lineEdit);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(1000, 200));
        frame_3->setStyleSheet(QString::fromUtf8("background-color:black;\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(frame_3);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(300, 180));
        frame->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(60, 10, 113, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_2->setReadOnly(true);
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(20, 60, 91, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_3->setReadOnly(true);
        lineEdit_5 = new QLineEdit(frame);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(20, 110, 91, 31));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        lineEdit_5->setAlignment(Qt::AlignCenter);
        lineEdit_5->setReadOnly(true);
        ReadFromDate = new QDateEdit(frame);
        ReadFromDate->setObjectName("ReadFromDate");
        ReadFromDate->setGeometry(QRect(140, 60, 110, 31));
        ReadFromDate->setStyleSheet(QString::fromUtf8("background-color:gray;\n"
"color:black;"));
        ReadToDate = new QDateEdit(frame);
        ReadToDate->setObjectName("ReadToDate");
        ReadToDate->setGeometry(QRect(140, 110, 110, 31));
        ReadToDate->setStyleSheet(QString::fromUtf8("background-color:gray;\n"
"color:black;"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 150, 80, 31));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:10;\n"
"background-color:gray;"));

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(433, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(400, 150));
        frame_2->setSizeIncrement(QSize(400, 150));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lineEdit_7 = new QLineEdit(frame_2);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(10, 20, 181, 41));
        lineEdit_7->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        lineEdit_7->setAlignment(Qt::AlignCenter);
        lineEdit_7->setReadOnly(true);
        ReadOpeningBalance = new QLineEdit(frame_2);
        ReadOpeningBalance->setObjectName("ReadOpeningBalance");
        ReadOpeningBalance->setGeometry(QRect(230, 20, 161, 41));
        ReadOpeningBalance->setStyleSheet(QString::fromUtf8("background-color:gray;\n"
"color:black;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        lineEdit_8 = new QLineEdit(frame_2);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(10, 80, 181, 41));
        lineEdit_8->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        lineEdit_8->setAlignment(Qt::AlignCenter);
        lineEdit_8->setReadOnly(true);
        ReadClosingBalance = new QLineEdit(frame_2);
        ReadClosingBalance->setObjectName("ReadClosingBalance");
        ReadClosingBalance->setGeometry(QRect(230, 80, 161, 41));
        ReadClosingBalance->setStyleSheet(QString::fromUtf8("background-color:gray;\n"
"color:black;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        GoBack = new QPushButton(frame_2);
        GoBack->setObjectName("GoBack");
        GoBack->setGeometry(QRect(170, 150, 80, 31));
        GoBack->setStyleSheet(QString::fromUtf8("border-radius:10;\n"
"background-color:gray;"));

        gridLayout->addWidget(frame_2, 0, 2, 1, 1);


        verticalLayout->addWidget(frame_3);

        LabelAccount = new QLineEdit(centralwidget);
        LabelAccount->setObjectName("LabelAccount");
        LabelAccount->setMinimumSize(QSize(500, 40));
        LabelAccount->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        LabelAccount->setReadOnly(true);

        verticalLayout->addWidget(LabelAccount, 0, Qt::AlignHCenter);

        ActivityTable = new QTableWidget(centralwidget);
        if (ActivityTable->columnCount() < 7)
            ActivityTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ActivityTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ActivityTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ActivityTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ActivityTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ActivityTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        ActivityTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        ActivityTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        ActivityTable->setObjectName("ActivityTable");
        ActivityTable->setMinimumSize(QSize(1100, 200));
        ActivityTable->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    background-color: rgb(194,196,188);     /* Background color of the table */\n"
"    gridline-color: #8F8F8F;        /* Gridline color */\n"
"    border: 2px solid #A0A0A0;      /* Border around the table */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgb(91,97,97); \n"
"color:white;     /* Header background color */\n"
"    padding: 8px;                   /* Header padding */\n"
"    font-weight: bold;              /* Header font */\n"
"    border: 2px solid #A0A0A0;      /* Border around headers */\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    padding: 5px;                   /* Padding for cells */\n"
"    background-color: rgb(209,212,203);      /* Default background color for cells */\n"
"}\n"
"\n"
"QTableWidget::item:alternate {\n"
"    background-color: rgb(233,245,201);      /* Alternating row color */\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #A0A0FF;      /* Background color when a cell is selected */\n"
"    color: white;           "
                        "        /* Text color when a cell is selected */\n"
"}\n"
"\n"
"QTableWidget QScrollBar:vertical {\n"
"    background: #F5F5F5;            /* Vertical scrollbar background */\n"
"    width: 15px;                    /* Scrollbar width */\n"
"}\n"
"\n"
"QTableWidget QScrollBar::handle:vertical {\n"
"    background: #B0B0B0;            /* Vertical scrollbar handle color */\n"
"    border-radius: 4px;             /* Rounded scrollbar handle */\n"
"}\n"
""));
        ActivityTable->setRowCount(0);
        ActivityTable->horizontalHeader()->setDefaultSectionSize(220);
        ActivityTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(ActivityTable);

        ActivitySummary->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ActivitySummary);
        statusbar->setObjectName("statusbar");
        ActivitySummary->setStatusBar(statusbar);
        menuBar = new QMenuBar(ActivitySummary);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1196, 22));
        ActivitySummary->setMenuBar(menuBar);

        retranslateUi(ActivitySummary);

        QMetaObject::connectSlotsByName(ActivitySummary);
    } // setupUi

    void retranslateUi(QMainWindow *ActivitySummary)
    {
        ActivitySummary->setWindowTitle(QCoreApplication::translate("ActivitySummary", "MainWindow", nullptr));
        Motto_2->setHtml(QCoreApplication::translate("ActivitySummary", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">ACCOUNTING MADE EASY</span></p></body></html>", nullptr));
        MainWindow->setText(QCoreApplication::translate("ActivitySummary", "PushButton", nullptr));
        lineEdit->setText(QCoreApplication::translate("ActivitySummary", "Account Activity Details", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("ActivitySummary", "Time Period", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("ActivitySummary", "From", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("ActivitySummary", "To", nullptr));
        pushButton->setText(QCoreApplication::translate("ActivitySummary", "Search", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("ActivitySummary", "Beginning Balance", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("ActivitySummary", "Ending Balance", nullptr));
        GoBack->setText(QCoreApplication::translate("ActivitySummary", "Go BACK", nullptr));
        LabelAccount->setText(QCoreApplication::translate("ActivitySummary", "Here is the Activity for selected account", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ActivityTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ActivitySummary", "Transaction Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ActivityTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ActivitySummary", "Journal Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ActivityTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ActivitySummary", "BY", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ActivityTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ActivitySummary", "Beginning Balance", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = ActivityTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ActivitySummary", "Debit", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = ActivityTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ActivitySummary", "Credit", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = ActivityTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ActivitySummary", "Ending Balance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ActivitySummary: public Ui_ActivitySummary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTACTIVITY_H
