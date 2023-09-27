#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vl = vector<ll>;
using vll = vector<vector<ll>>;
using pii = pair<int,int>;
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(obj) (obj).begin(), (obj).end()
#define pb push_back
const double pi = acos(-1);
const double EPS = 1e-10;

double crosss(pair<double,double> c,pair<double,double> d){
  return c.first * d.second - d.first * c.second;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  vector<pair<double,double>> a(4);
  int n;
  pair<double,double> lineab, linecd;
  cin >> n;
  REP(i,n){
    REP(j,4){
      cin >> a[j].first >> a[j].second;
    }
    lineab.first = a[1].first - a[0].first;
    linecd.first = a[3].first - a[2].first;
    lineab.second = a[1].second - a[0].second;
    linecd.second = a[3].second - a[2].second;
    if (fabs(crosss(lineab,linecd)) < EPS) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  
  
  return 0;
}
