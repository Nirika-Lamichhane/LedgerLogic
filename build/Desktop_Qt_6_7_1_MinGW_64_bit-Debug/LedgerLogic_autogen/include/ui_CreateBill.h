/********************************************************************************
** Form generated from reading UI file 'CreateBill.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEBILL_H
#define UI_CREATEBILL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateBill
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *UpperLogoBar;
    QWidget *LogoStack_2;
    QTextEdit *Motto_2;
    QPushButton *pushButton_2;
    QTextEdit *Createbill;
    QFrame *TopFrame;
    QGridLayout *gridLayout;
    QFrame *frame1;
    QGridLayout *gridLayout_3;
    QTextEdit *textEdit_2;
    QLineEdit *ReadSupplierName;
    QTextEdit *textEdit_4;
    QComboBox *ShowAccounts;
    QFrame *frame2;
    QGridLayout *gridLayout_4;
    QTextEdit *Billbutton;
    QTextEdit *IssueDateButton;
    QDateEdit *ReadIssueDate;
    QTextEdit *DueDateButton;
    QDateEdit *ReadDueDate;
    QLineEdit *ReadBillNumber;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QFrame *TableFrame;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *ItemsTable;
    QSpacerItem *verticalSpacer;
    QFrame *frame_4;
    QGridLayout *gridLayout_2;
    QFrame *NoteFrame;
    QTextEdit *noteSpace;
    QTextEdit *NotetoSupplier;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_3;
    QFrame *frame;
    QTextEdit *TotalButton;
    QLineEdit *Total;
    QFrame *frame_2;
    QPushButton *Cancel;
    QPushButton *Save;

    void setupUi(QMainWindow *CreateBill)
    {
        if (CreateBill->objectName().isEmpty())
            CreateBill->setObjectName("CreateBill");
        CreateBill->resize(1517, 989);
        CreateBill->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"QTextEdit{\n"
"	background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";\n"
"}"));
        centralwidget = new QWidget(CreateBill);
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
        Motto_2->setGeometry(QRect(250, 20, 914, 80));
        Motto_2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        Motto_2->setStyleSheet(QString::fromUtf8("margin-bottom:3px;\n"
"color:white;"));
        Motto_2->setReadOnly(true);
        pushButton_2 = new QPushButton(LogoStack_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 10, 300, 100));
        pushButton_2->setMinimumSize(QSize(300, 100));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/AppLogo.png"), QSize(), QIcon::Active, QIcon::On);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(300, 100));
        UpperLogoBar->addWidget(LogoStack_2);
        pushButton_2->raise();
        Motto_2->raise();

        verticalLayout->addWidget(UpperLogoBar);

        Createbill = new QTextEdit(centralwidget);
        Createbill->setObjectName("Createbill");
        Createbill->setMinimumSize(QSize(50, 20));
        Createbill->setMaximumSize(QSize(4543543, 30));
        Createbill->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"font: 800 11pt \"Rockwell Extra Bold\";\n"
""));
        Createbill->setTabStopDistance(0.000000000000000);

        verticalLayout->addWidget(Createbill);

        TopFrame = new QFrame(centralwidget);
        TopFrame->setObjectName("TopFrame");
        TopFrame->setMinimumSize(QSize(900, 150));
        TopFrame->setMaximumSize(QSize(16777215, 200));
        TopFrame->setFrameShape(QFrame::StyledPanel);
        TopFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(TopFrame);
        gridLayout->setObjectName("gridLayout");
        frame1 = new QFrame(TopFrame);
        frame1->setObjectName("frame1");
        frame1->setMinimumSize(QSize(300, 50));
        frame1->setMaximumSize(QSize(400, 100));
        frame1->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
"\n"
"\n"
""));
        frame1->setFrameShape(QFrame::StyledPanel);
        frame1->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame1);
        gridLayout_3->setObjectName("gridLayout_3");
        textEdit_2 = new QTextEdit(frame1);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setMinimumSize(QSize(120, 35));
        textEdit_2->setMaximumSize(QSize(120, 35));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));

        gridLayout_3->addWidget(textEdit_2, 0, 0, 1, 1);

        ReadSupplierName = new QLineEdit(frame1);
        ReadSupplierName->setObjectName("ReadSupplierName");
        ReadSupplierName->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 10pt \"Segoe UI\";"));
        ReadSupplierName->setCursorMoveStyle(Qt::VisualMoveStyle);

        gridLayout_3->addWidget(ReadSupplierName, 0, 1, 1, 1);

        textEdit_4 = new QTextEdit(frame1);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setMinimumSize(QSize(120, 35));
        textEdit_4->setMaximumSize(QSize(120, 16777215));
        textEdit_4->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));

        gridLayout_3->addWidget(textEdit_4, 1, 0, 1, 1);

        ShowAccounts = new QComboBox(frame1);
        ShowAccounts->setObjectName("ShowAccounts");
        ShowAccounts->setMinimumSize(QSize(0, 35));
        ShowAccounts->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));

        gridLayout_3->addWidget(ShowAccounts, 1, 1, 1, 1);


        gridLayout->addWidget(frame1, 0, 0, 1, 1);

        frame2 = new QFrame(TopFrame);
        frame2->setObjectName("frame2");
        frame2->setMinimumSize(QSize(300, 130));
        frame2->setMaximumSize(QSize(400, 140));
        frame2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
"\n"
"\n"
""));
        frame2->setFrameShape(QFrame::StyledPanel);
        frame2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame2);
        gridLayout_4->setObjectName("gridLayout_4");
        Billbutton = new QTextEdit(frame2);
        Billbutton->setObjectName("Billbutton");
        Billbutton->setMinimumSize(QSize(120, 35));
        Billbutton->setMaximumSize(QSize(150, 16777215));
        Billbutton->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));

        gridLayout_4->addWidget(Billbutton, 0, 0, 1, 1);

        IssueDateButton = new QTextEdit(frame2);
        IssueDateButton->setObjectName("IssueDateButton");
        IssueDateButton->setMinimumSize(QSize(0, 35));
        IssueDateButton->setMaximumSize(QSize(150, 16777215));
        IssueDateButton->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));

        gridLayout_4->addWidget(IssueDateButton, 1, 0, 1, 1);

        ReadIssueDate = new QDateEdit(frame2);
        ReadIssueDate->setObjectName("ReadIssueDate");
        ReadIssueDate->setMinimumSize(QSize(0, 35));
        ReadIssueDate->setMaximumSize(QSize(16777215, 35));
        ReadIssueDate->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        ReadIssueDate->setDateTime(QDateTime(QDate(2023, 12, 30), QTime(2, 0, 0)));
        ReadIssueDate->setCalendarPopup(true);

        gridLayout_4->addWidget(ReadIssueDate, 1, 1, 1, 1);

        DueDateButton = new QTextEdit(frame2);
        DueDateButton->setObjectName("DueDateButton");
        DueDateButton->setMinimumSize(QSize(0, 35));
        DueDateButton->setMaximumSize(QSize(150, 16777215));
        DueDateButton->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));

        gridLayout_4->addWidget(DueDateButton, 2, 0, 1, 1);

        ReadDueDate = new QDateEdit(frame2);
        ReadDueDate->setObjectName("ReadDueDate");
        ReadDueDate->setMinimumSize(QSize(0, 35));
        ReadDueDate->setMaximumSize(QSize(16777215, 35));
        ReadDueDate->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        ReadDueDate->setDateTime(QDateTime(QDate(2023, 12, 30), QTime(2, 0, 0)));
        ReadDueDate->setCalendarPopup(true);

        gridLayout_4->addWidget(ReadDueDate, 2, 1, 1, 1);

        ReadBillNumber = new QLineEdit(frame2);
        ReadBillNumber->setObjectName("ReadBillNumber");
        ReadBillNumber->setMinimumSize(QSize(0, 35));
        ReadBillNumber->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));

        gridLayout_4->addWidget(ReadBillNumber, 0, 1, 1, 1);


        gridLayout->addWidget(frame2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(209, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        verticalLayout->addWidget(TopFrame);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        TableFrame = new QFrame(centralwidget);
        TableFrame->setObjectName("TableFrame");
        TableFrame->setStyleSheet(QString::fromUtf8("    background-color: rgb(194,196,188);  "));
        TableFrame->setFrameShape(QFrame::StyledPanel);
        TableFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(TableFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        ItemsTable = new QTableWidget(TableFrame);
        if (ItemsTable->columnCount() < 6)
            ItemsTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ItemsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ItemsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ItemsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ItemsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ItemsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        ItemsTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (ItemsTable->rowCount() < 1)
            ItemsTable->setRowCount(1);
        ItemsTable->setObjectName("ItemsTable");
        ItemsTable->setMinimumSize(QSize(600, 100));
        ItemsTable->setMaximumSize(QSize(16777215, 100));
        ItemsTable->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
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
        ItemsTable->setTextElideMode(Qt::ElideMiddle);
        ItemsTable->setRowCount(1);
        ItemsTable->setColumnCount(6);
        ItemsTable->horizontalHeader()->setDefaultSectionSize(250);
        ItemsTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(ItemsTable);


        verticalLayout->addWidget(TableFrame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(900, 300));
        frame_4->setMaximumSize(QSize(16777215, 300));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_4);
        gridLayout_2->setObjectName("gridLayout_2");
        NoteFrame = new QFrame(frame_4);
        NoteFrame->setObjectName("NoteFrame");
        NoteFrame->setMinimumSize(QSize(300, 50));
        NoteFrame->setMaximumSize(QSize(16777215, 200));
        NoteFrame->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
"\n"
"\n"
""));
        NoteFrame->setFrameShape(QFrame::StyledPanel);
        NoteFrame->setFrameShadow(QFrame::Raised);
        noteSpace = new QTextEdit(NoteFrame);
        noteSpace->setObjectName("noteSpace");
        noteSpace->setGeometry(QRect(10, 50, 271, 141));
        noteSpace->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        NotetoSupplier = new QTextEdit(NoteFrame);
        NotetoSupplier->setObjectName("NotetoSupplier");
        NotetoSupplier->setGeometry(QRect(60, 10, 171, 31));
        NotetoSupplier->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));

        gridLayout_2->addWidget(NoteFrame, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(209, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        frame_3 = new QFrame(frame_4);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(400, 200));
        frame_3->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
"\n"
"\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_3);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 20, 291, 61));
        frame->setMinimumSize(QSize(50, 50));
        frame->setStyleSheet(QString::fromUtf8("background-color:rgb(208,209,214);\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        TotalButton = new QTextEdit(frame);
        TotalButton->setObjectName("TotalButton");
        TotalButton->setGeometry(QRect(20, 10, 104, 35));
        TotalButton->setMinimumSize(QSize(0, 35));
        TotalButton->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        Total = new QLineEdit(frame);
        Total->setObjectName("Total");
        Total->setGeometry(QRect(160, 10, 113, 35));
        Total->setMinimumSize(QSize(0, 35));
        Total->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(30, 100, 291, 91));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:rgb(208,209,214);\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        Cancel = new QPushButton(frame_2);
        Cancel->setObjectName("Cancel");
        Cancel->setGeometry(QRect(20, 30, 100, 35));
        Cancel->setMinimumSize(QSize(100, 35));
        Cancel->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        Save = new QPushButton(frame_2);
        Save->setObjectName("Save");
        Save->setGeometry(QRect(170, 30, 100, 35));
        Save->setMinimumSize(QSize(100, 35));
        Save->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));

        gridLayout_2->addWidget(frame_3, 0, 2, 1, 1);


        verticalLayout->addWidget(frame_4);

        CreateBill->setCentralWidget(centralwidget);

        retranslateUi(CreateBill);

        QMetaObject::connectSlotsByName(CreateBill);
    } // setupUi

    void retranslateUi(QMainWindow *CreateBill)
    {
        CreateBill->setWindowTitle(QCoreApplication::translate("CreateBill", "bill1", nullptr));
        Motto_2->setHtml(QCoreApplication::translate("CreateBill", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">ACCOUNTING MADE EASY</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CreateBill", "PushButton", nullptr));
        Createbill->setHtml(QCoreApplication::translate("CreateBill", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rockwell Extra Bold'; font-size:11pt; font-weight:800; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-weight:700;\">Create bill</span></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("CreateBill", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI Black'; font-size:9pt; font-weight:900; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-weight:700;\">Supplier</span></p></body></html>", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("CreateBill", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI Black'; font-size:9pt; font-weight:900; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-weight:400;\">Account Name</span></p></body></html>", nullptr));
        Billbutton->setHtml(QCoreApplication::translate("CreateBill", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI Black'; font-size:9pt; font-weight:900; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-weight:700;\">Bill Number</span></p></body></html>", nullptr));
        IssueDateButton->setHtml(QCoreApplication::translate("CreateBill", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI Black'; font-size:9pt; font-weight:900; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-weight:400;\">Issue Date</span></p></body></html>", nullptr));
        DueDateButton->setHtml(QCoreApplication::translate("CreateBill", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI Black'; font-size:9pt; font-weight:900; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-weight:400;\">Due Date</span></p></body></html>", nullptr));
        ReadBillNumber->setPlaceholderText(QCoreApplication::translate("CreateBill", "BIL000", "BIL000"));
        QTableWidgetItem *___qtablewidgetitem = ItemsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CreateBill", "Product Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ItemsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CreateBill", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ItemsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CreateBill", "Account Name ", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ItemsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CreateBill", "No. Of Units", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = ItemsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CreateBill", "Rate", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = ItemsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("CreateBill", "Amount", nullptr));
        NotetoSupplier->setHtml(QCoreApplication::translate("CreateBill", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI Black'; font-size:9pt; font-weight:900; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-weight:400;\">Note To Supplier</span></p></body></html>", nullptr));
        TotalButton->setHtml(QCoreApplication::translate("CreateBill", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI Black'; font-size:9pt; font-weight:900; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-weight:400;\">Total</span></p></body></html>", nullptr));
        Cancel->setText(QCoreApplication::translate("CreateBill", "Cancel", nullptr));
        Save->setText(QCoreApplication::translate("CreateBill", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateBill: public Ui_CreateBill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEBILL_H
