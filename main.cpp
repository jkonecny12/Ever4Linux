#include <QtGui/QApplication>
#include "Ever4Linux.h"


int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    Ever4Linux foo;
    foo.show();
    return app.exec();
}
