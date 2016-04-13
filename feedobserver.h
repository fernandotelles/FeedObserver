#ifndef FEEDOBSERVER_H
#define FEEDOBSERVER_H

#include "iobserver.h"

#include <QString>

class Subject;

class FeedObserver : public IObserver
{
public:
    FeedObserver();
    ~FeedObserver();

    virtual void update(Subject *subject, QString feedName);

private:
    QString m_state;
};

#endif // FEEDOBSERVER_H
