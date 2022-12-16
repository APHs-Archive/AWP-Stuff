#include "EventManager.h"

EventManager::EventManager() {
    // ...
}

EventManager::~EventManager() {
    // ...
}

void EventManager::subscribe(EventType p_eventType, IEventListener* listener) {
    m_listeners.push_back(listener);
}

void EventManager::unsubscribe(EventType p_eventType, IEventListener* listener) {
    m_listeners.erase(std::remove(m_listeners.begin(), m_listeners.end(), listener), m_listeners.end());
}

void EventManager::notify(EventType p_eventType, IEventListener* listener) {
    for (auto& listener : m_listeners) {
        listener->update("Hello World!");
    }
}