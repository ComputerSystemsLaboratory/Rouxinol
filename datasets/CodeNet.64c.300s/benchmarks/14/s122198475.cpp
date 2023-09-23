// Copyright 2015 KanatoNagayama
#include <iostream>
using std :: cout;
using std :: cin;
using std :: endl;

int main() {
  int a, b;
  cin >> a;
  cin >> b;
  if (a < b) 
    cout << "a < b" << endl;
  else if (a > b) 
    cout << "a > b" << endl;
  else
    cout << "a == b" << endl;
  return 0;
}