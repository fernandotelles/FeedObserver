#include "feedobserver.h"

#include "subject.h"
#include "feedsubject.h"

#include <QDebug>

FeedObserver::FeedObserver() :
    m_state()
{

}

FeedObserver::~FeedObserver()
{
}

void FeedObserver::update(Subject *subject, QString feedName = QString(""))
{
    FeedSubject *observable = dynamic_cast<FeedSubject *>(subject);

    qDebug()<<subject << "" << this << "" << observable->state() << "" << feedName;
    m_state = observable->state();
}
