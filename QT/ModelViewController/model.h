#ifndef MODEL_H
#define MODEL_H

#include "view.h"
#include <thread>

class Model
{
private:
    View *m_view;
    std::thread *m_thread;
public:
    Model(View *p_view);
    void startThing();
};

#endif // MODEL_H
