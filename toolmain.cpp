#include "toolmain.h"
#include "ui_toolmain.h"
#include <opencv2/opencv.hpp>

ToolMain::ToolMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ToolMain)
{
    ui->setupUi(this);
    cv::Mat inputimg = cv::imread("/xxxxxxx/CV_Tool/lena.jpg");
    cv::imshow("test", inputimg);
    cv::waitKey(0);
}

ToolMain::~ToolMain()
{
    delete ui;
}
