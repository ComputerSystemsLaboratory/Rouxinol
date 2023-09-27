#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int Dice(int n[6],string str){
  int east;
  int west;
  int sou;
  int nor;
  int g;
  g = 1;
  int t = 0;
  sou = 2;
  east = 3;
  west = 4;
  nor = 5;

  for(int i = 0;i < str.length(); i++){
    if(str[i] == 'E'){
      east = g;
      g = west;
      west = 7-east;
    }else if(str[i] == 'W'){
      west = g;
      g = east;
      east = 7-west;
    }else if(str[i] == 'N'){
      nor = g;
      g = sou;
      sou = 7-nor;
    }else{
      sou = g;
      g = nor;
      nor = 7-sou;
    }
  //cout << g << endl;
  //cout << nor << " " << sou <<" " << east <<" " << west << endl;
  }
  return n[g-1];
}

int main(void){
  int k[6];
  for(int i = 0;i < 6;i++){
    cin >> k[i];
  }
  string s;
  cin >> s;
  cout << Dice(k,s) << endl;
}
      