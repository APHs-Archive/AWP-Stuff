#include "Observer.h"

Observer::~Observer() {
    std::cout << "Observer: I'm being destroyed" << std::endl;
}

Observer::Observer(Subject &subject) : subject(subject) {
    subject.subscribe(this);
    std::cout << "Observer: Attached to subject" << std::endl;
}

void Observer::Update() {
    subject.notify();
    std::cout << "Observer: Reacted to the event" << std::endl;
}

void Observer::Detach() {
    subject.unsubscribe(this);
    std::cout << "Observer: Detached from subject" << std::endl;
}

void Observer::PrintInfo() {
    subject.printInfo();
}

