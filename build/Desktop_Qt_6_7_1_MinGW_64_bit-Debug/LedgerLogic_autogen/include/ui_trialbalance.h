/********************************************************************************
** Form generated from reading UI file 'trialbalance.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIALBALANCE_H
#define UI_TRIALBALANCE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrialBalance
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *UpperLogoBar;
    QWidget *LogoStack;
    QTextEdit *Motto;
    QPushButton *LogoButton;
    QLineEdit *Title;
    QDateEdit *ReadDate;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *TrialTable;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *TrialBalance)
    {
        if (TrialBalance->objectName().isEmpty())
            TrialBalance->setObjectName("TrialBalance");
        TrialBalance->resize(1256, 809);
        TrialBalance->setStyleSheet(QString::fromUtf8("Background-color:black;"));
        centralwidget = new QWidget(TrialBalance);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
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
        Title->setMinimumSize(QSize(300, 0));
        Title->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(20);
        Title->setFont(font);
        Title->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;"));
        Title->setAlignment(Qt::AlignCenter);
        Title->setReadOnly(true);

        verticalLayout->addWidget(Title);

        ReadDate = new QDateEdit(centralwidget);
        ReadDate->setObjectName("ReadDate");
        ReadDate->setMinimumSize(QSize(100, 50));
        ReadDate->setStyleSheet(QString::fromUtf8("background-color:gray;\n"
"margin-top:10px;\n"
"margin-bottom:10px;"));
        ReadDate->setCalendarPopup(true);
        ReadDate->setDate(QDate(2024, 10, 30));

        verticalLayout->addWidget(ReadDate, 0, Qt::AlignRight);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setMinimumSize(QSize(0, 0));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1236, 296));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        TrialTable = new QTableWidget(scrollAreaWidgetContents);
        if (TrialTable->columnCount() < 4)
            TrialTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TrialTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TrialTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TrialTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        TrialTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (TrialTable->rowCount() < 1)
            TrialTable->setRowCount(1);
        TrialTable->setObjectName("TrialTable");
        TrialTable->setMinimumSize(QSize(600, 100));
        TrialTable->setMaximumSize(QSize(16777215, 100));
        TrialTable->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
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
        TrialTable->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        TrialTable->setTextElideMode(Qt::ElideMiddle);
        TrialTable->setRowCount(1);
        TrialTable->setColumnCount(4);
        TrialTable->horizontalHeader()->setDefaultSectionSize(400);
        TrialTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(TrialTable);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        TrialBalance->setCentralWidget(centralwidget);

        retranslateUi(TrialBalance);

        QMetaObject::connectSlotsByName(TrialBalance);
    } // setupUi

    void retranslateUi(QMainWindow *TrialBalance)
    {
        TrialBalance->setWindowTitle(QCoreApplication::translate("TrialBalance", "TrialBalance", nullptr));
        Motto->setHtml(QCoreApplication::translate("TrialBalance", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">ACCOUNTING MADE EASY</span></p></body></html>", nullptr));
        LogoButton->setText(QCoreApplication::translate("TrialBalance", "PushButton", nullptr));
        Title->setText(QCoreApplication::translate("TrialBalance", "Trial Balance At __________", nullptr));
        QTableWidgetItem *___qtablewidgetitem = TrialTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TrialBalance", "Account ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TrialTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TrialBalance", "Account Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = TrialTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TrialBalance", "Debit", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = TrialTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TrialBalance", "Credit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrialBalance: public Ui_TrialBalance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIALBALANCE_H
