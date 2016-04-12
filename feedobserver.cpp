#include "feedobserver.h"

#include "feedsubject.h"

FeedObserver::FeedObserver() :
    m_state(),
    m_subject(new FeedSubject)
{

}

FeedObserver::~FeedObserver()
{

}

void FeedObserver::update()
{
    m_state = m_subject->state();
}
