#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

int main() {
	int a;
	while (scanf("%d", &a), a) {
		int coin[] = { 500,100,50,10,5,1 };
		a = 1000 - a;
		int cnt = 0;
		rep(i, 6) {
			while (a - coin[i] >= 0) {
				a -= coin[i];
				cnt++;
			}
			if (a == 0)break;
		}
		printf("%d\n", cnt);
	}
	return 0;
}