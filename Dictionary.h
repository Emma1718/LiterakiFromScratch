#ifndef DICTIONARY
#define DICTIONARY

#include <iostream>
#include <fstream>
#include <set>

using namespace std;

/// class Dictionary - 
class Dictionary
{
  // Attributes
  std::set <string> words;

  // Operations
public:
  Dictionary(std::string filename_dict);
  bool checkWord(std::string word);
};

#endif
