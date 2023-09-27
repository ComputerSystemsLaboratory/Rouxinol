#include <iostream>
using namespace std;
#include <stdio.h>
#include <math.h>

int digit(int d){
  return (int)log10((double)d) + 1;
}

int main(){
  int a,b;
  
  while( scanf("%d %d",&a,&b) != EOF ){
    int dig = digit(a+b);
    cout << dig << endl;
  }
  
  return 0;
}