#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<map>
#include<numeric>
#include<queue>
#include<string>
#include<sstream>

using namespace std;


int main(void) {

  string str[10] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    string s;
    cin >> s;
    int cnt = 0;
    string ans = "";
    for(int j=0; j<s.size(); j++){
      if( s[j] == '0' && cnt != 0){
        // cerr << cnt << endl;
        ans += str[ s[j-1]-'0' ][ ( (cnt-1) % str[ s[j-1]-'0' ].size() ) ];
        cnt = 0;
      }else if( s[j] != '0' ) cnt++;
    }
    cout << ans << endl;
  }

  return 0;
}










//