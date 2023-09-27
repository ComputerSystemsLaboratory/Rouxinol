#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(void)
{
  int i,is,ip;
  string s,p,sp,ans="No";

  cin >> s;
  cin >> p;

  ip = p.size();
  is = s.size();
  sp = s + s.substr(0,ip-1);

  for(i = 0; i <= is-1; i++){
    if(p == sp.substr(i,ip))
      ans="Yes";
  }

  cout << ans << endl;

  return 0;
}