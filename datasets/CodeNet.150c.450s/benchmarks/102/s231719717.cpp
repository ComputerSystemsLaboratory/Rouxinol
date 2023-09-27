#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <cstring>
#include <numeric>
#include <algorithm>
#include <functional>
#include <array>
#include <map>
#include <queue>
#include <limits.h>
#include <set>
#include <stack>

using namespace std;

#define Getsign(n) ((n > 0) - (n < 0))

typedef vector<int> Ivec;
typedef pair<int, int> pii;
const pii eight_Dir[4] = { //?????????
	{ 0 ,1 },
	{ -1 ,0 },{ 1 ,0 },
	{ 0 ,-1 }
};
//pii operator+ (pii a, pii b){return { a.first + b.first, a.second + b.second };}
//pii operator- (pii a, pii b) { return { a.first - b.first, a.second - b.second }; }
//pii operator* (pii a, pii b) { return{ a.first * b.first, a.second * b.second }; }
//pii operator/ (pii a, pii b) { return{ a.first / b.first, a.second / b.second }; }
//pii operator% (pii a, pii b) { return{ a.first % b.first, a.second % b.second }; }

int main() {
	int w, h;

	while (scanf("%d %d", &w, &h)) {
		if (w == 0)
			return 0;

		array<array<bool, 22>, 22> map = {}, al = {};
		queue<pii> que;
		for (int i = 1; h >= i; i++) {
			scanf("%*c");
			for (int j = 1; w >= j; j++) {
				char a;
				scanf("%c", &a);

				if (a == '@') {
					que.push({j,i});
					al[j][i] = true;
					map[j][i] = true;
				}
				else if (a == '.') {
					map[j][i] = true;
				}
			}
		}
		int cou = 0;
		while (!que.empty()) {
			pii pos = que.front();
			que.pop();
			cou++;
			for (int i = 0; 4 > i; i++) {
				if (!al[pos.first + eight_Dir[i].first][pos.second + eight_Dir[i].second] && map[pos.first + eight_Dir[i].first][pos.second + eight_Dir[i].second]) {
					al[pos.first + eight_Dir[i].first][pos.second + eight_Dir[i].second] = true;
					que.push({ pos.first + eight_Dir[i].first,pos.second + eight_Dir[i].second});
				}
			}

		}
		printf("%d\n", cou);
	}

	return 0;
}