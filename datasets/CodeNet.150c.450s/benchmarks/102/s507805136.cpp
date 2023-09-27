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
int field[32][32];
int dfs(int x,int y){
  int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};
  if(field[x][y]==0) return 0;
  field[x][y]=0;
  int answer=1;
  REP(i,4) answer += dfs(x+dx[i],y+dy[i]);
  return answer;
}
int main(void)
{
  for(;;){
    int w,h;
    cin >> w >> h;
    if(!w&&!h) return 0;
    REP(i,32) REP(j,32) field[i][j]=0;
    vector<string> fi;
    fi.resize(h);
    REP(i,h) cin >> fi[i];
    REP(i,h) REP(j,w) if(fi[i][j]!='#') field[i+5][j+5]=1;
    REP(i,h) REP(j,w) if(fi[i][j]=='@')
      cout << dfs(i+5,j+5) << endl;
  }
}