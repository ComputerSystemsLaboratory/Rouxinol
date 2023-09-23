#include <bits/stdc++.h>  

using namespace std;

#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
#define MOD 1e9 + 7

typedef long long ll;
typedef unsigned long long ull;
typedef pair<char, int> P;

int Vec_A[100][100], Vec_B[100];

int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	rep(i, N) rep(j, M) scanf("%d", &Vec_A[i][j]);
	rep(i, M) scanf("%d", &Vec_B[i]);
	rep(i, N) {
		int ans = 0;
		rep(j, M) ans += Vec_A[i][j] * Vec_B[j];
		printf("%d\n", ans);
	} 
	return 0;
}