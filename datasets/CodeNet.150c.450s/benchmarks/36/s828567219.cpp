#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int f(int x){
  return x*x ;
}


int main(){
  int d;
  while(cin >>d){
    int sum = 0;
    int x=0;
    while(x < 600){
      sum+=f(x)*d;
      x+= d;
    }
    cout << sum <<endl;
  }
}