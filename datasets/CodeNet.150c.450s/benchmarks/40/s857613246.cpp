#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>

using namespace std;

class Dice {
  private:
   int face[6];

  public:
    int getTop();
    void setFace(int label,int value);
    void turnOver(char dir);
    void debugOut();
};

int Dice::getTop(){
  return face[0];
}

void Dice::setFace(int label,int value){
  if(label>5) return;
  face[label] = value;
}

void Dice::turnOver(char c){
  int tmp;
  if(c=='N'){
    tmp = face[0];
    face[0] = face[1]; face[1] = face[5];
    face[5] = face[4]; face[4] = tmp; // face[0]
  }

  if(c=='S'){
    tmp = face[0];
    face[0] = face[4]; face[4] = face[5];
    face[5] = face[1]; face[1] = tmp; //face[0]
  }

  if(c=='E'){
    tmp = face[0];
    face[0] = face[3]; face[3] = face[5];
    face[5] = face[2]; face[2] = tmp; //face[4]
  }

  if(c=='W'){
    tmp = face[0];
    face[0] = face[2]; face[2] = face[5];
    face[5] = face[3]; face[3] = tmp; //face[4]
  }
}

void Dice::debugOut(){
    for(int i=0;i<6;i++)
      printf("%d,",face[i]);
}

int main(){
  Dice dice;
  int l;
  char d;

  for(int i=0;i<6;i++){
      scanf("%d ",&l);
      dice.setFace(i,l);
  }
  for(;;){
     if(scanf("%c",&d)==EOF) {
       printf("%d\n",dice.getTop());
       return 0;
     }
     dice.turnOver(d);
  }
   printf("%d\n",dice.getTop());
}
