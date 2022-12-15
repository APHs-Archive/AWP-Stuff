#include "model.h"

#include <iostream>

Model::Model(View *p_view)
{
    m_view = p_view;

    // Create Thread
    m_thread = new std::thread(&Model::startThing, this);

}

void Model::startThing() {
    m_view->sayDebugMsg();
    while (true)
    {
        std::cout << "Phase 01" << std::endl;
        m_view->switchPartnerOne(View::GREEN);
        m_view->switchPartnerTwo(View::RED);
        std::this_thread::sleep_for(std::chrono::seconds(3));

        std::cout << "Phase 02" << std::endl;
        m_view->switchPartnerOne(View::ORANGE);
        m_view->switchPartnerTwo(View::RED);
        std::this_thread::sleep_for(std::chrono::seconds(3));

        std::cout << "Phase 03" << std::endl;
        m_view->switchPartnerOne(View::RED);
        m_view->switchPartnerTwo(View::RED);
        std::this_thread::sleep_for(std::chrono::seconds(3));

        std::cout << "Phase 04" << std::endl;
        m_view->switchPartnerOne(View::RED);
        m_view->switchPartnerTwo(View::RED_ORANGE);
        std::this_thread::sleep_for(std::chrono::seconds(3));

        std::cout << "Phase 05" << std::endl;
        m_view->switchPartnerOne(View::RED);
        m_view->switchPartnerTwo(View::GREEN);
        std::this_thread::sleep_for(std::chrono::seconds(3));

        std::cout << "Phase 06" << std::endl;
        m_view->switchPartnerOne(View::RED);
        m_view->switchPartnerTwo(View::ORANGE);
        std::this_thread::sleep_for(std::chrono::seconds(3));

        std::cout << "Phase 07" << std::endl;
        m_view->switchPartnerOne(View::RED);
        m_view->switchPartnerTwo(View::RED);
        std::this_thread::sleep_for(std::chrono::seconds(3));

    }
}
