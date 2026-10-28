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


protected:
    void keyPressEvent(QKeyEvent *event) override;

private:
    Ui::MainWindow *ui;


};
#endif // MAINWINDOW_H
