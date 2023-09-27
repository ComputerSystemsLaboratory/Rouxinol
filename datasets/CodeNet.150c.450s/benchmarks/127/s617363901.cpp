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
#include <queue>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <complex>
#include <fstream>
#include <stdio.h>

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<double> VEC;
typedef vector<VEC> MAT;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<int, PII> TIII;
typedef long long LL;
typedef vector<LL> VLL;

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
#define MT(a,b,c) MP(a, MP(b, c))
#define T1 first
#define T2 second.first
#define T3 second.second


//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define EPS 1e-8

set<string> ss;

int main(){
	int n;
	cin >> n;
	REP(i,n){
		string str;
		cin >> str;
		int k=str.length();
		ss.clear();
		ss.insert(str);
		REP(i,k){
			string s1, s2, rs1, rs2;
			rs1=s1=str.substr(0,i);
			rs2=s2=str.substr(i,k-i);
			reverse(rs2.begin(), rs2.end());
			reverse(rs1.begin(), rs1.end());
			ss.insert(s2+s1);
			ss.insert(rs2+s1);
			ss.insert(s2+rs1);
			ss.insert(rs2+rs1);
			ss.insert(s1+rs2);
			ss.insert(rs1+rs2);
			ss.insert(rs1+s2);
		}
		cout << ss.size() << endl;
	}
	return 0;
}