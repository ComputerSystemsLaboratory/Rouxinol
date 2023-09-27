#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int mint[1000000], mink[1000000];
int main() {
	memset(mint, 0x3f, sizeof(mint));
	memset(mink, 0x3f, sizeof(mink));
	mint[0] = mink[0] = 0;
	for (int i = 1;; i++) {
		int a = i*(i + 1)*(i + 2) / 6;
		if (a >= 1000000)break;
		for (int j = a; j < 1000000; j++) {
			mint[j] = min(mint[j], mint[j - a] + 1);
			if (a & 1)mink[j] = min(mink[j], mink[j - a] + 1);
		}
	}
	int n;
	while (scanf("%d", &n), n)
		printf("%d %d\n", mint[n], mink[n]);
}