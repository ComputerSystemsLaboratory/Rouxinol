#include "bits/stdc++.h"

#define REP(i, n) for(decltype(n) i = 0; i < (n); i++)
#define REP2(i, x, n) for(decltype(x) i = (x); i < (n); i++)
#define REP3(i, x, n) for(decltype(x) i = (x); i <= (n); i++)
#define RREP(i, n) for (decltype(n) i = (n) - 1;i >= 0; i--)

#define ALL(a) (a).begin(),(a).end()
#define SORT(c) sort((c).begin(),(c).end())
#define DESCSORT(c) sort(c.begin(), c.end(), greater<int>())

#define LL long long int
#define LD long double

#define INF 1000000000
#define PI 3.14159265358979

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

// N, E, S, W
const int dx[4] = { -1, 0,  1,  0 };
const int dy[4] = { 0, 1,  0, -1 };

typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<LL> vll;
//==============================================

int main() {
	/*
	ios::sync_with_stdio(false);
	cin.tie(0);
	*/

	list<int> li;
	int n;
	scanf("%d", &n);

	int x;
	char c[20];
	REP(i, n) {
		scanf("%s", &c);

		if (c[0] == 'i') {
			scanf("%d", &x);
			li.push_front(x);
		} else if (c[6] != 'F' && c[6] != 'L') {
			scanf("%d", &x);
			auto it = li.begin();
			while (it != li.end()) {
				if (*it == x) {
					it = li.erase(it);
					break;
				}
				it++;
			}
		} else if (c[6] == 'F') {
			li.pop_front();
		} else if (c[6] == 'L') {
			li.pop_back();
		}
	}

	auto it = li.begin();
	if (it != li.end()) {
		printf("%d", *it);
		it++;
	}
	while (it != li.end()) {
		printf(" %d", *it);
		it++;
	}

	printf("\n");
	return 0;
}