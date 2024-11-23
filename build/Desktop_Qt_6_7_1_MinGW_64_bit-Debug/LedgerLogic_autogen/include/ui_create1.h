/********************************************************************************
** Form generated from reading UI file 'create1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE1_H
#define UI_CREATE1_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
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

class Ui_CreateInvoice
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *UpperLogoBar;
    QWidget *LogoStack;
    QTextEdit *Motto;
    QPushButton *pushButton;
    QTextEdit *TitleLabel;
    QFrame *DetailFrame;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QTextEdit *CustomerLabel;
    QLineEdit *lineEdit;
    QComboBox *ShowAccounts;
    QLineEdit *ReadCustomerName;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QGridLayout *gridLayout;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_8;
    QDateEdit *ReadDueDate;
    QTextEdit *textEdit_6;
    QDateEdit *ReadIssueDate;
    QLineEdit *ReadInvoiceNo;
    QSpacerItem *verticalSpacer_2;
    QFrame *TableFrame;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *ItemsTable;
    QSpacerItem *verticalSpacer;
    QFrame *NotesFrame;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit_10;
    QTextEdit *ReadNote;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit_12;
    QLineEdit *TotalAmount;
    QPushButton *CancelButton;
    QPushButton *SaveButton;

    void setupUi(QMainWindow *CreateInvoice)
    {
        if (CreateInvoice->objectName().isEmpty())
            CreateInvoice->setObjectName("CreateInvoice");
        CreateInvoice->resize(1543, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Narrow")});
        font.setPointSize(20);
        CreateInvoice->setFont(font);
        CreateInvoice->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:#181314;"));
        centralwidget = new QWidget(CreateInvoice);
        centralwidget->setObjectName("centralwidget");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Narrow")});
        font1.setPointSize(15);
        centralwidget->setFont(font1);
        centralwidget->setMouseTracking(false);
        centralwidget->setTabletTracking(false);
        centralwidget->setFocusPolicy(Qt::StrongFocus);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
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
        pushButton = new QPushButton(LogoStack);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 10, 300, 100));
        pushButton->setMinimumSize(QSize(300, 100));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/AppLogo.png"), QSize(), QIcon::Active, QIcon::On);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(300, 100));
        UpperLogoBar->addWidget(LogoStack);
        pushButton->raise();
        Motto->raise();

        verticalLayout->addWidget(UpperLogoBar);

        TitleLabel = new QTextEdit(centralwidget);
        TitleLabel->setObjectName("TitleLabel");
        TitleLabel->setMinimumSize(QSize(0, 30));
        TitleLabel->setMaximumSize(QSize(16777215, 30));
        TitleLabel->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
"color:black;\n"
"font: 800 11pt \"Rockwell Extra Bold\";"));

        verticalLayout->addWidget(TitleLabel);

        DetailFrame = new QFrame(centralwidget);
        DetailFrame->setObjectName("DetailFrame");
        DetailFrame->setMinimumSize(QSize(0, 150));
        DetailFrame->setMaximumSize(QSize(16777215, 150));
        DetailFrame->setFrameShape(QFrame::StyledPanel);
        DetailFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(DetailFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        frame_2 = new QFrame(DetailFrame);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(350, 100));
        frame_2->setMaximumSize(QSize(100, 16777215));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        CustomerLabel = new QTextEdit(frame_2);
        CustomerLabel->setObjectName("CustomerLabel");
        CustomerLabel->setGeometry(QRect(10, 20, 151, 31));
        CustomerLabel->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 10pt \"Segoe UI\";"));
        CustomerLabel->setReadOnly(true);
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 60, 151, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 10pt \"Segoe UI\";"));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);
        ShowAccounts = new QComboBox(frame_2);
        ShowAccounts->setObjectName("ShowAccounts");
        ShowAccounts->setGeometry(QRect(181, 60, 161, 25));
        ShowAccounts->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        ReadCustomerName = new QLineEdit(frame_2);
        ReadCustomerName->setObjectName("ReadCustomerName");
        ReadCustomerName->setGeometry(QRect(182, 20, 151, 25));
        ReadCustomerName->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 10pt \"Segoe UI\";"));
        ReadCustomerName->setCursorMoveStyle(Qt::VisualMoveStyle);

        horizontalLayout->addWidget(frame_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        frame = new QFrame(DetailFrame);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(350, 100));
        frame->setMaximumSize(QSize(350, 16777215));
        frame->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
"color:white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        textEdit_4 = new QTextEdit(frame);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setMinimumSize(QSize(0, 35));
        textEdit_4->setMaximumSize(QSize(16777215, 35));
        textEdit_4->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 10pt \"Segoe UI\";"));
        textEdit_4->setReadOnly(true);

        gridLayout->addWidget(textEdit_4, 0, 0, 2, 1);

        textEdit_8 = new QTextEdit(frame);
        textEdit_8->setObjectName("textEdit_8");
        textEdit_8->setMinimumSize(QSize(0, 35));
        textEdit_8->setMaximumSize(QSize(16777215, 35));
        textEdit_8->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 10pt \"Segoe UI\";"));
        textEdit_8->setReadOnly(true);

        gridLayout->addWidget(textEdit_8, 5, 0, 1, 1);

        ReadDueDate = new QDateEdit(frame);
        ReadDueDate->setObjectName("ReadDueDate");
        ReadDueDate->setMinimumSize(QSize(0, 35));
        ReadDueDate->setMaximumSize(QSize(16777215, 35));
        ReadDueDate->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        ReadDueDate->setDateTime(QDateTime(QDate(2023, 12, 30), QTime(2, 0, 0)));
        ReadDueDate->setCalendarPopup(true);

        gridLayout->addWidget(ReadDueDate, 5, 1, 1, 1);

        textEdit_6 = new QTextEdit(frame);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setMinimumSize(QSize(0, 35));
        textEdit_6->setMaximumSize(QSize(16777215, 35));
        textEdit_6->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 10pt \"Segoe UI\";"));
        textEdit_6->setReadOnly(true);

        gridLayout->addWidget(textEdit_6, 3, 0, 1, 1);

        ReadIssueDate = new QDateEdit(frame);
        ReadIssueDate->setObjectName("ReadIssueDate");
        ReadIssueDate->setMinimumSize(QSize(0, 35));
        ReadIssueDate->setMaximumSize(QSize(16777215, 35));
        ReadIssueDate->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        ReadIssueDate->setDateTime(QDateTime(QDate(2023, 12, 30), QTime(2, 0, 0)));
        ReadIssueDate->setCalendarPopup(true);

        gridLayout->addWidget(ReadIssueDate, 3, 1, 1, 1);

        ReadInvoiceNo = new QLineEdit(frame);
        ReadInvoiceNo->setObjectName("ReadInvoiceNo");
        ReadInvoiceNo->setMinimumSize(QSize(130, 35));
        ReadInvoiceNo->setMaximumSize(QSize(16777215, 35));
        ReadInvoiceNo->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 10pt \"Segoe UI\";\n"
""));

        gridLayout->addWidget(ReadInvoiceNo, 0, 1, 1, 1);


        horizontalLayout->addWidget(frame);


        verticalLayout->addWidget(DetailFrame);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        TableFrame = new QFrame(centralwidget);
        TableFrame->setObjectName("TableFrame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TableFrame->sizePolicy().hasHeightForWidth());
        TableFrame->setSizePolicy(sizePolicy);
        TableFrame->setMinimumSize(QSize(0, 0));
        TableFrame->setStyleSheet(QString::fromUtf8("    background-color: rgb(194,196,188);  "));
        TableFrame->setFrameShape(QFrame::StyledPanel);
        TableFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(TableFrame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
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
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ItemsTable->sizePolicy().hasHeightForWidth());
        ItemsTable->setSizePolicy(sizePolicy1);
        ItemsTable->setMinimumSize(QSize(0, 100));
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
        ItemsTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        ItemsTable->setRowCount(1);
        ItemsTable->setColumnCount(6);
        ItemsTable->horizontalHeader()->setCascadingSectionResizes(false);
        ItemsTable->horizontalHeader()->setDefaultSectionSize(250);
        ItemsTable->horizontalHeader()->setStretchLastSection(true);
        ItemsTable->verticalHeader()->setDefaultSectionSize(30);

        verticalLayout_3->addWidget(ItemsTable);


        verticalLayout->addWidget(TableFrame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        NotesFrame = new QFrame(centralwidget);
        NotesFrame->setObjectName("NotesFrame");
        NotesFrame->setMinimumSize(QSize(0, 200));
        NotesFrame->setMaximumSize(QSize(16777, 16777215));
        NotesFrame->setFrameShape(QFrame::StyledPanel);
        NotesFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(NotesFrame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame_5 = new QFrame(NotesFrame);
        frame_5->setObjectName("frame_5");
        frame_5->setMinimumSize(QSize(300, 0));
        frame_5->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_5);
        verticalLayout_2->setObjectName("verticalLayout_2");
        textEdit_10 = new QTextEdit(frame_5);
        textEdit_10->setObjectName("textEdit_10");
        textEdit_10->setMinimumSize(QSize(0, 30));
        textEdit_10->setMaximumSize(QSize(16777215, 30));
        textEdit_10->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
""));

        verticalLayout_2->addWidget(textEdit_10);

        ReadNote = new QTextEdit(frame_5);
        ReadNote->setObjectName("ReadNote");
        ReadNote->setMinimumSize(QSize(0, 100));
        ReadNote->setMaximumSize(QSize(16777215, 100));
        ReadNote->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 10pt \"Segoe UI\";"));

        verticalLayout_2->addWidget(ReadNote);


        horizontalLayout_2->addWidget(frame_5, 0, Qt::AlignLeft|Qt::AlignVCenter);

        horizontalSpacer_2 = new QSpacerItem(579, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        frame_3 = new QFrame(NotesFrame);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(300, 100));
        frame_3->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setObjectName("gridLayout_2");
        textEdit_12 = new QTextEdit(frame_3);
        textEdit_12->setObjectName("textEdit_12");
        textEdit_12->setMinimumSize(QSize(100, 35));
        textEdit_12->setMaximumSize(QSize(100, 35));
        textEdit_12->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
""));

        gridLayout_2->addWidget(textEdit_12, 0, 0, 1, 1);

        TotalAmount = new QLineEdit(frame_3);
        TotalAmount->setObjectName("TotalAmount");
        TotalAmount->setMinimumSize(QSize(150, 35));
        TotalAmount->setMaximumSize(QSize(150, 16777215));
        TotalAmount->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 10pt \"Segoe UI\";"));

        gridLayout_2->addWidget(TotalAmount, 0, 1, 1, 1);

        CancelButton = new QPushButton(frame_3);
        CancelButton->setObjectName("CancelButton");
        CancelButton->setMinimumSize(QSize(100, 35));
        CancelButton->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
""));

        gridLayout_2->addWidget(CancelButton, 1, 0, 1, 1);

        SaveButton = new QPushButton(frame_3);
        SaveButton->setObjectName("SaveButton");
        SaveButton->setMinimumSize(QSize(0, 35));
        SaveButton->setMaximumSize(QSize(100, 16777215));
        SaveButton->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
""));

        gridLayout_2->addWidget(SaveButton, 1, 1, 1, 1);


        horizontalLayout_2->addWidget(frame_3, 0, Qt::AlignVCenter);


        verticalLayout->addWidget(NotesFrame);

        CreateInvoice->setCentralWidget(centralwidget);

        retranslateUi(CreateInvoice);

        QMetaObject::connectSlotsByName(CreateInvoice);
    } // setupUi

    void retranslateUi(QMainWindow *CreateInvoice)
    {
        CreateInvoice->setWindowTitle(QCoreApplication::translate("CreateInvoice", "create1", nullptr));
        Motto->setHtml(QCoreApplication::translate("CreateInvoice", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:14pt;\">ACCOUNTING MADE EASY</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("CreateInvoice", "PushButton", nullptr));
        TitleLabel->setHtml(QCoreApplication::translate("CreateInvoice", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rockwell Extra Bold'; font-size:11pt; font-weight:800; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:700;\">Create Invoice</span></p></body></html>", nullptr));
        CustomerLabel->setHtml(QCoreApplication::translate("CreateInvoice", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Customer</p></body></html>", nullptr));
        lineEdit->setText(QCoreApplication::translate("CreateInvoice", "Account Name", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("CreateInvoice", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Invoice Number</p></body></html>", nullptr));
        textEdit_8->setHtml(QCoreApplication::translate("CreateInvoice", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Due Date</p></body></html>", nullptr));
        textEdit_6->setHtml(QCoreApplication::translate("CreateInvoice", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Issue Date</p></body></html>", nullptr));
        ReadInvoiceNo->setPlaceholderText(QCoreApplication::translate("CreateInvoice", "INV000", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ItemsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CreateInvoice", "Product Name ", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ItemsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CreateInvoice", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ItemsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CreateInvoice", "Account Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ItemsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CreateInvoice", "No. of Unit ", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = ItemsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CreateInvoice", "Rate ", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = ItemsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("CreateInvoice", "Amount ", nullptr));
        textEdit_10->setHtml(QCoreApplication::translate("CreateInvoice", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Note to Customer </span></p></body></html>", nullptr));
        textEdit_12->setHtml(QCoreApplication::translate("CreateInvoice", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Total </p></body></html>", nullptr));
        CancelButton->setText(QCoreApplication::translate("CreateInvoice", "Cancel", nullptr));
        SaveButton->setText(QCoreApplication::translate("CreateInvoice", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateInvoice: public Ui_CreateInvoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE1_H
