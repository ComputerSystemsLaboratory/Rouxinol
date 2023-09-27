#include <bits/stdc++.h>
using namespace std;

int main(){
  string w; cin >> w;
  string s;
  int cnt = 0;
  while(cin >> s){
    if(s == "END_OF_TEXT") break;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if(s == w) cnt++;
  }
  cout << cnt << endl;
}

