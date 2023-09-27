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
int day(int y,int m,int d)
{
  //200,195,195 -> 590
  int y1[3]={0,200,395};
  int answer=0;
  answer+=y/3*590;
  answer+=y1[y%3];
  if(y%3) answer+=(m-1)*19+m/2;
  else answer+=(m-1)*20;
  answer+=d;
  return answer;
}

int main(void)
{
  int n;
  cin >> n;
  REP(i,n){
    int y,m,d;
    cin >> y >> m >> d;
    cout << day(1000,1,1)-day(y,m,d) << endl;
  }
  return 0;
}