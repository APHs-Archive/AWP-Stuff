#pragma once

#include "ISubject.h"
#include "IObserver.h"

class Subject : public ISubject {
    public: 
        virtual ~Subject();
        void subscribe(IObserver *observer);
        void unsubscribe(IObserver *observer);
        void notify();
        void createMessage(std::string message = "Empty");
        void printInfo();
    private: 
        std::vector<IObserver*> m_observers;
        std::string m_message;
};