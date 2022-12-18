#pragma once
#include <list>

#include "ISubject.h"
#include "../Observer/IObserver.h"

class Subject : public ISubject {
    public: 
        virtual ~Subject();
        void subscribe(IObserver *observer) override;
        void unsubscribe(IObserver *observer) override;
        void notify() override ;
        void createMessage(std::string message = "Empty");
        void printInfo();
        void foobar();
    private: 
        std::list<IObserver *> m_observers;
        std::string m_message;
};