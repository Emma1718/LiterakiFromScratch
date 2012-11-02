#include "WordBonus.h"

WordBonus::WordBonus(int a)
{
  this->multiplier=a;
}

int WordBonus::calculate()
{
  int x = this->c.getValue();
  return x;
}

GtkWidget *WordBonus::draw(Gtk *graphic)
{
  int i = this->multiplier;
  char * str;
  
  sprintf(str, "%dx", i);
  this->button = graphic->Create_Button(str, 38, 38);
  graphic->ChangeColor(this->button,"grey");
  return this->button;
}
