#include<bits/stdc++.h>
#define rep(i,n)for(ll i=0;i<n;i++)
using namespace std;
typedef long long ll;

int cnt[50];
int main() {
	int n, p;
	while (scanf("%d%d", &n, &p), n) {
		int k = p;
		memset(cnt, 0, sizeof(cnt));
		for (int i = 0;; i = (i + 1) % n) {
			if (k == 1 && cnt[i] == p - 1) {
				printf("%d\n", i);
				break;
			}
			if (k) { cnt[i]++; k--; }
			else { k = cnt[i]; cnt[i] = 0; }
		}
	}
}