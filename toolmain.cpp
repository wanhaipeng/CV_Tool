#include "toolmain.h"
#include "ui_toolmain.h"

ToolMain::ToolMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ToolMain)
{
    ui->setupUi(this);
}

ToolMain::~ToolMain()
{
    delete ui;
}
