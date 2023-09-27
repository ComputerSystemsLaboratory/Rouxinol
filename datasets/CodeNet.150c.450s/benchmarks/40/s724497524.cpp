#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;

class Dice{
public:
  //Dice();
  void input();
  void routen(char ch);
  int upnum(){
    return d[0];
  }
private:
  int tmp[6], d[6];
};

void Dice::input(){
  for(int i=0;i<6;i++){
    cin >> d[i];
  }
}

void Dice::routen(char ch){
  for(int i=0;i<6;i++){
    tmp[i] = d[i];
  }
  switch(ch){
    case 'E':
      d[0] = tmp[3];
      d[2] = tmp[0];
      d[3] = tmp[5];
      d[5] = tmp[2];
    break;
    case 'W':
      d[0] = tmp[2];
      d[2] = tmp[5];
      d[3] = tmp[0];
      d[5] = tmp[3];
    break;
    case 'S':
      d[0] = tmp[4];
      d[1] = tmp[0];
      d[5] = tmp[1];
      d[4] = tmp[5];
    break;
    case 'N':
      d[0] = tmp[1];
      d[1] = tmp[5];
      d[5] = tmp[4];
      d[4] = tmp[0];
    break;
  };
}

int main(){
  Dice dice;
  string str;

  dice.input();
  cin >> str;

  for(int i=0;i<str.size();i++){
    dice.routen(str[i]);
  }

  cout << dice.upnum() << endl;

  return 0;
}