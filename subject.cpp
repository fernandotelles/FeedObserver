#include "subject.h"

#include <QList>
#include <QMultiHash>
#include <QString>

#include "iobserver.h"

Subject::Subject() :
    m_observers(new QList<IObserver *>),
    m_feedCategories(new QMultiHash<QString, IObserver *>)
{

}

Subject::~Subject()
{
    delete m_observers;
    delete m_feedCategories;
}

void Subject::attach(IObserver *observer, QString feedName)
{
    if(feedName.isEmpty())
        m_feedCategories->insert(feedName, observer);
    else
        m_observers->append(observer);

}

void Subject::detach(IObserver *observer, QString feedName)
{
    if(m_feedCategories->contains(feedName, observer))
        m_feedCategories->remove(feedName, observer);
    else
        m_observers->removeOne(observer);
    
}

void Subject::notify() const
{

}
