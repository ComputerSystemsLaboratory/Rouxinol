#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <algorithm>
#include <complex>
#include <array>
#include <functional>
#include <stack>
#include <iomanip>
#include <limits>
using namespace std;
#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<double> VD;

#define INF 1e+9
#define MAX_V 300

struct edge {
    int to;
    int cost;
};
using P = pair<ll, ll>;

int main(){
  ll d;cin>>d;
  vector<ll> c(26);
  vector<ll> t(d);
  vector<vector<ll>> s(d,vector<ll>(26));
  REP(i,26){cin>>c[i];}
  REP(i,d){
    REP(j,26){
      cin>>s[i][j];
    }
  }
  REP(i,d){cin>>t[i];t[i]--;}
  vector<ll> last(26,-1);
  ll score=0;
  for(int day=0;day<d;day++){
    int contest_type=t[day];
    last[contest_type]=day;
    score+=s[day][contest_type];
    for(int i=0;i<26;i++){
      score=score-c[i]*(day-last[i]);
    }
    cout<<score<<endl;
  }
  return 0;
}