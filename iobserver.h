#ifndef OBSERVER_H
#define OBSERVER_H

class IObserver
{
public:
    IObserver() {}
    virtual ~IObserver() {}

    virtual void update() = 0;
};

#endif // OBSERVER_H
