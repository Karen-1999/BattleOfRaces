//
// Created by dmitry on 10.03.18.
//

#ifndef BATTLEOFRACES_CPEASANT_H
#define BATTLEOFRACES_CPEASANT_H

#include "CWarrior.h"
#include "CFactoryWarrior.h"

class CPeasant : public CWarrior {
public:
    CPeasant() = default;
    CPeasant(WarriorID _warriorID);
    ~CPeasant() {};

    void harvestWood();
    void harvestMine();
    void build();

private:

};

#endif //BATTLEOFRACES_CPEASANT_H
