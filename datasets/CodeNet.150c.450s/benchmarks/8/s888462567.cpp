#include <bits/stdc++.h>  
 
using namespace std;
 
#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; -i)
#define INF (1 << 20)
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

int N;

int main() {
	int tp = 0, hp = 0;
	scanf("%d", &N);
	rep(i, N) {
		string t, h;
		cin >> t >> h;
		if(t > h) tp += 3;
		else if(t < h) hp += 3;
		else ++tp, ++hp;
	}
	printf("%d %d\n", tp, hp);
	return 0;
}