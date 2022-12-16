#pragma once

#include <string>

class IEventListener {
    public:
        virtual void update(std::string p_tmpMsg) = 0;
};