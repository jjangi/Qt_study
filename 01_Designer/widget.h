#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui; //윈도우 상에 배치한 위젯을 접근하기 위한 오브젝트
private slots:
    void slider1_valueChanged(int value);
    void slider2_valueChanged(int value);
    void slider3_valueChanged(int value);
};
#endif // WIDGET_H
