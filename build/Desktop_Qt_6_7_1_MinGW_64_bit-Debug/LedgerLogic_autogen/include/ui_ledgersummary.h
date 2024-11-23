/********************************************************************************
** Form generated from reading UI file 'ledgersummary.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEDGERSUMMARY_H
#define UI_LEDGERSUMMARY_H

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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LedgerSummary
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *UpperLogoBar;
    QWidget *LogoStack;
    QTextEdit *Motto;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QDateEdit *ReadFromDate;
    QFrame *frame_3;
    QLineEdit *lineEdit_4;
    QDateEdit *ReadToDate;
    QPushButton *pushButton;
    QTableWidget *LedgerTable;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LedgerSummary)
    {
        if (LedgerSummary->objectName().isEmpty())
            LedgerSummary->setObjectName("LedgerSummary");
        LedgerSummary->resize(1182, 539);
        LedgerSummary->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border:none;"));
        centralwidget = new QWidget(LedgerSummary);
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
        LogoStack = new QWidget();
        LogoStack->setObjectName("LogoStack");
        LogoStack->setMinimumSize(QSize(0, 100));
        LogoStack->setMaximumSize(QSize(16777215, 100));
        Motto = new QTextEdit(LogoStack);
        Motto->setObjectName("Motto");
        Motto->setGeometry(QRect(250, 10, 914, 80));
        Motto->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        Motto->setStyleSheet(QString::fromUtf8("margin-bottom:3px;\n"
"color:white;"));
        Motto->setReadOnly(true);
        pushButton_3 = new QPushButton(LogoStack);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 10, 300, 100));
        pushButton_3->setMinimumSize(QSize(300, 100));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/AppLogo.png"), QSize(), QIcon::Active, QIcon::On);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(300, 100));
        UpperLogoBar->addWidget(LogoStack);
        pushButton_3->raise();
        Motto->raise();

        verticalLayout->addWidget(UpperLogoBar);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(600, 50));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
"color:black;\n"
"\n"
"font: 900 10pt \"Segoe UI Black\";\n"
""));
        lineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(300, 150));
        frame->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"\n"
"\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(250, 0));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lineEdit_3 = new QLineEdit(frame_2);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(0, 70, 113, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(60, 10, 113, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        ReadFromDate = new QDateEdit(frame_2);
        ReadFromDate->setObjectName("ReadFromDate");
        ReadFromDate->setGeometry(QRect(120, 70, 110, 31));
        ReadFromDate->setStyleSheet(QString::fromUtf8("background-color:grey;"));
        ReadFromDate->setCalendarPopup(true);

        horizontalLayout->addWidget(frame_2, 0, Qt::AlignLeft);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(250, 0));
        frame_3->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        lineEdit_4 = new QLineEdit(frame_3);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(0, 55, 113, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        lineEdit_4->setAlignment(Qt::AlignCenter);
        ReadToDate = new QDateEdit(frame_3);
        ReadToDate->setObjectName("ReadToDate");
        ReadToDate->setGeometry(QRect(120, 55, 110, 31));
        ReadToDate->setStyleSheet(QString::fromUtf8("background-color:grey;"));
        ReadToDate->setCalendarPopup(true);
        pushButton = new QPushButton(frame_3);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(129, 100, 101, 25));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"border-radius:10px;"));

        horizontalLayout->addWidget(frame_3, 0, Qt::AlignRight);


        verticalLayout->addWidget(frame);

        LedgerTable = new QTableWidget(centralwidget);
        if (LedgerTable->columnCount() < 6)
            LedgerTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        LedgerTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        LedgerTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QFont font;
        font.setPointSize(9);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        LedgerTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        LedgerTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        LedgerTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        LedgerTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        LedgerTable->setObjectName("LedgerTable");
        LedgerTable->setMinimumSize(QSize(1000, 200));
        LedgerTable->setSizeIncrement(QSize(90, 0));
        LedgerTable->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
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
        LedgerTable->setRowCount(0);
        LedgerTable->horizontalHeader()->setDefaultSectionSize(200);
        LedgerTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(LedgerTable);

        LedgerSummary->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(LedgerSummary);
        statusbar->setObjectName("statusbar");
        LedgerSummary->setStatusBar(statusbar);

        retranslateUi(LedgerSummary);

        QMetaObject::connectSlotsByName(LedgerSummary);
    } // setupUi

    void retranslateUi(QMainWindow *LedgerSummary)
    {
        LedgerSummary->setWindowTitle(QCoreApplication::translate("LedgerSummary", "MainWindow", nullptr));
        Motto->setHtml(QCoreApplication::translate("LedgerSummary", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:14pt;\">ACCOUNTING MADE EASY</span></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("LedgerSummary", "PushButton", nullptr));
        lineEdit->setText(QCoreApplication::translate("LedgerSummary", "Ledger Summary", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("LedgerSummary", "From", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("LedgerSummary", " Time Period", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("LedgerSummary", "To", nullptr));
        ReadToDate->setDisplayFormat(QCoreApplication::translate("LedgerSummary", "M/d/yy", nullptr));
        pushButton->setText(QCoreApplication::translate("LedgerSummary", "Search", nullptr));
        QTableWidgetItem *___qtablewidgetitem = LedgerTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("LedgerSummary", "Account Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = LedgerTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("LedgerSummary", "Account Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = LedgerTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("LedgerSummary", "Beginning Balance", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = LedgerTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("LedgerSummary", "Debit Total", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = LedgerTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("LedgerSummary", "Credit Total", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = LedgerTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("LedgerSummary", "Ending Balance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LedgerSummary: public Ui_LedgerSummary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEDGERSUMMARY_H
