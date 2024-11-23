/********************************************************************************
** Form generated from reading UI file 'ReadSupplierPayment.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READSUPPLIERPAYMENT_H
#define UI_READSUPPLIERPAYMENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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

class Ui_ReadSupplierPayment
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *UpperLogoBar;
    QWidget *LogoStack;
    QTextEdit *Motto;
    QPushButton *pushButton;
    QLineEdit *title;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QFrame *frame1;
    QGridLayout *gridLayout_2;
    QLabel *supplier;
    QLabel *BankAccountLabel;
    QLineEdit *SupplierSpace;
    QComboBox *BankAccount;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QLabel *RefernceNumber;
    QLineEdit *RefNumSpace;
    QLabel *Date;
    QDateEdit *dateEdit;
    QTableWidget *BillsTable;
    QFrame *BottomContainer;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *Description;
    QTextEdit *textEdit_3;
    QSpacerItem *horizontalSpacer_3;
    QFrame *ButtonsFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *Cancel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Save;

    void setupUi(QMainWindow *ReadSupplierPayment)
    {
        if (ReadSupplierPayment->objectName().isEmpty())
            ReadSupplierPayment->setObjectName("ReadSupplierPayment");
        ReadSupplierPayment->resize(1081, 696);
        ReadSupplierPayment->setStyleSheet(QString::fromUtf8("border:none;"));
        centralwidget = new QWidget(ReadSupplierPayment);
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

        title = new QLineEdit(centralwidget);
        title->setObjectName("title");
        title->setMinimumSize(QSize(800, 40));
        title->setMaximumSize(QSize(16777215, 40));
        title->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"\n"
"font: 800 11pt \"Rockwell Extra Bold\";\n"
""));
        title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(title);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(900, 200));
        frame_2->setMaximumSize(QSize(16777215, 250));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:black;\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        frame1 = new QFrame(frame_2);
        frame1->setObjectName("frame1");
        frame1->setMinimumSize(QSize(500, 80));
        frame1->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
""));
        frame1->setFrameShape(QFrame::StyledPanel);
        frame1->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame1);
        gridLayout_2->setObjectName("gridLayout_2");
        supplier = new QLabel(frame1);
        supplier->setObjectName("supplier");
        supplier->setMinimumSize(QSize(0, 35));
        supplier->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        supplier->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(supplier, 0, 0, 1, 1);

        BankAccountLabel = new QLabel(frame1);
        BankAccountLabel->setObjectName("BankAccountLabel");
        BankAccountLabel->setMinimumSize(QSize(120, 35));
        BankAccountLabel->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        BankAccountLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(BankAccountLabel, 1, 0, 1, 1);

        SupplierSpace = new QLineEdit(frame1);
        SupplierSpace->setObjectName("SupplierSpace");
        SupplierSpace->setMinimumSize(QSize(0, 35));
        SupplierSpace->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 900 10pt \"Segoe UI Black\";"));

        gridLayout_2->addWidget(SupplierSpace, 0, 1, 1, 1);

        BankAccount = new QComboBox(frame1);
        BankAccount->setObjectName("BankAccount");
        BankAccount->setMinimumSize(QSize(0, 35));
        BankAccount->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 900 10pt \"Segoe UI Black\";"));

        gridLayout_2->addWidget(BankAccount, 1, 1, 1, 1);


        gridLayout->addWidget(frame1, 0, 0, 1, 1);

        frame = new QFrame(frame_2);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(450, 80));
        frame->setMaximumSize(QSize(16777215, 120));
        frame->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName("gridLayout_3");
        RefernceNumber = new QLabel(frame);
        RefernceNumber->setObjectName("RefernceNumber");
        RefernceNumber->setMinimumSize(QSize(130, 35));
        RefernceNumber->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        RefernceNumber->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(RefernceNumber, 0, 0, 1, 1);

        RefNumSpace = new QLineEdit(frame);
        RefNumSpace->setObjectName("RefNumSpace");
        RefNumSpace->setMinimumSize(QSize(0, 35));
        RefNumSpace->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 900 10pt \"Segoe UI Black\";"));

        gridLayout_3->addWidget(RefNumSpace, 0, 1, 1, 1);

        Date = new QLabel(frame);
        Date->setObjectName("Date");
        Date->setMinimumSize(QSize(0, 35));
        Date->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        Date->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(Date, 1, 0, 1, 1);

        dateEdit = new QDateEdit(frame);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setMinimumSize(QSize(0, 35));
        dateEdit->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 900 10pt \"Segoe UI Black\";"));
        dateEdit->setCalendarPopup(true);

        gridLayout_3->addWidget(dateEdit, 1, 1, 1, 1);


        gridLayout->addWidget(frame, 0, 2, 1, 1);


        verticalLayout->addWidget(frame_2);

        BillsTable = new QTableWidget(centralwidget);
        if (BillsTable->columnCount() < 5)
            BillsTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        BillsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        BillsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        BillsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        BillsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        BillsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (BillsTable->rowCount() < 1)
            BillsTable->setRowCount(1);
        BillsTable->setObjectName("BillsTable");
        BillsTable->setMinimumSize(QSize(0, 200));
        BillsTable->setMaximumSize(QSize(16777215, 200));
        BillsTable->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
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
        BillsTable->setRowCount(1);
        BillsTable->setColumnCount(5);
        BillsTable->horizontalHeader()->setDefaultSectionSize(300);
        BillsTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(BillsTable);

        BottomContainer = new QFrame(centralwidget);
        BottomContainer->setObjectName("BottomContainer");
        BottomContainer->setMinimumSize(QSize(0, 120));
        BottomContainer->setStyleSheet(QString::fromUtf8("background-color:black;"));
        BottomContainer->setFrameShape(QFrame::StyledPanel);
        BottomContainer->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(BottomContainer);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame_4 = new QFrame(BottomContainer);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(300, 120));
        frame_4->setMaximumSize(QSize(300, 150));
        frame_4->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        Description = new QLabel(frame_4);
        Description->setObjectName("Description");
        Description->setMinimumSize(QSize(0, 40));
        Description->setMaximumSize(QSize(16777215, 40));
        Description->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));
        Description->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Description);

        textEdit_3 = new QTextEdit(frame_4);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setMinimumSize(QSize(0, 20));
        textEdit_3->setMaximumSize(QSize(300, 80));
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 900 10pt \"Segoe UI Black\";"));

        verticalLayout_2->addWidget(textEdit_3);


        horizontalLayout_2->addWidget(frame_4);

        horizontalSpacer_3 = new QSpacerItem(360, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        ButtonsFrame = new QFrame(BottomContainer);
        ButtonsFrame->setObjectName("ButtonsFrame");
        ButtonsFrame->setMinimumSize(QSize(300, 50));
        ButtonsFrame->setMaximumSize(QSize(400, 120));
        ButtonsFrame->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
""));
        ButtonsFrame->setFrameShape(QFrame::StyledPanel);
        ButtonsFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(ButtonsFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        Cancel = new QPushButton(ButtonsFrame);
        Cancel->setObjectName("Cancel");
        Cancel->setMinimumSize(QSize(150, 40));
        Cancel->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));

        horizontalLayout->addWidget(Cancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        Save = new QPushButton(ButtonsFrame);
        Save->setObjectName("Save");
        Save->setMinimumSize(QSize(150, 40));
        Save->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 900 9pt \"Segoe UI Black\";"));

        horizontalLayout->addWidget(Save);


        horizontalLayout_2->addWidget(ButtonsFrame);


        verticalLayout->addWidget(BottomContainer);

        ReadSupplierPayment->setCentralWidget(centralwidget);

        retranslateUi(ReadSupplierPayment);

        QMetaObject::connectSlotsByName(ReadSupplierPayment);
    } // setupUi

    void retranslateUi(QMainWindow *ReadSupplierPayment)
    {
        ReadSupplierPayment->setWindowTitle(QCoreApplication::translate("ReadSupplierPayment", "MainWindow2", nullptr));
        Motto->setHtml(QCoreApplication::translate("ReadSupplierPayment", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">ACCOUNTING MADE EASY</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("ReadSupplierPayment", "PushButton", nullptr));
        title->setText(QCoreApplication::translate("ReadSupplierPayment", "Read Supplier Payment", nullptr));
        supplier->setText(QCoreApplication::translate("ReadSupplierPayment", "Supplier", nullptr));
        BankAccountLabel->setText(QCoreApplication::translate("ReadSupplierPayment", "Bank Account", nullptr));
        RefernceNumber->setText(QCoreApplication::translate("ReadSupplierPayment", "Reference number", nullptr));
        Date->setText(QCoreApplication::translate("ReadSupplierPayment", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem = BillsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ReadSupplierPayment", "Bill No", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = BillsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ReadSupplierPayment", "Supplier Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = BillsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ReadSupplierPayment", "Due Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = BillsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ReadSupplierPayment", "Due Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = BillsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ReadSupplierPayment", "Bank Account", nullptr));
        Description->setText(QCoreApplication::translate("ReadSupplierPayment", "Description of transaction", nullptr));
        Cancel->setText(QCoreApplication::translate("ReadSupplierPayment", "Cancel", nullptr));
        Save->setText(QCoreApplication::translate("ReadSupplierPayment", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReadSupplierPayment: public Ui_ReadSupplierPayment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READSUPPLIERPAYMENT_H
