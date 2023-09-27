#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int s[100000 + 1];

int main(){
	while (1) {
		int n, k,ans=0;
		cin >> n >> k;
		if (n == 0) break;
		for (int i = 0; i < n; i++) cin >> s[i];

		for (int i = 0; i < n - k; i++) {
			int t = 0;
			for (int j = 0; j < k; j++) {
				t+=s[i+j];
			}
			ans = max(ans, t);
		}
		cout << ans << endl;
	}
	return 0;
}
