#include <iostream>
#include <cstdio>
using namespace std;

int n, c[10005];
int main() {
	int i, j, k, x;
	cin >> n;
	for(i=1; i*i<=n; i++) for(j=1; j*j<=n; j++) for(k=1; k*k<=n; k++) {
		x = i*i + j*j + k*k + i*j + j*k + k*i;
		if(x<=n) c[x]++;
	}
	for(i=1; i<=n; i++) printf("%d\n", c[i]);
	return 0;
}
