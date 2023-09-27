#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int f[50];
int main() {
	int n; scanf("%d", &n);
	f[0] = f[1] = 1;
	for (int i = 2; i <= n; i++)f[i] = f[i - 2] + f[i - 1];
	printf("%d\n", f[n]);
}