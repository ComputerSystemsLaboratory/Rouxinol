// Copyright 2015 KanatoNagayama
#include <iostream>
#define HOUR 3600
#define MINUTE 60
using std :: cout;
using std :: cin;
using std :: endl;
int main() {
  int t;
  int h, m, s;
  cin >> t;
  //h t???60*60*60??§?????£??????
  h = t / HOUR;
  //m t???
  m = (t % HOUR) / MINUTE;
  //s
  s = t % MINUTE;
  cout << h << ":" << m << ":" << s << endl;
  return 0;
}