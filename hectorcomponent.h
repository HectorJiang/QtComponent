#ifndef HECTORCOMPONENT_H
#define HECTORCOMPONENT_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class HectorComponent; }
QT_END_NAMESPACE

class HectorComponent : public QDialog
{
    Q_OBJECT

public:
    HectorComponent(QWidget *parent = nullptr);
    ~HectorComponent();

private:
    Ui::HectorComponent *ui;
};
#endif // HECTORCOMPONENT_H
