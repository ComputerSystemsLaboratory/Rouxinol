#include <iostream>
#include <string>
using namespace std;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)

char c2i(char c){return c-'0';}

const string key[10] = {
  "",
  ".,!? ",
  "abc",
  "def",
  "ghi",
  "jkl",
  "mno",
  "pqrs",
  "tuv",
  "wxyz"
};

void solve() {
  string s; cin>>s;
  
  int now = 0, count = 0;
  rep(i,s.size()) {
    if (s[i] == '0') {
      if (count == 0) continue;
      count--;
      count %= key[now].size();
      cout<<key[now][count];
      now = count = 0;
    } else {
      if (now == 0) {
        now = c2i(s[i]);
      }
      count++;
    }
  }
  cout<<endl;
}

int main (int argc, char const* argv[]) {
  int n; cin>>n;
  rep(i,n) solve();  
  return 0;
}