#include <bits/stdc++.h>

typedef long long LL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define DECIM8  fixed<<setprecision(8) 
#define SZ(a) int((a).size())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);

//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

using namespace std;
int main(void)
{
  for(;;){
    int n,m;
    cin >> n >> m;
    if(!n&&!m) return 0;
    vector<int> t,h;
    int diff=0;
    t.resize(n);
    REP(i,n) cin >> t[i];
    REP(i,n) diff += t[i];
    h.resize(m);
    REP(i,m) cin >> h[i];
    REP(i,m) diff -= h[i];
    SORT(t);
    SORT(h);
    int st,sh;
    for(st=0,sh=0;st<n&&sh<m;){
      if(diff-(t[st]-h[sh])*2>0) ++st;
      else if(diff-(t[st]-h[sh])*2<0) ++sh;
      else{
	cout << t[st] << ' ' << h[sh] << endl;
	break;
      }
    }
    if(st<n&&sh<m) continue;
    cout << -1 << endl;
  }
}