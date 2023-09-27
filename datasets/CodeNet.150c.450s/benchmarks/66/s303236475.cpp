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
  int n;
  bool locked=true;
  cin >> n;
  set<string> names;
  REP(i,n){
    string tmp;
    cin >> tmp;
    names.insert(tmp);
  }
  cin >> n;
  REP(i,n){
    string tmp;
    cin >> tmp;
    if(names.find(tmp)==names.end())
      cout << "Unknown " << tmp << endl;
    else{
      if(locked) cout << "Opened by " << tmp << endl;
      else cout << "Closed by " << tmp << endl;
      locked=!locked;
    }
  }
  return 0;
}