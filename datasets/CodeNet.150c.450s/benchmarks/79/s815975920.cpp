//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
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
#include <climits>
#include <queue>

using namespace std;

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
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

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  while(true){
	int N, R; cin >> N >> R;
	if(N == 0 && R == 0) break;
	VI card(N+1);
	REP(i,N+1)
	  card[i] = N + 1 - i;
	REP(r,R){
	  int p, c; cin >> p >> c;
	  for(int i=0;i<c;++i){
		int tmp = card[p + i];
		for(int j=p;j>=1;--j)
		  card[i+j] = card[i+j-1];
		card[i+1] = tmp;
	  }
	  //	  for(int i=1;i<=N;++i)cout<<card[i]<<endl;cout<<endl;
	}
	cout << card[1] << endl;
  }

  return 0;
}