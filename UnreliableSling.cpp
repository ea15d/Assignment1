/* File: UnreliableSling.cpp
 * Author: Eric <ea15d@my.fsu.edu>
 */

#include "UnreliableSling.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

double UnreliableSling::hit(double armor)
{
  double damage;
  srand(time(NULL));
  //  std::cout << rand()%2 << std::endl;
  if (rand()%2 == 1)
    damage = hitPoints - armor;
  else
    damage = 0;

  if (damage < 0)
    return 0;
  return damage;
}
