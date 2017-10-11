/* File: CrazyRandomSword.h
 * Author: Eric <ea15d@my.fsu.edu>
 * October 11, 2017 3:47 PM
 */

#include <string>
#include "Weapon.h"
#include <cstdlib>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

// hitpoints = random integer number b/t 10 and 100.
// ignores a random amount of interger armor points (0-1/2armor).

class CrazyRandomSword : public Weapon
{
 public:

 CrazyRandomSword() : Weapon("Crazy random sword", (rand()%90)+10 ) {}
  virtual ~CrazyRandomSword() 
    {};
  virtual double hit(double armor);
};

#endif
