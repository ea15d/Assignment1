/* 
 * File:   Weapon.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */ 

#include "Weapon.h"
#include <cstdlib>
#include <ctime>

std::string Weapon::getName() {
    return name;
}

double Weapon::hit() {
  srand(time(NULL));
    return hitPoints;
}
