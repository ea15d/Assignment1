/* File: CrazyRandomSword.cpp
 * Author: Eric <ea15d@my.fsu.edu>
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor)
{
  int damage;
  int newarmor = armor/2;
  newarmor = rand() % newarmor;
  damage = hitPoints - newarmor;

  if (damage < 0)
    return 0;

  return damage;
}
