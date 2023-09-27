#include<bits/stdc++.h>
#define INF INT_MAX/2
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int t[100], h[100];
int main() {
	int n, m;
	while (scanf("%d%d", &n, &m), n) {
		int t_s = 0, h_s = 0;
		rep(i, n) {
			scanf("%d", &t[i]);
			t_s += t[i];
		}
		rep(i, m) {
			scanf("%d", &h[i]);
			h_s += h[i];
		}
		int s = t_s - h_s;
		int ta = INF, ha = INF;
		rep(i, n) {
			rep(j, m) {
				if ((t[i] - h[j]) * 2 == s&& t[i] + h[j] < ta + ha) {
					ta = t[i]; ha = h[j];
				}
			}
		}
		if (ta == INF) {
			puts("-1");
			continue;
		}
		printf("%d %d\n", ta, ha);
	}
}