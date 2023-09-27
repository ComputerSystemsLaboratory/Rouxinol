#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <numeric>
#include <cctype>

// BEGIN CUT HERE
#ifdef _MSC_VER
#include <agents.h>
#endif
// END CUT HERE 

#define FOR(i, a, b) for(int i = (a); i < (int)(b); ++i)
#define rep(i, n) FOR(i, 0, n)
#define ALL(v) begin(v), end(v)
#define REV(v) rbegin(v), rend(v)
#define MEMSET(v, s) memset(v, s, sizeof(v))
#define MP make_pair
#define MT make_tuple
#define X first
#define Y second

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;

int main(){
	ios::sync_with_stdio(false);

	set<string> st;
	int n;
	cin >> n;
	rep(i, n){
		string s;
		cin >> s;
		st.insert(s);
	}
	int m;
	cin >> m;
	int cnt = 0;
	string out[] = { "Opened by ", "Closed by " };
	rep(i, m){
		string s;
		cin >> s;
		if (st.count(s)){
			cout << out[cnt++&1];
		}
		else{
			cout << "Unknown ";
		}
		cout << s << endl;
	}

	return 0;
}