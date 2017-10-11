/* File: SimpleAxe.h
 * Author: Eric <ea15d@my.fsu.edu>
 * October 11, 2:47 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

// hitpoints = 60; if armor > 0 && < 20, ignore armor points

class SimpleAxe : public Weapon
{

 public:
 SimpleAxe() : Weapon("Simple axe", 60.0) {}
  virtual ~SimpleAxe()
    {};
  virtual double hit(double armor);
  
};
#endif
