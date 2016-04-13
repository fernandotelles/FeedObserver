#include <QCoreApplication>

#include "subject.h"
#include "feedobserver.h"
#include "feedsubject.h"
#include "iobserver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    FeedSubject *s1 = new FeedSubject;
    FeedSubject *s2 = new FeedSubject;

    IObserver *o1 = new FeedObserver;
    IObserver *o2 = new FeedObserver;
    IObserver *o3 = new FeedObserver;

    s1->attach(o1, "esportes");
    s2->attach(o1, "esportes");
    s2->attach(o2, "musica");
    s2->attach(o3, "");

    s1->setState("2");
    s2->setState("3");

    return a.exec();
}
