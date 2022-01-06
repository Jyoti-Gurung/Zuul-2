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

void printRoom(int i);
void printInventory();
void pickUp();

vector <room*> storage;

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
  {'$','$'},
  {'K','e','y'},
  {'G','o','m','u'},
  {'S','a','b','r','e'},
  {'G','o','l','d','k','e','y'}
};

//store picked up items
char inventory[5][15] = {
  {'x'},
  {'x'},
  {'x'},
  {'x'},
  {'x'}
};

//keep track of the current room
int currentRoom = 12;

//THE INFINITE LOOP OF TRAVEL, MAIN FUNCTION
int main() {

  //adding the rooms to the storage vector
  for (int i = 0; i < 15; i++) {
    room* nameless = new room();  storage.push_back(nameless);
    (storage[i])->setName(rooms[i]);
  }
  
  //setting numbers to the rooms
  for (int i = 0; i < 15; i++) {
    (storage[i])->setId(i);
  }

  //setting rooms empty
  char empty[1] = {'x'};
  for (int i = 0; i < 15; i++) {
    (storage[i])->setItem(empty);
  }

  //assigning items to rooms
  (storage[4])->setItem(items[0]);
  (storage[13])->setItem(items[1]);
  (storage[1])->setItem(items[2]);
  (storage[3])->setItem(items[3]);
  (storage[12])->setItem(items[4]);

  cout << endl << "Commands:" << endl << 
  endl << "1: Left" <<
  endl << "2: Right" <<
  endl << "3: Up" <<
  endl << "4: Down" <<
  endl << "5: Pick up Item" <<
  endl << "6: Print Inventory" <<
  endl << "7: Quit game" << endl;

  printRoom(currentRoom);

  int logic;
  while (logic != 7) {

    cout << endl;
    cin >> logic;
    switch(logic) {
      case 1:
        
        break;
      case 2:
        
        break;
      case 3:
        
        break;
      case 4:

        break;
      case 5:
      pickUp();
        break;
      case 6:
      printInventory();
        break;
    }
  }

} 

//functions for commands

void printRoom(int i) {
  cout 
  << endl 
  << (storage[i])->getName() << endl
  << "Item: " << (storage[i])->getItem() 
  << endl << "Room #: " << (storage[i])->getId() 
  << endl;  
}

void printInventory() {
  
  cout << endl << "Inventory:" << endl;

  for (int i = 0; i < 5; i++){
    cout << inventory[i] << endl;
  }
}

void pickUp() {

  int currentItem = strlen((storage[currentRoom])->getItem()); 
  int itemOrder;

  switch(currentItem) {
    case 2:
      itemOrder = 0;
      break;
    case 3:
      itemOrder = 1;
      break;
    case 4:
      itemOrder = 2;
      break;
    case 5:
      itemOrder = 3;
      break;
    case 7:
      itemOrder = 4;
      break;
  }

  for (int i = 0; i < 5; i++){
    if (strcmp(inventory[i], "x") == false) {
      for (int a = 0; a < currentItem; a++){
        inventory[i][a]=items[itemOrder][a];
      }
      cout << endl << (storage[currentRoom])->getItem()  << " picked up!" << endl;
      break;
    }
  }

}