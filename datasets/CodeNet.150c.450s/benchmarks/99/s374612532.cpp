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

string tab = "mcxi";
string encode(int x){
  string res = "";
  int d = 3;
  while(x > 0){
	int m = x % 10;
	if(m >= 1)
	  res.insert(0, string(1,tab[d]));
	if(m > 1){
	  res.insert(0, string(1,m+'0'));
	}
	x /= 10;
	--d;
  }

  return res;
}

int decode(string str){
  int st = 1;
  int res = 0;
  REP(i, SZ(str)){
	if(isdigit(str[i]))
	  st = str[i] - '0';
	else{
	  int p = 1;
	  for(int d=3;d>=0;--d){
		if(str[i] == tab[d])
		  break;
		p *= 10;
	  }
	  res += p * st;
	  st = 1;
	}
  }

  return res;
}

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  REP(t,n){
	string s1, s2; cin >> s1 >> s2;
	cout << encode(decode(s1) + decode(s2)) << endl;
	//	cout << decode(s1) + decode(s2) << endl;
  }
  return 0;
}