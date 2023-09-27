#include <bits/stdc++.h>

#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define ALL(v) (v).begin(), (v).end()
#define INF 1e9

using namespace std;

int main(){
  int n;
  cin >> n;
  REP(i, n){
    set<string> strs;
    string target;
    cin >> target;
    REP(i, target.size()){
      if(i == 0) continue;
      string suba, subb;
      suba = target.substr(0, i);
      subb = target.substr(i, target.size() - i);
      strs.insert(suba + subb);
      strs.insert(subb + suba);
      reverse(ALL(suba));
      strs.insert(suba + subb);
      strs.insert(subb + suba);
      reverse(ALL(subb));
      strs.insert(suba + subb);
      strs.insert(subb + suba);
      reverse(ALL(suba));
      strs.insert(suba + subb);
      strs.insert(subb + suba);
    }
    cout << strs.size() << endl;
  }
  return 0;
}