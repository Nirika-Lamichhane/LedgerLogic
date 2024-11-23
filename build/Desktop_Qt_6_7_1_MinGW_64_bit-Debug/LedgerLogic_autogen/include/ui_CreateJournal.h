/********************************************************************************
** Form generated from reading UI file 'CreateJournal.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEJOURNAL_H
#define UI_CREATEJOURNAL_H

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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateJournal
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
    QLineEdit *lineEdit_2;
    QLineEdit *ReadJournalNo;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_4;
    QDateEdit *ReadDate;
    QFrame *frame_2;
    QLineEdit *lineEdit_6;
    QTextEdit *ReadDescription;
    QLineEdit *lineEdit_12;
    QPushButton *AddRow;
    QTableWidget *JournalTable;
    QSpacerItem *verticalSpacer;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_5;
    QLineEdit *TotalDebit;
    QLineEdit *lineEdit_8;
    QLineEdit *TotalCredit;
    QLineEdit *lineEdit_10;
    QFrame *frame_4;
    QPushButton *Cancel;
    QPushButton *Save;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CreateJournal)
    {
        if (CreateJournal->objectName().isEmpty())
            CreateJournal->setObjectName("CreateJournal");
        CreateJournal->resize(1257, 1079);
        CreateJournal->setStyleSheet(QString::fromUtf8("background-color:rgb(191,201,194);\n"
"border:none;\n"
""));
        centralwidget = new QWidget(CreateJournal);
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
        Motto->setGeometry(QRect(250, 20, 914, 80));
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
        lineEdit->setMinimumSize(QSize(700, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(false);
        font.setKerning(false);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"\n"
"font: 900 10pt \"Segoe UI Black\";\n"
""));
        lineEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(600, 150));
        frame->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMinimumSize(QSize(100, 50));
        lineEdit_2->setMaximumSize(QSize(175, 16777215));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        lineEdit_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit_2);

        ReadJournalNo = new QLineEdit(frame);
        ReadJournalNo->setObjectName("ReadJournalNo");
        ReadJournalNo->setMinimumSize(QSize(150, 50));
        ReadJournalNo->setMaximumSize(QSize(250, 16777215));
        ReadJournalNo->setStyleSheet(QString::fromUtf8("background-color:gray;\n"
"color:black;\n"
"font: 900 9pt \"Segoe UI Black\";"));

        horizontalLayout->addWidget(ReadJournalNo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setMinimumSize(QSize(150, 50));
        lineEdit_4->setMaximumSize(QSize(150, 16777215));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        lineEdit_4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit_4);

        ReadDate = new QDateEdit(frame);
        ReadDate->setObjectName("ReadDate");
        ReadDate->setMinimumSize(QSize(150, 50));
        ReadDate->setMaximumSize(QSize(150, 16777215));
        ReadDate->setStyleSheet(QString::fromUtf8("background-color:gray;\n"
"color:black;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        ReadDate->setWrapping(false);
        ReadDate->setAlignment(Qt::AlignCenter);
        ReadDate->setCalendarPopup(true);

        horizontalLayout->addWidget(ReadDate);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(500, 200));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
"\n"
"\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lineEdit_6 = new QLineEdit(frame_2);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(60, 10, 81, 31));
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        lineEdit_6->setAlignment(Qt::AlignCenter);
        ReadDescription = new QTextEdit(frame_2);
        ReadDescription->setObjectName("ReadDescription");
        ReadDescription->setGeometry(QRect(23, 60, 181, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
        font1.setPointSize(13);
        ReadDescription->setFont(font1);
        ReadDescription->setStyleSheet(QString::fromUtf8("background-color:gray;\n"
"color:black;"));

        verticalLayout->addWidget(frame_2);

        lineEdit_12 = new QLineEdit(centralwidget);
        lineEdit_12->setObjectName("lineEdit_12");
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        lineEdit_12->setFont(font2);
        lineEdit_12->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
""));
        lineEdit_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(lineEdit_12);

        AddRow = new QPushButton(centralwidget);
        AddRow->setObjectName("AddRow");
        AddRow->setMinimumSize(QSize(100, 25));
        AddRow->setStyleSheet(QString::fromUtf8("background-color:gray;\n"
"color:black;"));

        verticalLayout->addWidget(AddRow, 0, Qt::AlignRight);

        JournalTable = new QTableWidget(centralwidget);
        if (JournalTable->columnCount() < 4)
            JournalTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        JournalTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        JournalTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        JournalTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        JournalTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (JournalTable->rowCount() < 2)
            JournalTable->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        JournalTable->setItem(0, 1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        JournalTable->setItem(0, 2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        JournalTable->setItem(1, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        JournalTable->setItem(1, 2, __qtablewidgetitem7);
        JournalTable->setObjectName("JournalTable");
        JournalTable->setMinimumSize(QSize(0, 130));
        JournalTable->setMaximumSize(QSize(16777215, 100));
        JournalTable->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
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
        JournalTable->setRowCount(2);
        JournalTable->horizontalHeader()->setDefaultSectionSize(300);
        JournalTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(JournalTable);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(320, 120));
        frame_3->setMaximumSize(QSize(16777215, 150));
        frame_3->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"\n"
"\n"
"\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName("frame_5");
        frame_5->setMinimumSize(QSize(200, 120));
        frame_5->setStyleSheet(QString::fromUtf8(""));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        TotalDebit = new QLineEdit(frame_5);
        TotalDebit->setObjectName("TotalDebit");
        TotalDebit->setGeometry(QRect(130, 10, 161, 41));
        TotalDebit->setStyleSheet(QString::fromUtf8("background-color:gray;\n"
"color:black;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        lineEdit_8 = new QLineEdit(frame_5);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(10, 10, 113, 41));
        lineEdit_8->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        lineEdit_8->setAlignment(Qt::AlignCenter);
        TotalCredit = new QLineEdit(frame_5);
        TotalCredit->setObjectName("TotalCredit");
        TotalCredit->setGeometry(QRect(130, 60, 161, 41));
        TotalCredit->setStyleSheet(QString::fromUtf8("background-color:gray;\n"
"color:black;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        lineEdit_10 = new QLineEdit(frame_5);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(10, 60, 113, 41));
        lineEdit_10->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        lineEdit_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(frame_5);

        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(300, 70));
        frame_4->setMaximumSize(QSize(300, 100));
        frame_4->setStyleSheet(QString::fromUtf8(""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        Cancel = new QPushButton(frame_4);
        Cancel->setObjectName("Cancel");
        Cancel->setGeometry(QRect(42, 20, 101, 41));
        Cancel->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
"color:black;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        Save = new QPushButton(frame_4);
        Save->setObjectName("Save");
        Save->setGeometry(QRect(160, 20, 101, 41));
        Save->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
"color:black;\n"
"font: 900 9pt \"Segoe UI Black\";"));

        horizontalLayout_2->addWidget(frame_4);


        verticalLayout->addWidget(frame_3);

        CreateJournal->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(CreateJournal);
        statusbar->setObjectName("statusbar");
        CreateJournal->setStatusBar(statusbar);

        retranslateUi(CreateJournal);

        QMetaObject::connectSlotsByName(CreateJournal);
    } // setupUi

    void retranslateUi(QMainWindow *CreateJournal)
    {
        CreateJournal->setWindowTitle(QCoreApplication::translate("CreateJournal", "MainWindow", nullptr));
        Motto->setHtml(QCoreApplication::translate("CreateJournal", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">ACCOUNTING MADE EASY</span></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CreateJournal", "PushButton", nullptr));
        lineEdit->setText(QCoreApplication::translate("CreateJournal", "Create Journal Entry", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("CreateJournal", "General Journal Number", nullptr));
        ReadJournalNo->setPlaceholderText(QCoreApplication::translate("CreateJournal", "GJ000", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("CreateJournal", " Date", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("CreateJournal", "NOTE", nullptr));
        ReadDescription->setHtml(QCoreApplication::translate("CreateJournal", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial Black'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        lineEdit_12->setText(QCoreApplication::translate("CreateJournal", "  Enter Journal Entry", nullptr));
        AddRow->setText(QCoreApplication::translate("CreateJournal", "Add Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem = JournalTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CreateJournal", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = JournalTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CreateJournal", "Debit", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = JournalTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CreateJournal", "Credit", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = JournalTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CreateJournal", "Memo", nullptr));

        const bool __sortingEnabled = JournalTable->isSortingEnabled();
        JournalTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem4 = JournalTable->item(0, 1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CreateJournal", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = JournalTable->item(0, 2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("CreateJournal", "0 ", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = JournalTable->item(1, 1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("CreateJournal", "0 ", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = JournalTable->item(1, 2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("CreateJournal", "0", nullptr));
        JournalTable->setSortingEnabled(__sortingEnabled);

        lineEdit_8->setText(QCoreApplication::translate("CreateJournal", "Total Debit", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("CreateJournal", "Total Credit", nullptr));
        Cancel->setText(QCoreApplication::translate("CreateJournal", "Cancel", nullptr));
        Save->setText(QCoreApplication::translate("CreateJournal", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateJournal: public Ui_CreateJournal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEJOURNAL_H
