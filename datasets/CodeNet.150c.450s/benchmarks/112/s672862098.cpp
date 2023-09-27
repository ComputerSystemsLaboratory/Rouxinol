#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <bitset>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <sstream>
#include <fstream>
//#include <tuple>
#include <set>
#include <string.h>
#include <functional>

#define X first
#define Y second
#define MP make_pair
//#define MT make_tuple
#define REP(i, a, n) for(int (i) = (a); (i) < (n); ++(i))
#define FOR(i, n) REP(i, 0, n)
typedef long long ll;
using namespace std;
const int MAX = 101;

template<class T, class U>
void convert(T &t, U &u)
{
	stringstream ss;
	ss << t;
	ss >> u;
}

int main()
{
	int n;
	while (cin >> n && n){
		map<char, char> tb;
		FOR(i, n){
			char a, b; cin >> a >> b;
			tb[a] = b;
		}

		int m; cin >> m;
		string ans;
		FOR(j, m){
			char t; cin >> t;
			if (tb.count(t)) ans.push_back(tb[t]);
			else ans.push_back(t);
		}

		cout << ans << endl;
 	}

	return 0;
}