#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    updateUI();

    connect(ui->btnNum0, &QPushButton::clicked, this, [=](){inputDigit("0");});
    connect(ui->btnNum1, &QPushButton::clicked, this, [=](){inputDigit("1");});
    connect(ui->btnNum2, &QPushButton::clicked, this, [=](){inputDigit("2");});
    connect(ui->btnNum3, &QPushButton::clicked, this, [=](){inputDigit("3");});
    connect(ui->btnNum4, &QPushButton::clicked, this, [=](){inputDigit("4");});
    connect(ui->btnNum5, &QPushButton::clicked, this, [=](){inputDigit("5");});
    connect(ui->btnNum6, &QPushButton::clicked, this, [=](){inputDigit("6");});
    connect(ui->btnNum7, &QPushButton::clicked, this, [=](){inputDigit("7");});
    connect(ui->btnNum8, &QPushButton::clicked, this, [=](){inputDigit("8");});
    connect(ui->btnNum9, &QPushButton::clicked, this, [=](){inputDigit("9");});

    connect(ui->btn_add, &QPushButton::clicked, this, [=](){inputOperator("+");});
    connect(ui->btn_sub, &QPushButton::clicked, this, [=](){inputOperator("-");});
    connect(ui->btn_mul, &QPushButton::clicked, this, [=](){inputOperator("*");});
    connect(ui->btn_div, &QPushButton::clicked, this, [=](){inputOperator("/");});

    connect(ui->btn_dot, &QPushButton::clicked, this, &MainWindow::inputDot);
    connect(ui->btn_eq, &QPushButton::clicked, this, &MainWindow::calcEqual);
    connect(ui->btn_C, &QPushButton::clicked, this, &MainWindow::clearAll);
    connect(ui->btn_CE, &QPushButton::clicked, this, &MainWindow::clearEntry);
    connect(ui->btn_back, &QPushButton::clicked, this, &MainWindow::backspace);
    connect(ui->btn_sign, &QPushButton::clicked, this, &MainWindow::toggleSign);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateUI()
{
    ui->lbl_display->setText(m_expr);
    if(m_hasError)
    {
        ui->lbl_display->setText("Error");
    }
    else if(m_currentNum.isEmpty())
    {
        ui->lbl_display->setText("0");
    }
    else
    {
        ui->lbl_display->setText(m_currentNum);
    }
}

void MainWindow::inputDigit(QString ch)
{
    if(m_hasError)
    {
        clearAll();
    }
    if(m_waitNewOperand)
    {
        m_currentNum = ch;
        m_waitNewOperand = false;
    }
    else
    {
        m_currentNum += ch;
    }
    updateUI();
}

void MainWindow::inputDot()
{
    if(m_hasError)
    {
        clearAll();
    }
    if(m_waitNewOperand)
    {
        m_currentNum = "0.";
        m_waitNewOperand = false;
    }
    else if(!m_currentNum.contains('.'))
    {
        m_currentNum += ".";
    }
    updateUI();
}

void MainWindow::inputOperator(QString op)
{
    if(m_hasError) return;

    double currVal = m_currentNum.toDouble();
    if(!m_op.isEmpty())
    {
        if(m_op == "+") m_lastVal = m_lastVal + currVal;
        else if(m_op == "-") m_lastVal = m_lastVal - currVal;
        else if(m_op == "*") m_lastVal = m_lastVal * currVal;
        else if(m_op == "/")
        {
            if(fabs(currVal) < 1e-12)
            {
                m_hasError = true;
                updateUI();
                return;
            }
            m_lastVal = m_lastVal / currVal;
        }
        m_currentNum = QString::number(m_lastVal, 'g', 12);
    }
    else
    {
        m_lastVal = currVal;
    }
    m_op = op;
    m_expr = m_currentNum + " " + op;
    m_waitNewOperand = true;
    updateUI();
}

void MainWindow::calcEqual()
{
    if(m_hasError) return;
    if(m_op.isEmpty()) return;

    double currVal = m_currentNum.toDouble();
    if(m_op == "+") m_lastVal = m_lastVal + currVal;
    else if(m_op == "-") m_lastVal = m_lastVal - currVal;
    else if(m_op == "*") m_lastVal = m_lastVal * currVal;
    else if(m_op == "/")
    {
        if(fabs(currVal) < 1e-12)
        {
            m_hasError = true;
            updateUI();
            return;
        }
        m_lastVal = m_lastVal / currVal;
    }
    m_currentNum = QString::number(m_lastVal, 'g', 12);
    m_expr = "";
    m_op = "";
    m_waitNewOperand = true;
    updateUI();
}

void MainWindow::clearAll()
{
    m_expr = "";
    m_currentNum = "";
    m_lastVal = 0;
    m_op = "";
    m_waitNewOperand = true;
    m_hasError = false;
    updateUI();
}

void MainWindow::clearEntry()
{
    m_currentNum = "";
    m_waitNewOperand = true;
    updateUI();
}

void MainWindow::backspace()
{
    if(m_hasError || m_waitNewOperand) return;
    if(m_currentNum.length() > 0)
    {
        m_currentNum.chop(1);
    }
    updateUI();
}

void MainWindow::toggleSign()
{
    if(m_hasError) return;
    double v = m_currentNum.toDouble();
    v = -v;
    m_currentNum = QString::number(v, 'g', 12);
    updateUI();
}

void MainWindow::calcPercent()
{
    if(m_hasError) return;
    double v = m_currentNum.toDouble();
    v = v / 100.0;
    m_currentNum = QString::number(v, 'g', 12);
    m_waitNewOperand = true;
    updateUI();
}

void MainWindow::calcReciprocal()
{
    if(m_hasError) return;
    double v = m_currentNum.toDouble();
    if(fabs(v) < 1e-12)
    {
        m_hasError = true;
        updateUI();
        return;
    }
    v = 1.0 / v;
    m_currentNum = QString::number(v, 'g', 12);
    m_waitNewOperand = true;
    updateUI();
}

void MainWindow::calcSquare()
{
    if(m_hasError) return;
    double v = m_currentNum.toDouble();
    v = v * v;
    m_currentNum = QString::number(v, 'g', 12);
    m_waitNewOperand = true;
    updateUI();
}

void MainWindow::calcSqrt()
{
    if(m_hasError) return;
    double v = m_currentNum.toDouble();
    if(v < 0)
    {
        m_hasError = true;
        updateUI();
        return;
    }
    v = sqrt(v);
    m_currentNum = QString::number(v, 'g', 12);
    m_waitNewOperand = true;
    updateUI();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    int key = event->key();
    if (key >= Qt::Key_0 && key <= Qt::Key_9)
    {
        inputDigit(QString::number(key - Qt::Key_0));
    }
    else if(key == Qt::Key_Plus) inputOperator("+");
    else if(key == Qt::Key_Minus) inputOperator("-");
    else if(key == Qt::Key_Asterisk) inputOperator("*");
    else if(key == Qt::Key_Slash) inputOperator("/");
    else if(key == Qt::Key_Period) inputDot();
    else if(key == Qt::Key_Enter || key == Qt::Key_Return) calcEqual();
    else if(key == Qt::Key_Backspace) backspace();
    else if(key == Qt::Key_Escape) clearAll();
    else if(key == Qt::Key_Percent) calcPercent();
    else QWidget::keyPressEvent(event);
}


