#ifndef FEEDSUBJECT_H
#define FEEDSUBJECT_H

#include "subject.h"
#include <QString>

class FeedSubject : public Subject
{
public:
    FeedSubject();
    ~FeedSubject();

    QString state() const;
    void setState(const QString state);

private:
   QString m_subjectState;
};

#endif // FEEDSUBJECT_H
