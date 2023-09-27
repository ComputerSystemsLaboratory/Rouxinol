#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
  int x, y;
  int F[50];
  F[0] = F[1] = 1;
  for ( int i = 2; i < 50; i++ ) F[i] = F[i-1] + F[i-2];

  cin >> x;
  cout << F[x] << endl;

  return 0;
}
