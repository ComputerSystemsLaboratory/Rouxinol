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

struct S{
  int w, h;
  bool operator<(const S& rhs) const{
	return (w*w+h*h < rhs.w*rhs.w+rhs.h*rhs.h)
					 || (w*w+h*h == rhs.w*rhs.w+rhs.h*rhs.h && h < rhs.h);
  }
};

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  for(;;){
	S tar;
	cin >> tar.h >> tar.w;
	if(tar.h == 0) break;
	vector<S> vs;
	for(int y=1;y<=100;++y)
	  for(int x=y+1;;++x){
		S s; s.w = x, s.h = y;
		if(tar < s){
		  vs.PB(s);
		  break;
		}
	  }
	SORT(vs);
	auto it = upper_bound(ALL(vs), tar);
	cout << it->h << " " << it->w << endl;
  }

  return 0;
}