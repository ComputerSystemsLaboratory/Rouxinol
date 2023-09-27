#include<bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < n; ++i)
#define eb emplace_back
#define all(x) x.begin(), x.end()
using namespace std;

auto convert(int a, int L) -> string {
  string res, s;
  s = to_string(a);
  while(true) {
    if(res.size() == L-s.size()) break;
    res += '0';
  }
  res += s;
  return res;
}

int memo[1000001];

int main(void){
  int a, L;
  while(cin>>a>>L, L!=0) {
    fill(memo, memo+1000000, 1e+9);
    int j = 0;
    memo[a] = 0;
    while(true) {
      j++;
      string s = convert(a, L);
      sort(s.begin(), s.end());
      string min_s = s;
      reverse(s.begin(), s.end());
      string max_s = s;

      int diff = stoi(max_s) - stoi(min_s);
      if(memo[diff]!=1e+9) {
        cout << memo[diff] << " " << diff << " " << j - memo[diff] << endl;
        break;
      }
      else {
        memo[diff] = j;
      }
      a = diff;
    }
  }

  return 0;
}