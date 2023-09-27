#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;

#define PI 4*atan(1);

int main(){
  int y;
  while(cin >> y && y){
     int b = 1000, c = 0;
    b -= y;
    for(int i = 0;; i++){
      if(b - 500 >= 0){
        b -= 500;
        c++;
        if(b == 0){
          break;
        }
      }else if(b - 100 >= 0){
        b -= 100;
        c++;
        if(b == 0){
          break;
        }
      }else if(b - 50 >= 0){
        b -= 50;
        c++;
        if(b == 0){
          break;
        }
      }else if(b - 10 >= 0){
        b -= 10;
        c++;
        if(b == 0){
          break;
        }
      }else if(b - 5 >= 0){
        b -= 5;
        c++;
        if(b == 0){
          break;
        }
      }else if(b - 1 >= 0){
        b -= 1;
        c++;
        if(b == 0){
          break;
        }
      }
    }
    cout << c << endl;
  }
}