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
    int answer=0;
    int l=0,r=0;
    REP(i,n){
      string step;
      cin >> step;
      if(step=="lu") l=1;
      if(step=="ru") r=1;
      if(step=="ld") l=0;
      if(step=="rd") r=0;
      if(answer%2!=l&&answer%2!=r) answer++;
    }
    cout << answer << endl;
  }
}