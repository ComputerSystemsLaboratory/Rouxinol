#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

char t[20], s[20];
int main() {
	int n; scanf("%d", &n);
	set<string>se;
	rep(i, n) {
		scanf("%s%s", t, s);
		if (!strcmp(t, "insert"))se.insert(s);
		else
			puts(se.find(s) != se.end() ? "yes" : "no");
	}
}