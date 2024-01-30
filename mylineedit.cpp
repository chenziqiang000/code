#include "MyLineEdit.h"
MyLineedit::MyLineedit(QLineEdit* line)
{
    this->lineedit=line;
}
double MyLineedit::get_value()
{
    return this->lineedit->text().toDouble();
}
QString MyLineedit::get_name()
{
    return this->lineedit->text();
}
void MyLineedit::setText(QString Text)
{
    this->lineedit->setText(Text);
}
