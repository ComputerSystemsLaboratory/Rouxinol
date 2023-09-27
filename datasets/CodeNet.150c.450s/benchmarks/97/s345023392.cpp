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
    int n;
    cin >> n;
    if(!n) return 0;
    vector<pair<int,int> > tile;
    tile.PB(MP(0,0));
    REP(i,n-1){
      int t,d;
      cin >> t >> d;
      if(d==0) tile.PB(MP(tile[t].first-1,tile[t].second));
      if(d==1) tile.PB(MP(tile[t].first,tile[t].second+1));
      if(d==2) tile.PB(MP(tile[t].first+1,tile[t].second));
      if(d==3) tile.PB(MP(tile[t].first,tile[t].second-1));
    }
    int left=0,right=0,top=0,bottom=0;
    REP(i,SZ(tile)){
      left=min(left,tile[i].first);
      right=max(right,tile[i].first);
      top=min(top,tile[i].second);
      bottom=max(bottom,tile[i].second);
    }
    cout << right-left+1 << ' ' << bottom-top+1 << endl;
  }
}