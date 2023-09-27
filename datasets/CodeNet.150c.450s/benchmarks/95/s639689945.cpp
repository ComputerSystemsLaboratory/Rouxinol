#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
  int n;
  while(cin >> n, n){
    string s;
    map<char , int> M;
    M['l'] = 0;
    M['r'] = 0;
    bool f = false;
    int ans = 0;
    for(int i = 0; i < n; ++i){
      cin >> s;
      if(s[1] == 'u') ++M[s[0]];
      if(s[1] == 'd') --M[s[0]];
      if((!f) && M['l'] && M['r']){
	f = true;
	++ans;
      }
      if(f && M['l'] == 0 && M['r'] == 0){
	++ans;
	f = false;
      }
    }
    cout << ans << endl;
  }
  return 0;
}