#include<iostream>
using namespace std;

int main(){
  int s,hoge,foo;
  cin >> s;
  hoge=s/3600;
  s=s-hoge*3600;
  foo=s/60;
  s=s-foo*60;
  cout << hoge << ":" << foo << ":" << s << '\n';
  return 0;
}

