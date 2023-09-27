//ordered.cpp
#include <iostream>
#include <string>
using namespace std;
int main (){
  int a, b , c;
  string s;
  cin >> a >> b >> c;
  if ((a < b) && (b < c)) s = "Yes";
  else s = "No";
  cout <<  s << endl;
}

