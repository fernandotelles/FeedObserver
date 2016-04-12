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

void Subject::attach(const IObserver *observer, const QString feedName)
{
    if(feedName)
        m_feedCategories->insert(feedName, observer);
    else
        m_observers->append(observer);

}

void Subject::detach(const IObserver *observer, const QString feedName)
{
    if(feedName)
    {
        if()
    }
    else
    {

    }
}

void Subject::notify() const
{

}
