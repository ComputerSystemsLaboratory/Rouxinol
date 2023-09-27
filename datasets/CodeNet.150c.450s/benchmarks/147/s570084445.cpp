#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[6*n];
	
	memset(a,0,sizeof(a));
	
	for (int i=1; i<=int(sqrt(n)); ++i)
		for (int j=1; j<=n; ++j)
			for (int k=1; k<=int(sqrt(n)); ++k) {
				int v = i*i+j*j+k*k+i*j+j*k+i*k;
				if (v <= n) a[v]++;
			}
	for (int i=1; i<=n;++i) cout << a[i] << endl;
		
}