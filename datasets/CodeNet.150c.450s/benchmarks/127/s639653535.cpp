#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;
typedef long long LL;
static const double EPS = 1e-9;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)

int main(void){
  int m;
  cin>>m;
  string s;
  while(cin>>s){
    set<string> ans;
    FOR(i,1,s.size()){
      string s1 = s.substr(0,i);
      string s2 = s.substr(i);
      string s1r = s1;
      string s2r = s2;
      reverse(s1r.begin(),s1r.end());
      reverse(s2r.begin(),s2r.end());
      ans.insert(s1+s2);
      ans.insert(s1+s2r);
      ans.insert(s1r+s2);
      ans.insert(s1r+s2r);
      ans.insert(s2+s1);
      ans.insert(s2+s1r);
      ans.insert(s2r+s1);
      ans.insert(s2r+s1r);
    }
    cout<<ans.size()<<endl;
  }
  return 0;
}