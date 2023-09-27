#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i,n) cin >> s[i];
  int ac=0,wa=0,tle=0,re=0;
  rep(i,n){
    if(s.at(i)=="AC")
        ac++;
    else if(s.at(i)=="WA")
        wa++;
    else if(s.at(i)=="TLE")
        tle++;
    else if(s.at(i)=="RE")
        re++;
  }
  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
}