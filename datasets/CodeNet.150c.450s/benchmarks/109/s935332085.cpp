#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

#define mk(x, y) make_pair(x, y)
#define X first
#define Y second
#define SEC(h, m, s) (h * 3600 + m * 60 + s)

using namespace std;

typedef pair<int, int> pii;

int main( void )
{
	int T[10000];
	pii S[10000];
	int n;
	while(cin >> n, n) {
		fill(T, T+n, 0);
		memset(S, 0, sizeof(S));
		int ans = 0;
		for(int i=0; i < n; ++i) {
			int h1, m1, s1, h2, m2, s2;
			scanf("%d:%d:%d", &h1, &m1, &s1);
			scanf("%d:%d:%d", &h2, &m2, &s2);
			S[i].X = SEC(h1, m1, s1);
			S[i].Y = SEC(h2, m2, s2);
		}
		sort(S, S+n);
		for(int i=0; i < n; ++i) {
			for(int j=0; j < n; ++j) {
				if(T[j] <= S[i].X) {
					T[j] = S[i].Y;
					ans = max(ans, j+1);
					break;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}