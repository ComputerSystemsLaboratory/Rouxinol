#include<iostream>
#include<string>
using namespace std;

class Dice{
public:
  int face[6];
  Dice(){}

  void roll_x(){ roll(0,3,5,2);}
  void roll_y(){ roll(0,1,5,4);}
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
  string dir;
  Dice d1;
  for (int i = 0; i < 6; i++){
    cin >> d1.face[i];
  }
  cin >> dir;

  for (int i = 0; i < dir.size(); i++){
    d1.move(dir[i]);
  }

  cout << d1.face[0] <<endl;

  return 0;
}