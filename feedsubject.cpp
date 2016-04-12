#include "feedsubject.h"

FeedSubject::FeedSubject() :
    m_subjectState()
{

}

FeedSubject::~FeedSubject()
{
    //delete m_subjectState;
}

QString FeedSubject::state() const
{
    return m_subjectState;
}

void FeedSubject::setState(const QString state)
{
    m_subjectState = state;
}
