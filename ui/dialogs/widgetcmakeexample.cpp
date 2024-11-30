#include "widgetcmakeexample.h"
#include "./ui_widgetcmakeexample.h"

WidgetCmakeExample::WidgetCmakeExample(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WidgetCmakeExample)
{
    ui->setupUi(this);
}

WidgetCmakeExample::~WidgetCmakeExample()
{
    delete ui;
}
