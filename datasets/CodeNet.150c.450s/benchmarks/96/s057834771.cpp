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

string str[] = {
	"",
	".,!? ",
	"abc",
	"def",
	"ghi",
	"jkl",
	"mno",
	"pqrs",
	"tuv",
	"wxyz",
};

int main(){
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	string s;
	while (n--){
		cin >> s;
		char ch = ' ';
		int cnt = 0;
		for (auto c : s){
			if (c == ch){
				++cnt;
			}else if(c == '0'){
				if (cnt) cout << str[ch-'0'][(cnt-1)%str[ch-'0'].size()];
				cnt = 0;
				ch = ' ';
			}
			else{
				ch = c;
				cnt = 1;
			}
		}
		if (cnt) cout << str[ch - '0'][(cnt - 1) % str[ch - '0'].size()];
		cout << endl;
	}


	return 0;
}