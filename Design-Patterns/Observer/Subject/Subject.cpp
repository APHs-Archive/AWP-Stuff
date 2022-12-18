#include "Subject.h"

void Subject::subscribe(IObserver *observer) {
  m_observers.push_back(observer);
}

void Subject::unsubscribe(IObserver *observer) {
  m_observers.erase(std::remove(m_observers.begin(), m_observers.end(), observer), m_observers.end());
}

void Subject::notify() {
  /*
  for (IObserver *observer : m_observers) {
    observer->Update("m_message");
  }
  */
}

void Subject::printInfo() {
    std::cout << m_observers.size() << std::endl;
}

void Subject::createMessage(std::string message) {
  m_message = message;
  notify();
}