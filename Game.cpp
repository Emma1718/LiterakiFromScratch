#include "Game.h"

using namespace std;

Game::Game(int argc, char *argv[], string filename_matrix, string filename_dict, string filename_sack )
{
  this->graphic = new Gtk(argc, argv);
  this->map = new Map(this->graphic,filename_matrix);
  //this->dictionary = new Dictionary(filename_dict);
  //this->sack = new Sack(filename_sack);

  /*string buffer;
  buffer=this->sack->getCharacters(6);
  cout<<buffer<<endl;*/

  /*if (this->dictionary->checkWord("tata")) 
	cout<<"TAK"<<endl; 
  else 
	cout<<"NIE"<<endl;
  if (this->dictionary->checkWord("jkjslash")) 
	cout<<"TAK"<<endl; 
  else 
	cout<<"NIE"<<endl;*/
  cout<<"haha"<<endl;
}

void Game::run()
{
  this->graphic->run();
}
