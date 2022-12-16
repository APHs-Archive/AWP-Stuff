#pragma once
#include <vector>

#include "Events/IEventListener.h"

// EventTypes
enum EventType {
    testEvent
};

class EventManager {
   public:
    EventManager();
    ~EventManager();
    void subscribe(EventType p_eventType, IEventListener* p_listener);
    void unsubscribe(EventType p_eventType, IEventListener* p_listener);
    void notify(EventType p_eventType, IEventListener* p_listener);

   private:
    std::vector<IEventListener*> m_listeners;
};