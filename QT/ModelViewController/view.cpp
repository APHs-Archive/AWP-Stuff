#include "view.h"
#include "ui_view.h"

#include <iostream>



View::View(QWidget* parent) : QWidget(parent), ui(new Ui::View) {
    ui->setupUi(this);  // UI Setup

    this->setFixedSize(QSize(500, 500));

    // Initalizing Images
    QString path = "/Users/jonas/Documents/GitHub/AWP-Stuff/QT/ModelViewController/assets/";

    stopLightRed = new QPixmap(path + "Ampel_1.png");
    stopLightOrangeRed = new QPixmap(path + "Ampel_2.png");
    stopLightOrange = new QPixmap(path + "Ampel_3.png");
    stopLightGreen = new QPixmap(path + "Ampel_4.png");
    background = new QPixmap(path + "background.jpg");

    ui->imgBackground->setPixmap(*background);
}

// Switches Trafic Light Partners 1 (North and South facing)
void View::switchPartnerOne(View::STATES state) {
    std::cout << state << std::endl;
    switch (state) {
        case RED:
            std::cout << "Switched Red" << std::endl;
            ui->imgP1StopLightDriverNorth->setPixmap(*stopLightRed);
            ui->imgP1StopLightDriverSouth->setPixmap(*stopLightRed);
            break;
        case RED_ORANGE:
            std::cout << "Switched Red / Orange" << std::endl;
            ui->imgP1StopLightDriverNorth->setPixmap(*stopLightOrangeRed);
            ui->imgP1StopLightDriverSouth->setPixmap(*stopLightOrangeRed);
            break;
        case ORANGE:
            std::cout << "Switched Orange" << std::endl;
            ui->imgP1StopLightDriverNorth->setPixmap(*stopLightOrange);
            ui->imgP1StopLightDriverSouth->setPixmap(*stopLightOrange);
            break;
        case GREEN:
            std::cout << "Switched Green" << std::endl;
            ui->imgP1StopLightDriverNorth->setPixmap(*stopLightGreen);
            ui->imgP1StopLightDriverSouth->setPixmap(*stopLightGreen);
            break;
        default:
            std::cout << "Get fucked" << std::endl;
            break;
    }
}

// Switches Trafic Light Partners 2 (West and Ost facing)
void View::switchPartnerTwo(View::STATES state) {
    std::cout << state << std::endl;
    switch (state) {
        case RED:
            std::cout << "Switched Red" << std::endl;
            ui->imgP2StopLightDriverWest->setPixmap(*stopLightRed);
            ui->imgP2StopLightDriverOst->setPixmap(*stopLightRed);
            break;
        case RED_ORANGE:
            std::cout << "Switched Red / Orange" << std::endl;
            ui->imgP2StopLightDriverWest->setPixmap(*stopLightOrangeRed);
            ui->imgP2StopLightDriverOst->setPixmap(*stopLightOrangeRed);
            break;
        case ORANGE:
            std::cout << "Switched Orange" << std::endl;
            ui->imgP2StopLightDriverWest->setPixmap(*stopLightOrange);
            ui->imgP2StopLightDriverOst->setPixmap(*stopLightOrange);
            break;
        case GREEN:
            std::cout << "Switched Green" << std::endl;
            ui->imgP2StopLightDriverWest->setPixmap(*stopLightGreen);
            ui->imgP2StopLightDriverOst->setPixmap(*stopLightGreen);
            break;
        default:
            std::cout << "Get fucked" << std::endl;
            break;
    }
}

void View::sayDebugMsg(){
    std::cout << "DEBUG AAAA " << testNr << std::endl;
}

View::~View() {
    delete ui;
}
