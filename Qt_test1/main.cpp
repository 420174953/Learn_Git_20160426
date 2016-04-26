#include "ui_hellodialog.h"
//#include <QApplication>
//#include <QLabel>
//#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDialog w;
    Ui::HelloDialog ui;
    ui.setupUi(&w);//踩踩
    w.show();

//    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
//    HelloDialog w;
//    QLabel label(&w);
//    label.setText(QObject::tr("Hello 长光卫星!")),
//    w.show();
    
    return a.exec();
}
