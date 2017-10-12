/* File: CrazyRandomSword.cpp
 * Author: Eric <ea15d@my.fsu.edu>
 */

#include "CrazyRandomSword.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

double CrazyRandomSword::hit(double armor)
{
  srand(time(NULL));
  int damage;
  int newarmor = armor/2;
  newarmor = rand()%newarmor;
  damage = hitPoints - newarmor;

  if (damage < 0)
    return 0;

  return damage;
}
