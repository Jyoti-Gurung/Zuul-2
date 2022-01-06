#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class room {
  public:
    room();
    void setName(char input[]);
    char* getName();
    void setItem(char input[]);
    char* getItem();
    void setId(int i);
    int getId();

  protected:
  char nameInput[21];
  char itemInput[21];
  int id;

};