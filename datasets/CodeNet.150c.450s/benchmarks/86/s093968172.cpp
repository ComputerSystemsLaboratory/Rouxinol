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
    int n,m,p,sum=0,div;
    cin >> n >> m >> p;
    if(!n&&!m&&!p) return 0;
    REP(i,n){
      int tmp;
      cin >> tmp;
      sum+=tmp;
      if(i+1==m) div=tmp;
    }
    if(div==0) sum=0;
    else sum=sum*(100-p)/div;
    cout << sum << endl;
  }
}