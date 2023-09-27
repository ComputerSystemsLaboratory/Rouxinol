#include <map>
#include <set>
#include <list>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <numeric>
#include <utility>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define INF (1 << 30)
#define INFL (1LL << 62)
#define MOD7 1000000007
#define MOD9 1000000009
#define EPS 1e-10

#define ll long long
#define ull unsigned long long
#define all(a) (a).begin(), (a).end()

int main() {
	int n;
	string s;
	set<string> st;
	cin >> n;
	cin.ignore();
	while (n--) {
		getline(cin, s);
		st.insert(s);
	}
	string t = "SHCD";
	for (int i = 0; i < 4; ++i) {
		for (int j = 1; j <= 13; ++j) {
			string f = string(1, t[i]) + " " + to_string(j);
			if (st.find(f) == st.end())
				cout << f << endl;
		}
	}

	return 0;
}
