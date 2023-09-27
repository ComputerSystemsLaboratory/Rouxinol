#include <iostream>
#include<string>
using namespace std;


int main (){
  int a, b;
  string s;
  cin >> a >> b;;
  if (a <  b) s = '<';
  if (a >  b) s = '>';
  if (a == b) s = "==";
  cout << 'a' << ' ' << s << ' ' << 'b' << '\n';
}