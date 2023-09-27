#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cassert>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<numeric>
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
	pair<int, int> p[10000];
	for (int N, M; cin >> N >> M&&N;) {
		memset(p, 0, sizeof(p));
		for (int i = 0; i < N; i++) {
			int D, P; cin >> D >> P;
			p[i].first = P;
			p[i].second = D;
		}
		sort(p, p + 10000, greater<pair<int, int> >());

		//for (int j = 0; j < N; j++) {
		//	cout << p[j].first << " " << p[j].second << endl;
		//}

		int ans = 0;
		int i;
		for (i = 0; i < N; i++) {
			M -= p[i].second;
			if (M < 0) {
				ans += p[i].first*(-M);
				i++;
				break;
			}
		}
		for (; i < N; i++) {
			ans += p[i].first*p[i].second;
		}

		cout << ans << endl;
	}
	return 0;
}