#include <bits/stdc++.h>
using namespace std;

const int INF = 1e+9 * 2;
double eps = 1e-10;

int main() {
	int n[128] = {0}, c = 0, maxim = 0;
	while(cin >> n[c++]);
	int cnt[128] = {0};
	for(int i = 0; i < c; ++i)
		cnt[n[i]]++;
		
	for(int i = 0; i <= 100; ++i)
		if(maxim < cnt[i])
			maxim = cnt[i];
	for(int i = 0; i <= 100; ++i)
		if(maxim == cnt[i])
			cout << i << endl;
	
	return 0;
}