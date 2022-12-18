#include "Observer.h"

int Observer::m_staticObserverID = 0;

Observer::Observer(Subject &subject) : subject(subject) {
    subject.subscribe(this);

    m_staticObserverID++;
    m_localObserverID = m_staticObserverID;

    std::cout << "🟢 [Debug] Observer " << m_localObserverID << " created." << std::endl;
}

Observer::~Observer() {
    std::cout << "🔴 [Debug] Observer " << m_localObserverID << " destroyed." << std::endl;
}

void Observer::Update(const std::string &message_from_subject) {
    m_subjectMessage = message_from_subject;
    printInfo();
}

void Observer::Detach() {
    subject.unsubscribe(this);
    std::cout << "👋 [Debug] Observer detached from Subject" << std::endl;
}

void Observer::printInfo() {
    //subject.printInfo();
    std::cout << "💡 [Debug] [Observer ID: " << m_localObserverID << "] Subject ran notify: " <<std::endl << "\"" << m_subjectMessage << "\"" << std::endl << std::endl;

}

