#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int s1[2000], s2[2000];
int main() {
	int n, m;
	while (scanf("%d%d", &n, &m), n) {
		rep(i, n)scanf("%d", &s1[i + 1]);
		rep(i, m)scanf("%d", &s2[i + 1]);
		for (int i = 1; i <= n; i++)s1[i] += s1[i - 1];
		for (int i = 1; i <= m; i++)s2[i] += s2[i - 1];
		int cnt = 0;
		map<int, int>mp1, mp2;
		rep(i, n + 1)rep(j, i)mp1[s1[i] - s1[j]]++;
		rep(i, m + 1)rep(j, i)mp2[s2[i] - s2[j]]++;
		for (auto p : mp1) {
			cnt += p.second*mp2[p.first];
		}
		printf("%d\n", cnt);
	}
}