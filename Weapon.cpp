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

// used cplusplus.com to obtain info on srand vvv
// http://www.cplusplus.com/reference/cstdlib/srand/
double Weapon::hit() {
  srand(time(NULL));
    return hitPoints;
}
