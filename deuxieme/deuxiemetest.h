#ifndef DEUXIEMETEST_H
#define DEUXIEMETEST_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class deuxiemeTest; }
QT_END_NAMESPACE

class deuxiemeTest : public QWidget
{
    Q_OBJECT

public:
    deuxiemeTest(QWidget *parent = nullptr);
    ~deuxiemeTest();

private:
    Ui::deuxiemeTest *ui;
};
#endif // DEUXIEMETEST_H
