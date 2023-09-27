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
	int a, L; cin >> a >> L;
	if(a == 0 && L == 0) break;
	
	map<int,int> mpii;
	mpii.insert(MP(a, 0));
	for(int t=1;;++t){
	  VI dig(10, 0);
	  int cnt = 0;
	  while(a>0){
		++dig[a%10];
		a /= 10;
		++cnt;
	  }
	  dig[0] += L - cnt;
	  int M = 0, m = 0;
	  for(int i=9;i>=0;--i)
		for(int j=0;j<dig[i];++j)
		  M = M * 10 + i;
	  for(int i=0;i<10;++i)
		for(int j=0;j<dig[i];++j)
		  m = m * 10 + i;
	  a = M - m;
	  map<int,int>::iterator it = mpii.find(a);
	  if(it != mpii.end()){
		cout << it->second << " " << a << " " << t - it->second << endl;
		break;
	  }
	  mpii.insert(MP(a, t));
	}
  }

  return 0;
}