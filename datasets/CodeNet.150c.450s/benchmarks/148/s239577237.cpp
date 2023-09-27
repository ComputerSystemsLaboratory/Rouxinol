#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<iomanip>
#include<bitset>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef pair<ll,P> P1;
typedef pair<P,P> P2;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 1000000000
#define fi first
#define sc second
#define rep(i,x) for(ll i=0;i<x;i++)
#define repn(i,x) for(ll i=1;i<=x;i++)
#define SORT(x) sort(x.begin(),x.end())
#define ERASE(x) x.erase(unique(x.begin(),x.end()),x.end())
#define POSL(x,v) (lower_bound(x.begin(),x.end(),v)-x.begin())
#define POSU(x,v) (upper_bound(x.begin(),x.end(),v)-x.begin())

const int MAX = 510000;
const int MOD = 1000000007;

int main(){
  ll N; cin >> N;
  map<string , ll> m;

  rep(i,N){
    string s; cin >> s;
    m[s]++;
  }

  cout << "AC" << " " << "x" << " " << m["AC"] << endl;
  cout << "WA" << " " << "x" << " " << m["WA"] << endl;
  cout << "TLE" << " " << "x" << " " << m["TLE"] << endl;
  cout << "RE" << " " << "x" << " " << m["RE"] << endl;
}
