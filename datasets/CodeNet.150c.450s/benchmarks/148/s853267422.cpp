#include <bits/stdc++.h>
#define rep(i,x,n) for(int i=x; i<(int)(n); i++)
#define rep_eq(i,x,n) for(int i=x; i<=(int)(n); i++)
using namespace std;

using ll=long long;

int main() {
  int N; cin >>N;
  vector<string> S;
  rep(i,0,N) {
    string temp; cin >>temp;
    S.push_back(temp);
  }
  vector<string> li{"AC","WA","TLE","RE"};
  rep(i,0,li.size()) {
    cout <<li[i] <<" x " <<count(S.begin(),S.end(),li[i]) <<endl;
  }
  return 0;
}
