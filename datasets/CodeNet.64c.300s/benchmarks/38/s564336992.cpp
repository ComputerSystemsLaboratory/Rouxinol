#include <bits/stdc++.h>  

using namespace std;

#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; -i)
#define INF (1 << 30)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

int n;
int ball[11] = {0};

bool solve(int a, int b, int c) {
	if(c == 10) return true;
	if(a < ball[c]) 
		if(solve(ball[c], b, c + 1)) return true;
	if(b < ball[c])	
		if(solve(a, ball[c], c + 1)) return true;
	return false;

}

int main() {
	scanf("%d", &n);
	rep(i, n) {
		rep(j, 10) scanf("%d", &ball[j]);
		printf("%s\n", (solve(0, 0, 0)) ? "YES" : "NO");
	}
	return 0;
}