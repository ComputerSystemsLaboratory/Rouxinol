#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#define ll long long
using namespace std;
const int maxn = 1e5 + 10;
int a[maxn];
int n, k;
int check(int p) {
	int i = 0;
	int temp = 0, nk = k-1;
	for (i = 0; i < n; i++) {
		if (temp + a[i] <= p) {
			temp += a[i];
		}
		else if(nk>0&&a[i]<=p){
			temp = a[i];
			nk--;
		}
		else {
			return i;
		}
	}
	return i+1;
}
int main() {
//	freopen("input.txt", "r", stdin);
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int l = 0, r = 1e9;
	while (l < r -1) {
		int m =(r+l)/2;
		if (check(m) >= n) {
			r = m;
		}
		else {
			l = m;
		}
	}
	printf("%d\n", r);
	return 0;
}