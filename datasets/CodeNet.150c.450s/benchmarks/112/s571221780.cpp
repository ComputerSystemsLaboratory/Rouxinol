#include <bits/stdc++.h>
using namespace std;

char before[70], after[70];
int n, m;

int search(char c) {
	before[n] = c;
	int i = 0;
	while (before[i] != c) i++;
	return i;
}

int main() {
	char buf;
	int ans;
	while (1){
		cin >> n;
		if (n == 0) return 0;
		for (int i = 0; i < n; i++) {
			cin >> before[i] >> after[i];
		}
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> buf;
			if ((ans = search(buf)) == n){
				printf("%c", buf);
			} else {
				printf("%c", after[ans]);
			}
		}
		printf("\n");
	}
	return 0;
}