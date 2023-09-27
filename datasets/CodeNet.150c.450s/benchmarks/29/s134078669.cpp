#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

char s[100];
int main() {
	int n; scanf("%d", &n);
	list<int>ls;
	rep(i, n) {
		scanf("%s", s);
		if (!strcmp(s, "insert")) {
			int x; scanf("%d", &x);
			ls.push_front(x);
		}
		else if (!strcmp(s, "delete")) {
			int x; scanf("%d", &x);
			auto it = find(ls.begin(), ls.end(), x);
			if (it != ls.end())ls.erase(it);
		}
		else if (!strcmp(s, "deleteFirst"))ls.pop_front();
		else ls.pop_back();
	}
	for (auto it = ls.begin(); it != ls.end(); it++) {
		printf("%d", *it);
		if (it != --ls.end())printf(" ");
	}
	printf("\n");
}