#ifndef SUBJECT_H
#define SUBJECT_H

template <typename T>
class QList;

template <typename K, typename V>
class QMultiHash;

class QString;

class IObserver;

class Subject
{
public:
    virtual ~Subject();
    virtual void attach(IObserver *observer, QString feedName);
    virtual void detach(IObserver *observer, QString feedName);
    virtual void notify() const;

protected:
    Subject();

private:
    QList<IObserver *> *m_observers;
    QMultiHash<QString, IObserver *> *m_feedCategories;
};

#endif // SUBJECT_H
