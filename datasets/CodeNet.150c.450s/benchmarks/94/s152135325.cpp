//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
#include <queue>

using namespace std;

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);

int merge(VI& a, int s1, int s2, int t){
  int i, j, res = 0;
  VI tmp;
  for(i=s1,j=s2;i<s2&&j<t;){
	if(a[i] > a[j]){
	  tmp.PB(a[j++]);
	  res += s2-s1-(i-s1);
	}
	else{
	  tmp.PB(a[i++]);
	}
  }
  while(i<s2) tmp.PB(a[i++]);
  while(j<t) tmp.PB(a[j++]);

  for(i=s1;i<t;++i)
	a[i] = tmp[i-s1];
  return res;
}

int sort(VI& a, int s, int t){
  if(s+1 >= t) return 0;
  int m = (s + t) / 2, res = 0;
  res += sort(a, s, m);
  res += sort(a, m, t);
  res += merge(a, s, m, t);
  return res;
}


int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  VI a(N); REP(i,N) cin >> a[i];
  int ans = sort(a, 0, N);

  cout << a[0];
  REP(i,N-1) cout << " " << a[i+1];
  cout << endl;

  cout << ans << endl;
  
  return 0;
}