#ifndef WIDGETCMAKEEXAMPLE_H
#define WIDGETCMAKEEXAMPLE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class WidgetCmakeExample;
}
QT_END_NAMESPACE

class WidgetCmakeExample : public QWidget
{
    Q_OBJECT

public:
    WidgetCmakeExample(QWidget *parent = nullptr);
    ~WidgetCmakeExample();

private:
    Ui::WidgetCmakeExample *ui;
};
#endif // WIDGETCMAKEEXAMPLE_H
