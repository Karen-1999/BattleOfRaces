//
// Created by dmitry on 11.03.18.
//

#include "CCatapult.h"

const int StartLevel = 1;

const int CatapultSpeed = 2;
const int CatapultAttackDistance = 2;
const int CatapultHealth = 300;
const int CatapultPower = 150;

CCatapult::CCatapult(WarriorID _warriorID) {
    switch (_warriorID) {
        case HumanCatapult: {
            Health = CatapultHealth;
            Power = CatapultPower;
            Speed = CatapultSpeed;
            Level = StartLevel;
            AttackDistance = CatapultAttackDistance;
            break;
        }

        case OrcCatapult: {
            Health = CatapultHealth;
            Power = CatapultPower;
            Speed = CatapultSpeed;
            Level = StartLevel;
            AttackDistance = CatapultAttackDistance;
            break;
        }

        case ElfCatapult: {
            Health = CatapultHealth;
            Power = CatapultPower;
            Speed = CatapultSpeed;
            Level = StartLevel;
            AttackDistance = CatapultAttackDistance;
            break;
        }
    }
}

int CCatapult::getAttackRadius() {
    return AttackRadius;
}

void CCatapult::setAttackRadius(int _attackRadius) {
    AttackRadius = _attackRadius;
}
