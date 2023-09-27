#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <queue>
#include <utility>
#include <stack>
#include <vector>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
#define MOD 1e9 + 7

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

int main() {
	int m, f, r;
	while(scanf("%d %d %d", &m, &f, &r)) {
		if(m == -1 && f == -1 && r == -1) break;
		if(m == -1 || f == -1) printf("F\n");
		else {
			if(m + f >= 80) printf("A\n");
			else if(m + f >= 65 && m + f < 80) printf("B\n");
			else if(m + f >= 50 && m + f < 65) printf("C\n");
			else if(m + f >= 30 && m + f < 50) {
				if(r >= 50) printf("C\n");
				else printf("D\n");
			}
			else printf("F\n");
		}
	}
	return 0;
}