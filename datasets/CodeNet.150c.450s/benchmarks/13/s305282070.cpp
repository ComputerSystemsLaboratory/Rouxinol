#include<bits/stdc++.h>
using namespace std;

int main(){
  string p, s;
  cin >> s;
  cin >> p;
  while(s.size() <= 100) s += s;
  if(s.find(p) != string::npos) cout << "Yes" << endl;
  else cout << "No" << endl;
}