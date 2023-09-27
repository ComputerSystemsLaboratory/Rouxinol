#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;

#define REP(i,n) for(int i=0; i<n; i++)

int main()
{
  int d=0;
  while(cin >> d){
    int x=d;
    int sum=0;
    while(x<600){
      sum += d*x*x;
      x += d;
    }
    cout << sum << endl;
  }
  return 0;
}