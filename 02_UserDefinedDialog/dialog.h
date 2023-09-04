#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

class Dialog : public QDialog  //QDialog 클래스를 상속받은 클래스를 구현
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    QLabel      *lbl;
    QLineEdit   *edit;
    QPushButton *okbtn;
    QPushButton *cancelbtn;  //이름을 입력받을 수 있는 dialog, 버튼 두 개 배치.

private slots:
    void slot_okbtn();
    void slot_cancelbtn();

};


#endif // DIALOG_H
