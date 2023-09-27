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
typedef pair<LL,LL> PLL;

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

const LL M1 = 1e+9+9, M2 = 1e9+7;
const LL X = 1e+6+3;

PLL f(string& s){
  PLL pll(0,0);
  REP(i,SZ(s)){
	pll.first = (pll.first * X + s[i]) % M1;
	pll.second = (pll.second * X + s[i]) % M2;
  }
  return pll;
}

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N; cin >> N;
  set<PLL> s;
  while(N--){
	string q, str;
	cin >> q >> str;
	if(q == "insert"){
	  s.insert(f(str));
	}
	else{
	  if(s.count(f(str)))
		cout << "yes" << endl;
	  else
		cout << "no" << endl;
	}
  }
  
  return 0;
}