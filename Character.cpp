#include "Character.h"

Character::Character(std::string c, int value)
{
  this->c = c;
  this->value = value;
}

Character::Character()
{
  this->c = '\0';
  this->value = 0;
}

Character::~Character()
{
  //
}

int Character::getValue()
{
  return this->value;
}

std::string Character::getChar()
{
  return this->c;
}

