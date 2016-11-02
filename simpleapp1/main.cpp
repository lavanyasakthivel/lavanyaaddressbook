#include <QApplication>
#include <QtWidgets>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.setFixedSize(300,500);
    QPushButton *welcomeButton = new QPushButton("welcome to Qt",&window);
    welcomeButton->setToolTip("tool tip to welcome button");
    welcomeButton->setGeometry(100,100,100,30);
    window.show();

    return app.exec();
}
