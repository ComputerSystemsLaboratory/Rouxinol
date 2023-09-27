#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <stdio.h>
#define MAXSIZE 101
#define PI 3.141592653589
using namespace std;

class Dice{
public:
  Dice(){}
  int face[7];
  void move(char s){
    if(s=='S'){
      int tmp;
      tmp=face[1];
      face[1]=face[5];
      face[5]=face[6];
      face[6]=face[2];
      face[2]=tmp;
    }else if(s=='E'){
      int tmp;
      tmp=face[1];
      face[1]=face[4];
      face[4]=face[6];
      face[6]=face[3];
      face[3]=tmp;
    }else if(s=='N'){
      int tmp;
      tmp=face[1];
      face[1]=face[2];
      face[2]=face[6];
      face[6]=face[5];
      face[5]=tmp;
    }else if(s=='W'){
      int tmp;
      tmp=face[1];
      face[1]=face[3];
      face[3]=face[6];
      face[6]=face[4];
      face[4]=tmp;
    }
  }
};

int main(){
    Dice dice1;
    for(int i=1;i<=6;i++){
      std::cin >> dice1.face[i];
    }
    char c[100];
    std::cin >> c;
    for(int i=0;;i++){
      if(c[i]=='S'||c[i]=='E'||c[i]=='N'||c[i]=='W'){
        dice1.move(c[i]);
      }else{
        break;
      }
    }

    std::cout << dice1.face[1] << '\n';


}