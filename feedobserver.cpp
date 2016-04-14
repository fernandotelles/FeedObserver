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
    qDebug()<<subject << "" << feedName;
    //m_state = dynamic_cast<FeedSubject *>(subject)->state();
}
