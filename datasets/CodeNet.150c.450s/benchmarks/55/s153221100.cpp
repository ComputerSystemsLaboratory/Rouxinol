#include <iostream>
#include <string.h>

using namespace std;

int main(){
  string s;
  int ans = 0;

  while(true){
    ans = 0;
    cin >> s;
    if( s == "0"){
      break;
    }
    for( int i = 0; i < s.size(); ++i){
      ans += (int)s[i] - (int)'0';
    }
    cout << ans << endl;
  }
  return 0;
}