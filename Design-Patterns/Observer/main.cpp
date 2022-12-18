#include "Observer/Observer.h"
#include "Observer/Subject.h"

int main() {
    Subject *subject = new Subject;
    Observer *observer1 = new Observer(*subject); 
    Observer *observer2 = new Observer(*subject);
    Observer *observer3 = new Observer(*subject);


    subject->createMessage("Fuck you");
    observer3->Detach();

    return 0;
}

/* 
Linker Error in IObserver Update Method
check Parameters in Observer Update Method */