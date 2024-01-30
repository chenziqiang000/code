#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QWidget>
#include <QVBoxLayout>
int statues=1;
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

   // QWidget login_win;
    /*QPushButton *login=new QPushButton("登录");
    QPushButton *back=new QPushButton("退出");
    QLabel *label=new QLabel("密码");
    QLabel *label_user=new QLabel("用户名");
    QVBoxLayout* layout = new QVBoxLayout(&login_win);
     */
    //layout->addWidget(label);
    //layout->addWidget(label_user);
    //layout->addWidget(login);
    //layout->addWidget(back);
    //判断窗口是否关闭


    //login_win.setLayout(layout);
    //login_win.show();
    /*QObject::connect(&login_win,&QWidget::destroyed,[](){
        qDebug()<<"window closed";
        statues=0;
    });*/
    //if(statues==0)
    //{
        MainWindow w;
        w.show();
    //}

    return a.exec();
}
