/********************************************************************************
** Form generated from reading UI file 'readpayment.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READPAYMENT_H
#define UI_READPAYMENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReadPayment
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *UpperLogoBar;
    QWidget *LogoStack;
    QTextEdit *Motto;
    QPushButton *pushButton;
    QLabel *label;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QFrame *frame2;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_7;
    QTextEdit *textEdit_8;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer;
    QFrame *TableFrame;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *InvoiceTable;
    QFrame *frame1;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_10;
    QTextEdit *textEdit_11;
    QComboBox *ReadBankAccount;
    QFrame *ButtonFrame;
    QPushButton *Cancel;
    QPushButton *Save;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *ReadPayment)
    {
        if (ReadPayment->objectName().isEmpty())
            ReadPayment->setObjectName("ReadPayment");
        ReadPayment->resize(1235, 717);
        ReadPayment->setMinimumSize(QSize(0, 0));
        ReadPayment->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:white;\n"
""));
        centralwidget = new QWidget(ReadPayment);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:#181C14;"));
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

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(400, 49));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("font: 800 10pt \"Rockwell Extra Bold\";\n"
"color:black;\n"
"background-color:white;\n"
"\n"
""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(1000, 200));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame2 = new QFrame(frame_2);
        frame2->setObjectName("frame2");
        frame2->setMinimumSize(QSize(400, 100));
        frame2->setMaximumSize(QSize(16777215, 200));
        frame2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
""));
        frame2->setFrameShape(QFrame::StyledPanel);
        frame2->setFrameShadow(QFrame::Raised);
        textEdit_6 = new QTextEdit(frame2);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setGeometry(QRect(10, 30, 191, 31));
        textEdit_6->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 800 9pt \"Rockwell Extra Bold\";\n"
""));
        textEdit_7 = new QTextEdit(frame2);
        textEdit_7->setObjectName("textEdit_7");
        textEdit_7->setGeometry(QRect(240, 30, 131, 31));
        textEdit_7->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 800 9pt \"Rockwell Extra Bold\";\n"
"\n"
""));
        textEdit_8 = new QTextEdit(frame2);
        textEdit_8->setObjectName("textEdit_8");
        textEdit_8->setGeometry(QRect(10, 80, 181, 31));
        textEdit_8->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 800 9pt \"Rockwell Extra Bold\";\n"
""));
        dateEdit = new QDateEdit(frame2);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(250, 80, 121, 26));
        dateEdit->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 800 9pt \"Rockwell Extra Bold\";"));
        dateEdit->setCalendarPopup(true);

        gridLayout->addWidget(frame2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(272, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        TableFrame = new QFrame(frame_2);
        TableFrame->setObjectName("TableFrame");
        TableFrame->setMinimumSize(QSize(0, 300));
        TableFrame->setStyleSheet(QString::fromUtf8("background-color:white;"));
        TableFrame->setFrameShape(QFrame::StyledPanel);
        TableFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(TableFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        InvoiceTable = new QTableWidget(TableFrame);
        if (InvoiceTable->columnCount() < 4)
            InvoiceTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        InvoiceTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        InvoiceTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        InvoiceTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        InvoiceTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        InvoiceTable->setObjectName("InvoiceTable");
        InvoiceTable->setMinimumSize(QSize(0, 70));
        InvoiceTable->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
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
        InvoiceTable->horizontalHeader()->setDefaultSectionSize(350);
        InvoiceTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(InvoiceTable);


        gridLayout->addWidget(TableFrame, 4, 0, 1, 3);

        frame1 = new QFrame(frame_2);
        frame1->setObjectName("frame1");
        frame1->setMinimumSize(QSize(500, 120));
        frame1->setMaximumSize(QSize(16777215, 200));
        frame1->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
""));
        frame1->setFrameShape(QFrame::StyledPanel);
        frame1->setFrameShadow(QFrame::Raised);
        textEdit_2 = new QTextEdit(frame1);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(20, 20, 191, 31));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 800 9pt \"Rockwell Extra Bold\";\n"
""));
        textEdit_3 = new QTextEdit(frame1);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(240, 20, 201, 31));
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 800 9pt \"Rockwell Extra Bold\";\n"
""));
        textEdit_4 = new QTextEdit(frame1);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(20, 80, 191, 31));
        textEdit_4->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"color:white;\n"
"font: 800 9pt \"Rockwell Extra Bold\";\n"
""));
        textEdit_10 = new QTextEdit(frame1);
        textEdit_10->setObjectName("textEdit_10");
        textEdit_10->setGeometry(QRect(20, 130, 201, 31));
        textEdit_10->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 800 9pt \"Rockwell Extra Bold\";\n"
""));
        textEdit_11 = new QTextEdit(frame1);
        textEdit_11->setObjectName("textEdit_11");
        textEdit_11->setGeometry(QRect(240, 130, 201, 31));
        textEdit_11->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 800 9pt \"Rockwell Extra Bold\";\n"
""));
        ReadBankAccount = new QComboBox(frame1);
        ReadBankAccount->setObjectName("ReadBankAccount");
        ReadBankAccount->setGeometry(QRect(240, 80, 201, 31));
        ReadBankAccount->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 800 9pt \"Rockwell Extra Bold\";"));

        gridLayout->addWidget(frame1, 1, 0, 1, 1);


        verticalLayout->addWidget(frame_2);

        ButtonFrame = new QFrame(centralwidget);
        ButtonFrame->setObjectName("ButtonFrame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ButtonFrame->sizePolicy().hasHeightForWidth());
        ButtonFrame->setSizePolicy(sizePolicy);
        ButtonFrame->setMinimumSize(QSize(500, 100));
        ButtonFrame->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"\n"
""));
        ButtonFrame->setFrameShape(QFrame::StyledPanel);
        ButtonFrame->setFrameShadow(QFrame::Raised);
        Cancel = new QPushButton(ButtonFrame);
        Cancel->setObjectName("Cancel");
        Cancel->setGeometry(QRect(70, 30, 130, 35));
        Cancel->setMinimumSize(QSize(130, 35));
        Cancel->setMaximumSize(QSize(130, 35));
        Cancel->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 800 9pt \"Rockwell Extra Bold\";\n"
""));
        Save = new QPushButton(ButtonFrame);
        Save->setObjectName("Save");
        Save->setGeometry(QRect(270, 30, 130, 35));
        Save->setMinimumSize(QSize(130, 35));
        Save->setMaximumSize(QSize(130, 35));
        Save->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;\n"
"font: 800 9pt \"Rockwell Extra Bold\";\n"
""));

        verticalLayout->addWidget(ButtonFrame, 0, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        ReadPayment->setCentralWidget(centralwidget);

        retranslateUi(ReadPayment);

        QMetaObject::connectSlotsByName(ReadPayment);
    } // setupUi

    void retranslateUi(QMainWindow *ReadPayment)
    {
        ReadPayment->setWindowTitle(QCoreApplication::translate("ReadPayment", "read1", nullptr));
        Motto->setHtml(QCoreApplication::translate("ReadPayment", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">ACCOUNTING MADE EASY</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("ReadPayment", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("ReadPayment", "RECORD INVOICE PAYMENT", nullptr));
        textEdit_6->setHtml(QCoreApplication::translate("ReadPayment", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rockwell Extra Bold'; font-size:9pt; font-weight:800; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-weight:700;\">Reference Number</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Segoe UI'; font-weight:700;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0p"
                        "x; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Segoe UI'; font-weight:700;\"><br /></p></body></html>", nullptr));
        textEdit_8->setHtml(QCoreApplication::translate("ReadPayment", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rockwell Extra Bold'; font-size:9pt; font-weight:800; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-weight:700;\">Date</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = InvoiceTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ReadPayment", "Invoice No", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = InvoiceTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ReadPayment", "Customer Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = InvoiceTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ReadPayment", "Due Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = InvoiceTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ReadPayment", "Due Amount", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("ReadPayment", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rockwell Extra Bold'; font-size:9pt; font-weight:800; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-weight:700;\">Customer</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Segoe UI'; font-weight:700;\"><br /></p></body></html>", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("ReadPayment", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rockwell Extra Bold'; font-size:9pt; font-weight:800; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-weight:700;\">Bank Account</span></p></body></html>", nullptr));
        textEdit_10->setHtml(QCoreApplication::translate("ReadPayment", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rockwell Extra Bold'; font-size:9pt; font-weight:800; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-weight:700;\">Description of transaction</span></p></body></html>", nullptr));
        Cancel->setText(QCoreApplication::translate("ReadPayment", "Cancel", nullptr));
        Save->setText(QCoreApplication::translate("ReadPayment", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReadPayment: public Ui_ReadPayment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READPAYMENT_H
