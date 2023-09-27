//smallequal.cpp
#include <iostream>
#include <string>
using namespace std;
int main (){
  int a, b;
  string s;
  cin >> a >> b;
  if (a < b) s = "a < b";
  else if (a > b) s= "a > b";
  else s="a == b";
  cout <<  s << endl;
}

