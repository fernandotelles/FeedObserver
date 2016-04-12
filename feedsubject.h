#ifndef FEEDSUBJECT_H
#define FEEDSUBJECT_H

#include <QString>

class FeedSubject
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
