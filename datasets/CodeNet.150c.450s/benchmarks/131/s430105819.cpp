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
int succ(int a,int L){
  vector<int> av;
  REP(i,L) av.PB(0);
  for(int i=0;i<L;i++){
    av[i]=a%10;
    a/=10;
  }
  SORT(av);
  int answer=0;
  REP(i,L) 
    answer+=av[i]*(pow(10,i)-pow(10,L-1-i));
  return answer;
}

int main(void)
{
  for(;;){
    int firstopen[1048576]={};
    int a,L;
    cin >> a >> L;
    if(!a&&!L) return 0;
    firstopen[a]=1;
    FOR(i,2,100){
      a=succ(a,L);
      if(firstopen[a]){
	cout << firstopen[a]-1 << ' ' << a << ' ' << i-firstopen[a] << endl;
	break;
      }
      firstopen[a]=i;
    }
  }
}