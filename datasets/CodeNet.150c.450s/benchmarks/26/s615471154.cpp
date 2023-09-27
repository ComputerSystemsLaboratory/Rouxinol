#include<iostream>
#include<string>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  string s;
  if(a>b) s = "a > b";
  else if(a==b) s = "a == b";
  else s = "a < b";
  cout << s << endl;

  return 0;
}