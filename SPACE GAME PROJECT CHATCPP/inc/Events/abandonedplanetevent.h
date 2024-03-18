//
// Created by ChatCPP on 02.03.2024
//

#ifndef SPACEGAME_ABANDONEDPLANETEVENT_H
#define SPACEGAME_ABANDONEDPLANETEVENT_H

#pragma once
#include <memory>
#include "events.h"

class abandonedPlanetEvent : public Events {
public:
    void crossTheBelt(std::shared_ptr<Ship> ship) override;
    void abandonedPlanet(std::shared_ptr<Ship> ship) override ;
    void spacePirates(std::shared_ptr<Ship> ship) override;
};


#endif //SPACEGAME_ABANDONEDPLANETEVENT_H
