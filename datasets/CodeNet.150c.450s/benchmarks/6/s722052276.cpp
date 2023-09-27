// Copyright 2015 KanatoNagayama
#include <iostream>
using std :: cout;
using std :: cin;
using std :: endl;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a < b && b < c) 
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}