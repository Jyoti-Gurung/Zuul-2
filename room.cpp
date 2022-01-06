#include <iostream>
#include <vector>
#include <cstring>
#include "room.h"
using namespace std;

room::room() {
  
}

void room::setName(char input[]) {
  for (int i = 0; i < strlen(input); i++) {
    nameInput[i] = input[i];
  }
}

char*room::getName() {
  char* str = nameInput;
    for (int i = 0; i < strlen(nameInput); i++) {
      str[i] = nameInput[i];
    }
    return str;
}

void room::setItem(char input[]) {
  for (int i = 0; i < strlen(input); i++) {
    itemInput[i] = input[i];
  }
}

char*room::getItem() {
  char* str = itemInput;
    for (int i = 0; i < strlen(itemInput); i++) {
      str[i] = itemInput[i];
    }
    return str;
}

void room::setId(int input) {
  id = input;
}

int room::getId() {
  return id;
}
