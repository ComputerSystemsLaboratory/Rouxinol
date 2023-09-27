#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  string W; cin >> W;
  transform(W.begin(), W.end(), W.begin(), ::toupper);  
  string T;
  int ans = 0;
  while(cin >> T, T!="END_OF_TEXT"){
    transform(T.begin(), T.end(), T.begin(), ::toupper);  
    if(W==T) ans++;
  }
  cout << ans << endl;
}