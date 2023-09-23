#include <bits/stdc++.h>
using namespace std;

const int INF = 1e+9 * 2;

int main() {
	int n;
	while(cin >> n && n){
		int a[5010] = {0};
		for(int i = 0; i < n; ++i)
			scanf("%d", &a[i]);
		int ans = -INF;
		for(int i = 0; i < n; ++i){
			int sum = 0;
			for(int j = i; j < n; ++j){
				sum += a[j];
				if(ans < sum)
					ans = sum;
			}
		}
		cout << ans << endl;
	}
	return 0;
}