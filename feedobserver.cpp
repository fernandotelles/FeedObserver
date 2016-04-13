#include "feedobserver.h"

#include "subject.h"
#include "feedsubject.h"

FeedObserver::FeedObserver() :
    m_state()
{

}

FeedObserver::~FeedObserver()
{
}

void FeedObserver::update(Subject *subject, QString feedName = QString(""))
{

    //m_state = dynamic_cast<FeedSubject *>(subject)->state();
}
