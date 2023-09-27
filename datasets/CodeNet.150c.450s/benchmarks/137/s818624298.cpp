#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<(n);i++)
using namespace std;

bool b[300000000];
char c[10], s[13];
int h() {
	int a = 0, p = 1, k = strlen(s);
	rep(j, k) {
		if (s[j] == 'A')a += p;
		if (s[j] == 'G')a += p * 2;
		if (s[j] == 'C')a += p * 3;
		if (s[j] == 'T')a += p * 4;
		p *= 5;
	}
	return a;
}
int main() {
	int n; scanf("%d", &n);
	rep(i, n) {
		scanf("%s%s", c, s);
		if (!strcmp(c, "insert"))b[h()] = 1;
		else puts(b[h()] ? "yes" : "no");
	}
}