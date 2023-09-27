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
int f[64][64];

int del(int i,int j)
{
  if(i<0||j<0) return 0;
  if(f[i][j]){
    f[i][j]=0;
    REP(di,3) REP(dj,3)
      del(i+di-1,j+dj-1);
    return 1;
  }
  else return 0;
}
int main(void)
{
  for(;;){
    int n,m;
    cin >> n >> m;
    if(!n&&!m) return 0;
    REP(j,m){
      REP(i,n)
	cin >> f[i][j];
    }
    int answer=0;
    REP(j,m){
      REP(i,n)
	answer+=del(i,j);
    }
    cout << answer << endl;
  }
}