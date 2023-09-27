#include<iostream>
#include<string>
using namespace std;

class Dice{
public:
  int face[6];
  Dice(){}

  void roll_x(){ roll(0,3,5,2);}
  void roll_y(){ roll(0,1,5,4);}
  void roll_z(){ roll(1,2,4,3);}
  void roll(int i, int j, int k, int l){
    int t = face[i]; face[i] = face[j]; face[j] = face[k]; face[k] = face[l]; face[l] = t;
  }

  void move(char ch){
    if (ch == 'S'){
      for(int i = 0; i < 3; i++) roll_y();
    }
    else if (ch == 'W'){
      for(int i = 0; i < 3; i++) roll_x();
    }
    else if (ch == 'N'){
      roll_y();
    }
    else if (ch == 'E'){
      roll_x();
    }
  }
};

int main(){
  Dice d1;
  for(int i = 0; i < 6; i++){
    cin >> d1.face[i];
  }

  int q, up, front;
  cin >> q;
  for(int i = 0; i < q; i++){
    cin >> up >> front;

    for(int j = 0; j < 6; j++){
      for(int k = 0; k < 4; k++){
        if( d1.face[0] == up && d1.face[1] == front) break;
        d1.roll_z();
      }

      if( d1.face[0] == up && d1.face[1] == front) break;
      if (j == 2) d1.roll_y();
      else d1.roll_x();
    }

  cout << d1.face[2] << endl;
  }

  return 0;
}