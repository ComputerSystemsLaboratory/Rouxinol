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
    int getFace(int);
    void setFace(int label,int value);
    void turnOver(char dir);
    void debugOut();
};

int Dice::getTop(){
  return face[0];
}

int Dice::getFace(int i){
  return face[i];
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
    putchar('\n');
}

int main(){
  Dice dice;
  int l,n,t,f,count_n=0;

  for(int i=0;i<6;i++){
      scanf("%d ",&l);
      dice.setFace(i,l);
  }
  scanf("%d\n",&n);
  for(int i=0;i<n;i++){
     scanf("%d %d",&t,&f);
     for(;;){
       //dice.debugOut();
       if(dice.getFace(0) == t) {
        if(dice.getFace(1) == f) {
         printf("%d\n",dice.getFace(2));
         break;
        }else{
          dice.turnOver('W');
          dice.turnOver('S');
          dice.turnOver('E');
        }

      } else {
        if(count_n<3){
          dice.turnOver('N');
           count_n++;
        } else {
          count_n=0;
          dice.turnOver('E');
        }
      }
    }
  }
}

