#include <bits/stdc++.h>
using namespace std;
int main(){
  int S, s=0, m=0, h=0;
  cin >> S;
  if (S>=3600){
    h = S/3600;
    S = S%3600;
  }
  m = S/60;
  S = S%60;
  s = S;

  cout << h << ":" << m << ":" << s << endl;

  return 0;
}
