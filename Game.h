#ifndef GAME_H
#define GAME_H

#include "Sack.h"
#include "Map.h"
#include "Gtk.h"
/* #include "Player.h" */
#include  "Dictionary.hpp"
#include <string>
#include <iostream>



/// class Game -
class Game {
  // Associations
   Sack* sack; 
   Gtk* graphic;
   Map* map;
  /* Player* unnamed; */
   Dictionary* dictionary;
  // Operations
public:
   Game (int argc, char *argv[], std::string filename_matrix, std::string filename_dict, std::string filename_sack);
  //~Game ();
   void  run ();
};

#endif
