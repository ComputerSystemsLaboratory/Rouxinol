#include <iostream>
using namespace std;

int main(){

  string s,p;
  cin >> s >> p;
  int n=s.length();
  s = s + s;
  bool f=false;
  for(int i=0; i<n; i++){
    if(p == s.substr(i,p.length())) f = true;
  }
  if(f) cout << "Yes\n";
  else cout << "No\n";
  
}