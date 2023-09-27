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
  int q, i, j, k, a, b;
  char direction[10] = {"NNNNWNNNN"};
  for(i = 0; i < 6; i++) cin >> Dice[i];
  cin >> q;
  for(i = 0; i < q; i++){
    cin >> a >> b;
    for(j = 0; j < 10; j++){
      if(Dice[1] == b) break;
      shake(direction[j]);
    }
    for(k = 0; k < 4; k++){
      if(Dice[0] == a){
        cout << Dice[2] << endl;
        break;
      }
      shake('W');
    }
  }
  return 0;
}