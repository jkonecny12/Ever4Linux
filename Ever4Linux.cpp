#include "Ever4Linux.h"

#include <QtGui/QLabel>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QAction>

Ever4Linux::Ever4Linux()
{
    QLabel* l = new QLabel( this );
    l->setText( "Hello World!" );
    setCentralWidget( l );
    QAction* a = new QAction(this);
    a->setText( "Quit" );
    connect(a, SIGNAL(triggered()), SLOT(close()) );
    menuBar()->addMenu( "File" )->addAction( a );
}

Ever4Linux::~Ever4Linux()
{}

#include "Ever4Linux.moc"
