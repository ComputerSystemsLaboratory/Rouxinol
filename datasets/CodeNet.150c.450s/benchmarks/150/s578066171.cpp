#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	vector<int> a(n), b(n);
	int c[10010] = {0};
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		c[a[i]]++;
	}
	for(int i = 1; i < 10010; i++)
		c[i] += c[i-1];
	for(int i = n-1; i >= 0; i--) {
		b[c[a[i]]-1] = a[i];
		c[a[i]]--;
	}
	for(int i = 0; i < n - 1; i++)
		printf("%d ", b[i]);
	printf("%d\n", b[n-1]);
}

