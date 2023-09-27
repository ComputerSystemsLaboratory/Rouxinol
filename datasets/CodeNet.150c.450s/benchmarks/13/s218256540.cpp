#include <bits/stdc++.h>
typedef long long LL;
#define SORT(c) sort((c).begin(),(c).end())

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

using namespace std;
int main(void)
{
  string s,p;
  cin >> s >> p;
  s+=s;
  REP(i,s.size()-p.size())
    if(string(s.begin()+i,s.begin()+i+p.size())==p){
      cout << "Yes" << endl;
      return 0;
    }
  cout << "No" << endl;
  return 0;
      





}