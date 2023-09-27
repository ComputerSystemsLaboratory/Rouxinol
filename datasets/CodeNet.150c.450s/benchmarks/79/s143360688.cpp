#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <tuple>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

typedef long long LL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define DECIM8  fixed<<setprecision(8) 
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
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
    int n,r;
    deque<int> deck;
    cin >> n >> r;
    REP(i,n) deck.push_front(i+1);
    if(!n&&!r) return 0;
    REP(i,r){
      int p,c;
      cin >> p >> c;
      REP(j,c){
	deck.push_front(deck[p+c-2]);
	deck.erase(deck.begin()+p+c-1);
      }
    }
    cout << deck.front() << endl;
  }
}