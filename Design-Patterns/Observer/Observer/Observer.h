#pragma once

#include "IObserver.h"
#include "Subject.h"

class Observer : public IObserver {
    public:
    virtual ~Observer();
    Observer(Subject &subject);
    void Update();
    void Detach();
    void PrintInfo();

    private:
    Subject &subject;
};