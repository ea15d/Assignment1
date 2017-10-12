/* File: UnreliableSling.h
 * Author: Eric <ea15d@my.fsu.edu>
 * October 11, 2017, 11:31 PM
 */

#include <string>
#include "Weapon.h"
#include <ctime>
#include <cstdlib>

#ifndef UNRELIABLESLING_H
#define UNRELIABLESLING_H

// this unreliable sling shot will deal a 20-90 point damage
// however aiming is quite troublesome, a 50% success rate

class UnreliableSling : public Weapon
{
 public:
 UnreliableSling() : Weapon("Unreliable sling", (rand()%70)+20) {}
  virtual ~UnreliableSling() 
    {};
  virtual double hit(double armor);
};

#endif
