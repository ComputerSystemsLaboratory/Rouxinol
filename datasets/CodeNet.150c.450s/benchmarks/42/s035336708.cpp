#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<deque>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

int main() {
	queue< pair<string, int> > Q;

	int n, q; cin >> n >> q;
	for (int i = 0; i < n; i++) {
		string name;
		int time;
		cin >> name >> time;
		Q.push(make_pair(name, time));
	}

	int elaps = 0, a;
	for (pair<string, int>u; !Q.empty();) {
		u = Q.front(); Q.pop();
		a = min(u.second, q);
		u.second -= a;
		elaps += a;
		if (u.second > 0) {
			Q.push(u);
		}
		else {
			cout << u.first << " " << elaps << endl;
		}
	}
	return 0;
}