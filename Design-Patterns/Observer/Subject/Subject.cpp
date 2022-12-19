#include "Subject.h"

Subject::~Subject() {
  std::cout << "🔴 [Debug] Subject destroyed." << std::endl;
}

void Subject::subscribe(IObserver *observer) {
  m_observers.push_back(observer);
}

void Subject::unsubscribe(IObserver *observer) {
  m_observers.remove(observer);
}

void Subject::notify() {
  std::list<IObserver *>::iterator iterator = m_observers.begin();
  //printInfo();

  while (iterator != m_observers.end()) {
    (*iterator)->Update(m_message);
    ++iterator;
  }
}

void Subject::createEvent(std::string message) {
  m_message = message;
  notify();
}

void Subject::printInfo() {
    std::cout << "Current Observers: " << m_observers.size() << std::endl;
}