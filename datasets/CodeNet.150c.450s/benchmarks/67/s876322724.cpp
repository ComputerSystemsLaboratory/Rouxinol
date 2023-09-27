#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int sum(int i) {
	return (1 + i)*i / 2;
}
int main() {
	int n;
	while (scanf("%d", &n), n) {
		int cnt = 0;
		for (int i = 0; i <= n; i++) {
			for (int j = i + 2; j <= n; j++) {
				if (sum(j) - sum(i) == n)cnt++;
			}
		}
		printf("%d\n", cnt);
	}
}