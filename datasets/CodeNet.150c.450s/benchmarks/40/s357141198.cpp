#include <bits/stdc++.h>
#define TOP 0
#define FRONT 1
#define LEFT 2
#define RIGHT 3
#define BACK 4
#define BOTTOM 5
using namespace std;

//TOP,FRONT,LEFT,RIGHT,BACK,BOTTOM
int dice[6]={1,2,4,3,5,6};

void rotN(){
  swap(dice[TOP],dice[FRONT]);
  swap(dice[FRONT],dice[BOTTOM]);
  swap(dice[BOTTOM],dice[BACK]);
}

void rotS(){rotN(),rotN(),rotN();}


void rotE(){
  swap(dice[TOP],dice[LEFT]);
  swap(dice[LEFT],dice[BOTTOM]);
  swap(dice[BOTTOM],dice[RIGHT]);
}

void rotW(){rotE(),rotE(),rotE();}


void rotCW(){
  swap(dice[FRONT],dice[RIGHT]);
  swap(dice[RIGHT],dice[BACK]);
  swap(dice[BACK],dice[LEFT]);
}

void rotCCW(){rotCW(),rotCW(),rotCW();}


int main(){
  cin>>dice[TOP]>>dice[FRONT]>>dice[RIGHT];
  cin>>dice[LEFT]>>dice[BACK]>>dice[BOTTOM];
  
  string str;
  cin>>str;
  for(int i=0;i<str.size();i++){
    if(str[i]=='N') rotN();
    if(str[i]=='S') rotS();
    if(str[i]=='E') rotE();
    if(str[i]=='W') rotW();
  }

  cout << dice[TOP]<<endl;
  
}