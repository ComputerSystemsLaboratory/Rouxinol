#include <iostream>
using namespace std;

string small(string s){
  for(int i=0; i<s.length(); i++)
    if('A' <= s[i] && s[i] <= 'Z') s[i] += 32;
  return s;
}

int main(){
  string w,s;
  cin >> w;
  w = small(w);
  int ans=0;
  while( cin >> s ){
    if(s == "END_OF_TEXT") break;
    if(w == small(s)) ans++;
  }
  cout << ans << endl;
}