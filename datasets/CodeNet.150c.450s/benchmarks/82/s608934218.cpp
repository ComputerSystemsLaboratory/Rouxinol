#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int Dice(int n[6],int a,int b){
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
  string str;
  if (a == sou){
    str = 'N';
  }else if(a == east){
    str = 'W';
  }else if(a == west){
    str = 'E';
  }else if(a == nor){
    str = 'S';
  }else if(a == 6){
    str = "NN";
  }else{
    str = 'Y';
  }

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
    }else if(str[i] == 'S'){
      sou = g;
      g = nor;
      nor = 7-sou;
    }else{
    }
  }
  for(int i = 0; i < 4;i++){
    if(b == sou){
      break;
    }
    int temp = nor;
    nor = east;
    east = sou;
    sou = west;
    west = temp;
  }
  return n[east-1];
}

int main(void){
  int k[6];
  for(int i = 0;i < 6;i++){
    cin >> k[i];
  }
  int q;
  cin >> q;
  int a,b;
  for(int i = 1; i <= q;i++){
    cin >> a >> b;
    for(int j = 0;j < 6;j++){
      if(a == k[j]){
        a = j+1;
      }
      if(b == k[j]){
        b = j+1;
      }
    }
    cout << Dice(k,a,b) <<  endl;
  }
}
      