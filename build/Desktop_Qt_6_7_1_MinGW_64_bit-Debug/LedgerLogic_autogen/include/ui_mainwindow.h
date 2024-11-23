/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QFrame *Container;
    QVBoxLayout *verticalLayout;
    QFrame *UpperLogoBar;
    QLabel *AppLogo;
    QTextEdit *Motto;
    QFrame *Window;
    QHBoxLayout *horizontalLayout_3;
    QWidget *Navbar;
    QVBoxLayout *verticalLayout_4;
    QFrame *BillOptions;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Purchase;
    QFrame *BillOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QPushButton *RecordBillPayment;
    QPushButton *CreateBill;
    QFrame *SalesOptions;
    QHBoxLayout *horizontalLayout;
    QPushButton *Sales;
    QFrame *InvoiceOptionsFrame;
    QVBoxLayout *verticalLayout_2;
    QPushButton *CreateInvoice;
    QPushButton *RecordPayment;
    QFrame *ReportingOptions;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Reporting;
    QFrame *ReportingOptionsFrame;
    QVBoxLayout *verticalLayout_5;
    QPushButton *TrialBalance;
    QPushButton *PLReport;
    QPushButton *BalanceSheet;
    QPushButton *Accounting;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *Border;
    QScrollArea *Background;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QTextEdit *WelcomeMessage;
    QPushButton *NavButton;
    QFrame *frame_3;
    QGridLayout *gridLayout_5;
    QLineEdit *ContextOfGraph;
    QFrame *frame;
    QGridLayout *gridLayout_6;
    QHBoxLayout *SecondGraph;
    QHBoxLayout *FirstGraph;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1579, 690);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(" background-color:black;\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        Container = new QFrame(centralwidget);
        Container->setObjectName("Container");
        Container->setMinimumSize(QSize(0, 100));
        Container->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(191, 226, 228);;\n"
"	color:black;\n"
"	border-radius:7px;\n"
"}"));
        Container->setFrameShape(QFrame::StyledPanel);
        Container->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(Container);
        verticalLayout->setObjectName("verticalLayout");
        UpperLogoBar = new QFrame(Container);
        UpperLogoBar->setObjectName("UpperLogoBar");
        UpperLogoBar->setMinimumSize(QSize(0, 100));
        UpperLogoBar->setStyleSheet(QString::fromUtf8(""));
        UpperLogoBar->setFrameShape(QFrame::StyledPanel);
        UpperLogoBar->setFrameShadow(QFrame::Raised);
        AppLogo = new QLabel(UpperLogoBar);
        AppLogo->setObjectName("AppLogo");
        AppLogo->setGeometry(QRect(10, 10, 300, 80));
        AppLogo->setMinimumSize(QSize(300, 0));
        AppLogo->setMaximumSize(QSize(300, 16777215));
        AppLogo->setPixmap(QPixmap(QString::fromUtf8(":/images/AppLogo.png")));
        Motto = new QTextEdit(UpperLogoBar);
        Motto->setObjectName("Motto");
        Motto->setGeometry(QRect(290, 10, 914, 80));
        Motto->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        Motto->setStyleSheet(QString::fromUtf8("margin-bottom:3px;\n"
"color:white;"));
        Motto->setReadOnly(true);

        verticalLayout->addWidget(UpperLogoBar);

        Window = new QFrame(Container);
        Window->setObjectName("Window");
        Window->setMinimumSize(QSize(1000, 0));
        Window->setStyleSheet(QString::fromUtf8("\n"
"border-color:rgb(103, 163, 202);\n"
"border-color:rgb(189, 219, 240);;\n"
"color:white;\n"
""));
        Window->setFrameShape(QFrame::StyledPanel);
        Window->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(Window);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Navbar = new QWidget(Window);
        Navbar->setObjectName("Navbar");
        Navbar->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(30);
        sizePolicy.setHeightForWidth(Navbar->sizePolicy().hasHeightForWidth());
        Navbar->setSizePolicy(sizePolicy);
        Navbar->setMinimumSize(QSize(375, 0));
        Navbar->setMaximumSize(QSize(200, 16777215));
        Navbar->setLayoutDirection(Qt::LeftToRight);
        Navbar->setStyleSheet(QString::fromUtf8("\n"
"color:black;\n"
"QPushButton{\n"
"	background-color:rgb(191, 226, 228);;\n"
"	color:black;\n"
"	border-radius:7px;\n"
"}\n"
"\n"
""));
        verticalLayout_4 = new QVBoxLayout(Navbar);
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 75);
        BillOptions = new QFrame(Navbar);
        BillOptions->setObjectName("BillOptions");
        BillOptions->setMinimumSize(QSize(150, 60));
        BillOptions->setMaximumSize(QSize(16777215, 90));
        BillOptions->setStyleSheet(QString::fromUtf8("color:black"));
        BillOptions->setFrameShape(QFrame::StyledPanel);
        BillOptions->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(BillOptions);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Purchase = new QPushButton(BillOptions);
        Purchase->setObjectName("Purchase");
        Purchase->setMinimumSize(QSize(200, 30));
        Purchase->setMaximumSize(QSize(200, 40));
        Purchase->setCursor(QCursor(Qt::PointingHandCursor));
        Purchase->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(Purchase, 0, Qt::AlignLeft);

        BillOptionsFrame = new QFrame(BillOptions);
        BillOptionsFrame->setObjectName("BillOptionsFrame");
        BillOptionsFrame->setMinimumSize(QSize(0, 70));
        BillOptionsFrame->setStyleSheet(QString::fromUtf8(""));
        BillOptionsFrame->setFrameShape(QFrame::StyledPanel);
        BillOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(BillOptionsFrame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        RecordBillPayment = new QPushButton(BillOptionsFrame);
        RecordBillPayment->setObjectName("RecordBillPayment");
        RecordBillPayment->setMinimumSize(QSize(150, 30));
        RecordBillPayment->setMaximumSize(QSize(150, 30));

        verticalLayout_3->addWidget(RecordBillPayment);

        CreateBill = new QPushButton(BillOptionsFrame);
        CreateBill->setObjectName("CreateBill");
        CreateBill->setMinimumSize(QSize(150, 30));
        CreateBill->setMaximumSize(QSize(150, 30));

        verticalLayout_3->addWidget(CreateBill);


        horizontalLayout_2->addWidget(BillOptionsFrame);


        verticalLayout_4->addWidget(BillOptions);

        SalesOptions = new QFrame(Navbar);
        SalesOptions->setObjectName("SalesOptions");
        SalesOptions->setMinimumSize(QSize(300, 70));
        SalesOptions->setMaximumSize(QSize(400, 60));
        SalesOptions->setStyleSheet(QString::fromUtf8("color:black"));
        SalesOptions->setFrameShape(QFrame::StyledPanel);
        SalesOptions->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(SalesOptions);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Sales = new QPushButton(SalesOptions);
        Sales->setObjectName("Sales");
        Sales->setMinimumSize(QSize(200, 40));
        Sales->setMaximumSize(QSize(200, 16777215));
        Sales->setCursor(QCursor(Qt::PointingHandCursor));
        Sales->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(Sales, 0, Qt::AlignLeft|Qt::AlignVCenter);

        InvoiceOptionsFrame = new QFrame(SalesOptions);
        InvoiceOptionsFrame->setObjectName("InvoiceOptionsFrame");
        InvoiceOptionsFrame->setMinimumSize(QSize(0, 70));
        InvoiceOptionsFrame->setMaximumSize(QSize(16777215, 60));
        InvoiceOptionsFrame->setStyleSheet(QString::fromUtf8(""));
        InvoiceOptionsFrame->setFrameShape(QFrame::StyledPanel);
        InvoiceOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(InvoiceOptionsFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        CreateInvoice = new QPushButton(InvoiceOptionsFrame);
        CreateInvoice->setObjectName("CreateInvoice");
        CreateInvoice->setMinimumSize(QSize(150, 30));
        CreateInvoice->setMaximumSize(QSize(150, 30));

        verticalLayout_2->addWidget(CreateInvoice);

        RecordPayment = new QPushButton(InvoiceOptionsFrame);
        RecordPayment->setObjectName("RecordPayment");
        RecordPayment->setMinimumSize(QSize(150, 30));
        RecordPayment->setMaximumSize(QSize(150, 30));

        verticalLayout_2->addWidget(RecordPayment);


        horizontalLayout->addWidget(InvoiceOptionsFrame);


        verticalLayout_4->addWidget(SalesOptions);

        ReportingOptions = new QFrame(Navbar);
        ReportingOptions->setObjectName("ReportingOptions");
        ReportingOptions->setMinimumSize(QSize(300, 100));
        ReportingOptions->setMaximumSize(QSize(400, 90));
        ReportingOptions->setStyleSheet(QString::fromUtf8("color:black"));
        ReportingOptions->setFrameShape(QFrame::StyledPanel);
        ReportingOptions->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(ReportingOptions);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        Reporting = new QPushButton(ReportingOptions);
        Reporting->setObjectName("Reporting");
        Reporting->setMinimumSize(QSize(200, 40));
        Reporting->setMaximumSize(QSize(200, 16777215));
        Reporting->setCursor(QCursor(Qt::PointingHandCursor));
        Reporting->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(Reporting, 0, Qt::AlignLeft);

        ReportingOptionsFrame = new QFrame(ReportingOptions);
        ReportingOptionsFrame->setObjectName("ReportingOptionsFrame");
        ReportingOptionsFrame->setMinimumSize(QSize(0, 100));
        ReportingOptionsFrame->setMaximumSize(QSize(16777215, 100));
        ReportingOptionsFrame->setStyleSheet(QString::fromUtf8(""));
        ReportingOptionsFrame->setFrameShape(QFrame::StyledPanel);
        ReportingOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(ReportingOptionsFrame);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        TrialBalance = new QPushButton(ReportingOptionsFrame);
        TrialBalance->setObjectName("TrialBalance");
        TrialBalance->setMinimumSize(QSize(150, 30));
        TrialBalance->setMaximumSize(QSize(150, 30));

        verticalLayout_5->addWidget(TrialBalance);

        PLReport = new QPushButton(ReportingOptionsFrame);
        PLReport->setObjectName("PLReport");
        PLReport->setMinimumSize(QSize(150, 30));
        PLReport->setMaximumSize(QSize(150, 30));

        verticalLayout_5->addWidget(PLReport);

        BalanceSheet = new QPushButton(ReportingOptionsFrame);
        BalanceSheet->setObjectName("BalanceSheet");
        BalanceSheet->setMinimumSize(QSize(150, 30));
        BalanceSheet->setMaximumSize(QSize(150, 16777215));

        verticalLayout_5->addWidget(BalanceSheet);


        horizontalLayout_4->addWidget(ReportingOptionsFrame);


        verticalLayout_4->addWidget(ReportingOptions);

        Accounting = new QPushButton(Navbar);
        Accounting->setObjectName("Accounting");
        Accounting->setMinimumSize(QSize(200, 40));
        Accounting->setMaximumSize(QSize(200, 16777215));
        Accounting->setCursor(QCursor(Qt::PointingHandCursor));
        Accounting->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(Accounting);

        pushButton = new QPushButton(Navbar);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(200, 40));
        pushButton->setMaximumSize(QSize(200, 16777215));

        verticalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(Navbar);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(200, 40));
        pushButton_2->setMaximumSize(QSize(200, 16777215));

        verticalLayout_4->addWidget(pushButton_2);


        horizontalLayout_3->addWidget(Navbar);

        Border = new QWidget(Window);
        Border->setObjectName("Border");
        Border->setMinimumSize(QSize(10, 0));
        Border->setStyleSheet(QString::fromUtf8("background-color:#8db1d4;"));

        horizontalLayout_3->addWidget(Border);

        Background = new QScrollArea(Window);
        Background->setObjectName("Background");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(30);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Background->sizePolicy().hasHeightForWidth());
        Background->setSizePolicy(sizePolicy1);
        Background->setMinimumSize(QSize(1000, 0));
        Background->setMaximumSize(QSize(2000, 16777215));
        Background->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        Background->setStyleSheet(QString::fromUtf8("\n"
"	border:none;\n"
" padding-top:10px;\n"
"\n"
""));
        Background->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1134, 524));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(30);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollAreaWidgetContents_2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_2->setSizePolicy(sizePolicy2);
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        frame_2 = new QFrame(scrollAreaWidgetContents_2);
        frame_2->setObjectName("frame_2");
        frame_2->setMaximumSize(QSize(2000, 100));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setObjectName("gridLayout_4");
        WelcomeMessage = new QTextEdit(frame_2);
        WelcomeMessage->setObjectName("WelcomeMessage");
        WelcomeMessage->setMinimumSize(QSize(0, 100));
        WelcomeMessage->setMaximumSize(QSize(400, 80));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Narrow")});
        font.setPointSize(15);
        WelcomeMessage->setFont(font);
        WelcomeMessage->setStyleSheet(QString::fromUtf8("color:black;"));
        WelcomeMessage->setReadOnly(true);

        gridLayout_4->addWidget(WelcomeMessage, 1, 0, 1, 1);


        verticalLayout_6->addWidget(frame_2);

        NavButton = new QPushButton(scrollAreaWidgetContents_2);
        NavButton->setObjectName("NavButton");
        NavButton->setMinimumSize(QSize(50, 60));
        NavButton->setMaximumSize(QSize(50, 60));
        NavButton->setCursor(QCursor(Qt::PointingHandCursor));
        NavButton->setAutoFillBackground(false);
        NavButton->setStyleSheet(QString::fromUtf8("background-color:black;"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("battery");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/images/NavbarLogo1.png"), QSize(), QIcon::Active, QIcon::On);
        }
        NavButton->setIcon(icon);
        NavButton->setIconSize(QSize(70, 60));

        verticalLayout_6->addWidget(NavButton);

        frame_3 = new QFrame(scrollAreaWidgetContents_2);
        frame_3->setObjectName("frame_3");
        frame_3->setMaximumSize(QSize(2000, 100));
        frame_3->setStyleSheet(QString::fromUtf8(""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_3);
        gridLayout_5->setObjectName("gridLayout_5");
        ContextOfGraph = new QLineEdit(frame_3);
        ContextOfGraph->setObjectName("ContextOfGraph");
        ContextOfGraph->setMinimumSize(QSize(600, 40));
        ContextOfGraph->setMaximumSize(QSize(600, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Heading")});
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        ContextOfGraph->setFont(font1);
        ContextOfGraph->setStyleSheet(QString::fromUtf8("padding-left:15px;\n"
"\n"
"font: 700 italic 12pt \"Sitka Heading\";"));
        ContextOfGraph->setReadOnly(true);

        gridLayout_5->addWidget(ContextOfGraph, 0, 0, 1, 1);


        verticalLayout_6->addWidget(frame_3);

        frame = new QFrame(scrollAreaWidgetContents_2);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(2000, 500));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb 54,15,1;\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame);
        gridLayout_6->setObjectName("gridLayout_6");
        SecondGraph = new QHBoxLayout();
        SecondGraph->setObjectName("SecondGraph");

        gridLayout_6->addLayout(SecondGraph, 0, 0, 1, 1);

        FirstGraph = new QHBoxLayout();
        FirstGraph->setObjectName("FirstGraph");

        gridLayout_6->addLayout(FirstGraph, 0, 1, 1, 1);


        verticalLayout_6->addWidget(frame);

        Background->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_3->addWidget(Background);


        verticalLayout->addWidget(Window);


        gridLayout_3->addWidget(Container, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        AppLogo->setText(QString());
        Motto->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">ACCOUNTING MADE EASY</span></p></body></html>", nullptr));
        Purchase->setText(QCoreApplication::translate("MainWindow", "Purchases", nullptr));
        RecordBillPayment->setText(QCoreApplication::translate("MainWindow", "RecordBillPayment", nullptr));
        CreateBill->setText(QCoreApplication::translate("MainWindow", "CreateBill", nullptr));
        Sales->setText(QCoreApplication::translate("MainWindow", "Sales", nullptr));
        CreateInvoice->setText(QCoreApplication::translate("MainWindow", "CreateInvoice", nullptr));
        RecordPayment->setText(QCoreApplication::translate("MainWindow", "RecordPayment", nullptr));
        Reporting->setText(QCoreApplication::translate("MainWindow", "Reporting", nullptr));
        TrialBalance->setText(QCoreApplication::translate("MainWindow", "Trial Balance", nullptr));
        PLReport->setText(QCoreApplication::translate("MainWindow", "PL Report", nullptr));
        BalanceSheet->setText(QCoreApplication::translate("MainWindow", "BalanceSheet", nullptr));
        Accounting->setText(QCoreApplication::translate("MainWindow", "Accounting", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "CreateJournal", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "LedgerSummary", nullptr));
        WelcomeMessage->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial Narrow'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:20pt;\">Welcome Back!</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:16pt;\">Your Business is Waiting For You!</span></p></body></html>", nullptr));
        NavButton->setText(QString());
        ContextOfGraph->setText(QCoreApplication::translate("MainWindow", "Here are some graphs that we have prepared for you:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
