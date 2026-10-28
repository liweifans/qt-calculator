#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void inputDigit(QString ch);
    void inputDot();
    void inputOperator(QString op);
    void calcEqual();

    // 功能按钮
    void clearAll();
    void clearEntry();
    void backspace();
    void toggleSign();
    void calcPercent();
    void calcReciprocal();
    void calcSquare();
    void calcSqrt();

    void updateUI();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private:
    Ui::MainWindow *ui;

    QString m_expr;
    QString m_currentNum;
    double  m_lastVal = 0.0;
    QString m_op;
    bool m_waitNewOperand = true;
    bool m_hasError = false;
};
#endif // MAINWINDOW_H
