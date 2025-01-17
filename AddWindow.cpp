#include "AddWindow.h"
#include "./ui_AddWindow.h"
#include "mainwindow.h"
#include<QDebug>
#include "chartofaccountwindow.h"



int16_t AddWindow::GetTypeIdFromType(QString type){
        if(type=="ASSETS") return 1;
        else if(type=="LIABILITIES") return 2;
        else if(type=="EQUITY") return 3;
        else if(type=="INCOME") return 4;
        else if(type=="EXPENSE") return 5;
        else return -1;
    }


AddWindow::AddWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AddWindow)
{
    ui->setupUi(this);
    PopulateSelectHeader();

}

AddWindow::~AddWindow()
{
    delete ui;
}

void AddWindow:: AddChildToDatabase(){
    QSqlDatabase db;
    db=MainWindow::db;

    QString accountName = ui->ReadName->text();
    QString accountCode = ui->ReadCode->text();
    QString accountType = ui->ReadType->currentText();
    QString balance = ui->ReadBalance->text();
    QString parentHeader = ui->ReadHeader->currentText();





    qint8 *typeID=new qint8();

    *typeID = AddWindow::GetTypeIdFromType(accountType);


    QSqlQuery query;
    query.prepare("INSERT INTO ChartOfAccounts (account_name, account_id, balance, type, type_id, parent_header) "
                  "VALUES (:account_name, :account_id, :balance, :type, :type_id, :parent_header)");

    query.bindValue(":account_name", accountName);
    query.bindValue(":account_id", accountCode.toInt()); // Assuming account_code is the integer ID
    query.bindValue(":balance", balance.toDouble());
    query.bindValue(":type", accountType);
    query.bindValue(":type_id", *typeID); // Assuming you have a specific type ID, you may want to adjust this
    query.bindValue(":parent_header", parentHeader);

    if (!query.exec()) {
        qDebug() << "Error adding item to database:" << query.lastError().text();
    }
    else {
        qDebug() << "Item saved successfully!";
    }

    AddAccountToBalanceTable(accountCode.toInt(),balance.toDouble());

    delete typeID;


    ui->ReadName->clear();
    ui->ReadCode->clear();
    ui->ReadType->setCurrentIndex(0);
    ui->ReadBalance->clear();
    ui->ReadHeader->clear();

}

void AddWindow::AddParentToDatabase() {
    QSqlDatabase db;
    db = MainWindow::db;

    // Get input values from the UI
    QString parentName = ui->ReadName->text();
    QString parentCode = ui->ReadCode->text();
    QString parentType = ui->ReadType->currentText();

    // Convert account type to type ID
    qint8 *typeID = new qint8();
    *typeID = GetTypeIdFromType(parentType);

    // Prepare the query to insert the parent account
    QSqlQuery query;
    query.prepare("INSERT INTO ParentAccounts (parent_id, parent_name, type, type_id) "
                  "VALUES (:parent_id, :parent_name, :type, :type_id)");

    // Bind the values to the query
    query.bindValue(":parent_id", parentCode.toInt());  // Assuming parentCode is the integer ID
    query.bindValue(":parent_name", parentName);
    query.bindValue(":type", parentType);
    query.bindValue(":type_id", *typeID);  // Type ID based on the account type

    // Execute the query and check for errors
    if (!query.exec()) {
        qDebug() << "Error adding parent to database:" << query.lastError().text();
    } else {
        qDebug() << "Parent account saved successfully!";
    }


    // Close the database connection

    delete typeID;
    // Clear the input fields in the UI
    ui->ReadName->clear();
    ui->ReadCode->clear();
    ui->ReadType->setCurrentIndex(0);
}

void AddWindow::AddAccountToBalanceTable(int accountId, double openingBalance) {
    // Open the database connection
    QSqlDatabase db = MainWindow::db;

    // Calculate the initial current balance (opening balance)
    double currentBalance = openingBalance;

    // Prepare the SQL query to insert a new record in AccountBalances table
    QSqlQuery query;
    query.prepare("INSERT INTO AccountBalances (account_id, opening_balance, debit_total, credit_total, current_balance) "
                  "VALUES (:account_id, :opening_balance, :debit_total, :credit_total, :current_balance)");

    // Bind values to the query
    query.bindValue(":account_id", accountId);
    query.bindValue(":opening_balance", openingBalance);
    query.bindValue(":debit_total", 0.0);  // Initial debit total
    query.bindValue(":credit_total", 0.0); // Initial credit total
    query.bindValue(":current_balance", currentBalance); // Initial current balance

    // Execute the query and check for errors
    if (!query.exec()) {
        qDebug() << "Error adding account to AccountBalances:" << query.lastError().text();
    } else {
        qDebug() << "Account added to AccountBalances successfully!";
    }

}




void AddWindow::PopulateSelectHeader(){
    ui->ReadHeader->clear();
        QSqlDatabase db;

        db=MainWindow::db;
       // Prepare and execute the query to fetch parent headers
       QSqlQuery query;
       query.prepare("SELECT parent_name FROM ParentAccounts");

       if (!query.exec()) {
           qDebug() << "Error fetching parent headers: " << query.lastError().text();
           return;
       }

       // Add each parent header to the combo box
       while (query.next()) {
           QString parentName = query.value("parent_name").toString();
           ui->ReadHeader->addItem(parentName);
       }
}




void AddWindow::on_Save_clicked()
{
    if(ui->ChildCheckbox->isChecked()){
        AddChildToDatabase();
    }
    else if(ui->ParentCheckbox->isChecked()){
        AddParentToDatabase();
    }
    ChartOfAccountWindow * ChartOfAccountWin= new ChartOfAccountWindow();
    QSize currentSize = this->size();
    QPoint currentPosition = this->pos();
    ChartOfAccountWin->resize(currentSize);
    ChartOfAccountWin->move(currentPosition);
    ChartOfAccountWin->show();
    this->close();
    delete this;
}


void AddWindow::on_Cancel_clicked()
{
    ChartOfAccountWindow * ChartOfAccountWin= new ChartOfAccountWindow();
    QSize currentSize = this->size();
    QPoint currentPosition = this->pos();
    ChartOfAccountWin->resize(currentSize);
    ChartOfAccountWin->move(currentPosition);
    ChartOfAccountWin->show();
    this->close();
    delete this;
}


void AddWindow::on_ChildCheckbox_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->BalanceFrame->setVisible(true);
        ui->ParentFrame->setVisible(true);

        ui->ParentCheckbox->setChecked(false);
    }
}

void AddWindow::on_ParentCheckbox_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->BalanceFrame->setVisible(false);
        ui->ParentFrame->setVisible(false);

        ui->ChildCheckbox->setChecked(false);
    }
}

