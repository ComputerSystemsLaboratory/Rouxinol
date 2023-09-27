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
    int n,a,b,c,x;
    cin >> n >> a >> b >> c >> x;
    if(!n&&!a&&!b&&!c&&!x) return 0;
    queue<int> y;
    REP(i,n){
      int tmp;
      cin >> tmp;
      y.push(tmp);
    }
    int answer=0;
    for(;;){
      if(answer>10000){
	answer=-1;
	break;
      }
      if(y.front()==x) y.pop();
      if(y.empty()) break;
      answer++;
      x=(a*x+b)%c;
    }
    cout << answer << endl;
  }
}