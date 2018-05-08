#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QStringList>
#include "fileio.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();
private slots:
    void on_newPushButton_clicked();

    void on_actionExitMenu_triggered();

    void on_actionNewMenu_triggered();

    void on_deleteButton_clicked();

    void on_listWidget_itemPressed(QListWidgetItem *item);

    void on_newTaskButton_clicked();

    void on_actionSave_triggered();

    void on_actionMinified_triggered();

    void on_actionFull_View_triggered();

private:
    Ui::MainWindow *ui;
    FileIO *file;

    bool startTutorial;

    bool startingFresh;

    int score;

    int totalScore;

    QString fileName;

    QVector<QString> listOfItems;
};

#endif // MAINWINDOW_H
