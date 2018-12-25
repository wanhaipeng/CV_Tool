#ifndef TOOLMAIN_H
#define TOOLMAIN_H

#include <QMainWindow>

namespace Ui {
class ToolMain;
}

class ToolMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit ToolMain(QWidget *parent = 0);
    ~ToolMain();

private:
    Ui::ToolMain *ui;
};

#endif // TOOLMAIN_H
