#ifndef SACK_H
#define SACK_H

#include <map>
#include <iostream>
#include <fstream>

#include "Character.h"

/// class Sack - 
class Sack : public Character
{
  // Associations
public:
Character *character;
  // Attributes
//protected:
  /// STLowa lista
public:
  std::map <int,Character*> characters;
  // Operations
public:
  Sack (std::string filename_sack);
  ~Sack ();
  std::string getCharacters (int amount);
};

#endif 
