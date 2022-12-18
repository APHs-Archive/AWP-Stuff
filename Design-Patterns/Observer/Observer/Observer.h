#pragma once

#include "IObserver.h"
#include "../Subject/Subject.h"

class Observer : public IObserver {
    public:
    virtual ~Observer();
    Observer(Subject &subject);
    void Update(const std::string &message_from_subject) override;
    void Detach();
    void printInfo();

    private:
    Subject &subject;
    static int m_staticObserverID;
    int m_localObserverID;
    std::string m_subjectMessage;
};