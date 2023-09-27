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
int addtax(int a,int p)
{
  return a*(p+100)/100;
}
int main(void)
{
  for(;;){
    int x,y,s;
    int answer=0;
    cin >> x >> y >> s;
    if(!x&&!y&&!s) return 0;
    FOR(i,1,s){
      FOR(j,1,s){
	if(addtax(i,x)+addtax(j,x)==s) answer=max(answer,addtax(i,y)+addtax(j,y));
      }	
    }
    cout << answer << endl;
  }
}