#ifndef OBSERVER_H
#define OBSERVER_H

#include <QString>

class Subject;

class IObserver
{
public:
    IObserver() {}
    virtual ~IObserver() {}

    virtual void update(Subject *subject, QString feedName = QString("")) = 0;
};

#endif // OBSERVER_H
