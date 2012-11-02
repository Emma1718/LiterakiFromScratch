#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

/// class Character - 
class Character {
  // Attributes
public:
  std::string c;
  int value;
  // Operations
public:
  Character (std::string c, int value);
  Character ();
  ~Character ();
  int getValue ();
  std::string getChar ();
};

#endif 
