#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main(){

  int a, b;
  
  while( cin >> a){
    int count=0;
    cin >> b;
    double x = a + b;

    while(1){
      x = x / 10;
      count++;
      if(x < 1) break;
    }
    cout << count << endl;
  }
   
  
  return 0;
}