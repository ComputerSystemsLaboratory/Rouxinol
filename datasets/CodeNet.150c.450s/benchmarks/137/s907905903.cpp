#include <iostream>
#include <algorithm>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <cstdlib>
#include <list>
#include <cmath>
#include <map>
#include <utility>
#include <numeric>
#include <set>
#include <map>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define INF 999999999
#define atcoder 1e9+7

using namespace std;

int main() {

	set<string>s;
	string s1, s2;
	int n;

	cin >> n;

	REP(i, n) {
		cin >> s1 >> s2;
		if (s1 == "insert")
			s.insert(s2);
		else if (s1 == "find") {
			if (s.find(s2) != s.end())cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}

	return 0;
}