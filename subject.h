#ifndef SUBJECT_H
#define SUBJECT_H

template <typename T>
class QList;

template <typename K, typename V>
class QMultiHash;

#include <QString>

class IObserver;

class Subject
{
public:
    Subject();
    virtual ~Subject();
    void attach(IObserver *observer, QString feedName = QString(""));
    void detach(IObserver *observer, QString feedName = QString(""));
    void notify(QString feedName = QString(""));

private:
    QList<IObserver *> *m_observers;
    QMultiHash<QString, IObserver *> *m_feedCategories;
};

#endif // SUBJECT_H
