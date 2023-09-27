#include<iostream>
#include <string>
using namespace std;

int main(){
  int dice[7], temp;
  string order;

  cin
    >> dice[1]
    >> dice[2]
    >> dice[3]
    >> dice[4]
    >> dice[5]
    >> dice[6];

  cin >> order;

  for(int i = 0; i < 101; i++){
    if(order[i] == '\0') break;
    else if(order[i] == 'N'){
      temp = dice[5];
      dice[5] = dice[1];
      dice[1] = dice[2];
      dice[2] = dice[6];
      dice[6] = temp;
    }
    else if(order[i] == 'S'){
      temp = dice[2];
      dice[2] = dice[1];
      dice[1] = dice[5];
      dice[5] = dice[6];
      dice[6] = temp;
    }
    else if(order[i] == 'W'){
      temp = dice[1];
      dice[1] = dice[3];
      dice[3] = dice[6];
      dice[6] = dice[4];
      dice[4] = temp;
    }
    else if(order[i] == 'E'){
      temp = dice[1];
      dice[1] = dice[4];
      dice[4] = dice[6];
      dice[6] = dice[3];
      dice[3] = temp;
    }
  }

  cout << dice[1] << endl;

  return 0;
}