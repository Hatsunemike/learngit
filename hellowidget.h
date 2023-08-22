#ifndef HELLOWIDGET_H
#define HELLOWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class helloWidget; }
QT_END_NAMESPACE

class helloWidget : public QWidget
{
    Q_OBJECT

public:
    helloWidget(QWidget *parent = nullptr);
    ~helloWidget();

private:
    Ui::helloWidget *ui;
};
#endif // HELLOWIDGET_H
