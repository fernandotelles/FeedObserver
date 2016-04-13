#include "feedsubject.h"

FeedSubject::FeedSubject() :
    m_subjectState()
{

}

FeedSubject::~FeedSubject()
{

}

QString FeedSubject::state() const
{
    return m_subjectState;
}

void FeedSubject::setState(const QString state)
{
    m_subjectState = state;
    notify();
}
