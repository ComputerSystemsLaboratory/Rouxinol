#include <iostream>
#include <stdio.h>
using namespace std;

class Dice{

private:

public:

  int num[6];

  void roll(char c){
    int b;
    if(c == 'S'){
      b = num[0];
      num[0] = num[4];
      num[4] = num[5];
      num[5] = num[1];
      num[1] = b;
    }
    if(c == 'W'){
      b = num[0];
      num[0] = num[2];
      num[2] = num[5];
      num[5] = num[3];
      num[3] = b;
    }
    if(c == 'N'){
      b = num[0];
      num[0] = num[1];
      num[1] = num[5];
      num[5] = num[4];
      num[4] = b;
    }
    if(c == 'E'){
      b = num[0];
      num[0] = num[3];
      num[3] = num[5];
      num[5] = num[2];
      num[2] = b;
    }
  }

};

int main(){
  Dice d;
  char c;
  int q, front, top;
  for(int i=0;i<6;i++) cin >> d.num[i];
  cin >> q;
  for(int i=0;i<q;i++){
    cin >> top >> front;
    if(d.num[2] == front || d.num[3] == front) d.roll('W');
    while(d.num[1] != front) d.roll('S');
    while(d.num[0] != top) d.roll('W');
    cout << d.num[2] << endl;
  }
  return 0;
}

