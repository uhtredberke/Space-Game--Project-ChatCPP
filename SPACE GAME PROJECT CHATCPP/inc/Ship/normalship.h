//
// Created by ChatCPP on 02.03.2024
//

#ifndef SPACEGAME_NORMALSHIP_H
#define SPACEGAME_NORMALSHIP_H

#pragma once
#include "ship.h"

class normalShip : public Ship {
public:
    normalShip(int _fuel, int _health, int _balance) : Ship(_fuel, _health, _balance) {}

    int getPercEscape() const override { return 50; }
    int getAsDamage() const override { return 10; }
    int getDamage() const override { return 30; }
};
#endif //SPACEGAME_NORMALSHIP_H
