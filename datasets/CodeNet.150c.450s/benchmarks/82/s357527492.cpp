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
  int find(int, int);
private:
  int tmp[6], d[6];
};

void Dice::input(){
  for(int i=0;i<6;i++){
    cin >> d[i];
  }
}

int Dice::find(int up, int forward){
  char v[5] = "SSSW";
  for(int k=0;k<7;k++){
    for(int i=0;i<4;i++){
      if(d[0] == up && d[1] == forward){
        return d[2];
      }else if(d[1] == up && d[0] == forward){
        return d[3];
      }
      routen(v[i]);
    }
  }
  return 0;
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
  int N, forward, up;
  vector<int> v;

  dice.input();
  cin >> N;

  for(int i=0;i<N;i++){
    cin >> up >> forward;
    v.push_back(dice.find(up, forward));
  }

  for(int i=0;i<N;i++){
    cout << v[i] << endl;
  }

  return 0;
}