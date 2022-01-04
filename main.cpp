/*
Author: Jyoti gurung
Date: December 14 2021
Project: Zuul; text based adventure game with 15 "rooms" & 5 items(in the whole game), picking em up and causing reactions etc
*/

#include <iostream>
#include <vector>
#include <cstring>
#include "room.h"
using namespace std;

vector <room*> storage;

void printRoom(int i);

void hi();

int main() {

  char rooms[15][12] = {
    {'M','a','i','n','d','e','c','k'},
    {'L','o','w','e','r','d','e','c','k'},
    {'F','i','g','u','r','e','h','e','a','d'},
    {'C','r','o','w','s','n','e','s','t'},
    {'S','t','o','r','a','g','e'},
    {'S','e','c','r','e','t','r','o','o','m',},
    {'R','1'},
    {'R','2'},
    {'R','3'},
    {'R','4'},
    {'R','5'},
    {'R','6'},
    {'R','7'},
    {'R','u','d','d','e','r'},
    {'P','o','o','p','d','e','c','k'}
  };

  char items[5][15] = {
    {'G','o','m','u'},
    {'S','a','b','r','e'},
    {'K','e','y'},
    {'G','o','l','d'},
    {'G','o','l','d','e','n','k','e','y'}
  };
  
  //naming the rooms
  for (int i = 0; i < 15; i++) {
    room* nameless = new room();  storage.push_back(nameless);
    (storage[i])->setName(rooms[i]);
  }

  (storage[1])->setItem(items[0]);
  (storage[8])->setItem(items[1]);
  (storage[10])->setItem(items[2]);
  (storage[13])->setItem(items[3]);
  (storage[14])->setItem(items[4]);

  //printing rooms
  /*
  for (int i = 0; i < 15; i++) {
    cout << storage[i]->getName() << endl;
  }
  */

} 

//functions for commands

void printRoom(int i) {
  cout 
  << (storage[i])->getName() << endl
  << (storage[i])->getItem() << endl
  << (storage[i])->getStatus() << endl
  ;
  
}

void hi() {
  cout << "hi";
}