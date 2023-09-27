#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

char s1[10], s2[10];
char f[] = "%00d";
int main() {
	int a, l;
	while (scanf("%d%d", &a, &l), l) {
		f[2] = l + '0';
		map<int, int>mp;
		mp[a] = 0;
		for (int i = 1;; i++) {
			sprintf(s1, f, a); sort(s1, s1 + l);
			sprintf(s2, f, a); sort(s2, s2 + l, greater<>());
			a = atoi(s2) - atoi(s1);
			if (mp.find(a) != mp.end()) {
				printf("%d %d %d\n", mp[a], a, i - mp[a]);
				break;
			}
			mp[a] = i;
		}
	}
}