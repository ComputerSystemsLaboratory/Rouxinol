// Copyright 2015 KanatoNagayama
#include <iostream>
#include <algorithm>
using std :: cout;
using std :: cin;
using std :: endl;
using std :: swap;
int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if(a > b)
    swap(a, b);

  if(b > c) {
    swap(b, c);
    if(a > b)
      swap(a, b);
  }

  cout << a << " " <<  b << " " <<  c << endl;
  return 0;
}