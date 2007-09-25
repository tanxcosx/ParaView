

#include "PrismToolBarActions.h"
#include "PrismCore.h"

PrismToolBarActions::PrismToolBarActions(QObject* p)
  : QActionGroup(p)
{
  PrismCore* core=PrismCore::instance();
  if(!core)
    {
    core=new PrismCore(this);
    }
  
  QList<QAction*> actions= core->actions();
  foreach(QAction *a,actions)
    {
    this->addAction(a);
    }

}

PrismToolBarActions::~PrismToolBarActions()
{

}

