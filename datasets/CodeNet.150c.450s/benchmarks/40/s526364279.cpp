#include<iostream>
using namespace std;

int Dice[6];

void shake(char c){
  if(c == 'E'){
    swap(Dice[0], Dice[3]);
    swap(Dice[3], Dice[5]);
    swap(Dice[5], Dice[2]);
  }
  if(c == 'N'){
    swap(Dice[0], Dice[1]);
    swap(Dice[1], Dice[5]);
    swap(Dice[5], Dice[4]);
  }
  if(c == 'S'){
    swap(Dice[1], Dice[0]);
    swap(Dice[0], Dice[4]);
    swap(Dice[4], Dice[5]);
  }
  if(c == 'W'){
    swap(Dice[3], Dice[0]);
    swap(Dice[0], Dice[2]);
    swap(Dice[2], Dice[5]);
  }
}

int main(){
  int i;
  char c;
  for(i = 0; i < 6; i++){
    cin >> Dice[i];
  }
  while(cin >> c) shake(c);

  cout << Dice[0] << endl;
  return 0;
}