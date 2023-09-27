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
  bool prime[1048576];
  REP(i,1048576) prime[i]=true;
  prime[0]=false;
  prime[1]=false;
  REP(i,sqrt(1048576)+10){
    if(prime[i]) for(int j=i*i;j<1048576;j+=i) prime[j]=false;
  }
  for(;;){
    int a,d,n;
    cin >> a >> d >> n;
    if(!a&&!d&&!n) return 0;
    int answer=a;
    while(n--){
      while(!prime[answer]) answer+=d;
      answer+=d;
    }
    cout << answer-d << endl;
  }
}