#include "IEventListener.h"
#include <iostream>

class TestEventListener : public IEventListener {
    public:
        TestEventListener() = default;
        ~TestEventListener() = default;
        void update(std::string p_tmpMsg) override {
            std::cout << p_tmpMsg << std::endl;
        }
};