#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <string>
#include <algorithm>
#include <string>
#include <climits>

#define REP(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)
#define REG(i, a, b) for (int (i) = ((int)(a)); (i) < ((int)(b)); i++)
#define ALL(V) ((V).begin(), (V).end())
#define PRINT(STR) (cout << (STR) << endl)

typedef long long ll;
using namespace std;

bool isOK(int n, int h[], int a) {
	REP(i, n) {
		if (i == a) continue;
		if (h[i] != 0) return false;
	}
	return true;
}

void step(int a, int n, int* s, int h[]) {
	if (*s == 0) {
		*s = h[a];
		h[a] = 0;
	} else {
		h[a]++;
		*s -= 1;
	}
}

int main() {
	cin.tie(0); //?????±?????????????????????
	ios::sync_with_stdio(false); //printf??¨??±??????????????????
	int n, p;
	int h[51];
	while (cin >> n >> p, n + p != 0) {
		int a = 0;
		fill(h, h + 51, 0);
		while(true) {
			step(a, n, &p, h); 
			if (p == 0 && isOK(n, h, a) == true) {
				break;
			}
			a++;
			if (a == n) {
				a = 0;
			}
		}
		PRINT(a);
	}

	return 0;
}