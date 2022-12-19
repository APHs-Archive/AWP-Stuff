#include "Observer.h"
#include "Subject.h"

/*
@Todo:
- Add Utils Head with Debug print that can be turned on/off
- Document the code
*/

int main() {
    Subject* subject = new Subject;
    Observer* observer1 = new Observer(*subject);
    Observer* observer2 = new Observer(*subject);
    Observer* observer3 = new Observer(*subject);

    subject->createEvent("Hello World: 1");
    observer3->Detach();

    subject->createEvent("Hello World: 2");
    observer2->Detach();

    subject->createEvent("Hello World: 3");
    observer1->Detach();

    delete observer3;
    delete observer2;
    delete observer1;
    delete subject;

    return 0;
}