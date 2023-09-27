#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
  int a,b,x[10000];
  int i=0, j=0;
  char op;

  while (op != '?') {
    cin >>a >>op >>b;
    if (op == '+') {
      x[i]=a+b;
    }
    if (op == '-') {
      x[i]=a-b;
    }
    if (op == '*') {
      x[i]=a*b;
    }
    if (op == '/') {
      x[i]=a/b;
    }
    i++;
  }
  for(j=0; j<i-1; j++){
    cout << x[j] <<endl;
  }

}