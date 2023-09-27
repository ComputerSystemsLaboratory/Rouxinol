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
    vector<int> len;
    len.assign(11,0);
    REP(i,n){
      int d,p;
      cin >> d >> p;
      len[p]+=d;
    }
    for(int i=10;i>0;i--){
      int g=min(m,len[i]);
      m-=g;
      len[i]-=g;
    }
    int answer=0;
    REP(i,11) answer+=len[i]*i;
    cout << answer << endl;
  }
}