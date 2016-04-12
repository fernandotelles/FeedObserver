#ifndef FEEDOBSERVER_H
#define FEEDOBSERVER_H

#include "iobserver.h"

#include <QString>

class FeedSubject;

class FeedObserver : public IObserver
{
public:
    FeedObserver();
    ~FeedObserver();

    virtual void update();

private:
    QString m_state;
    FeedSubject *m_subject;
};

#endif // FEEDOBSERVER_H
