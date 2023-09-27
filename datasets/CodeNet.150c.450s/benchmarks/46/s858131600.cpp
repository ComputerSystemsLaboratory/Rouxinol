#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n, x; 
	while (cin >> n >> x, n) {
		int cnt = 0;
		for (int i = 1; i <= n; i++)
			for (int j = i + 1; j <= n; j++)
				for (int k = j + 1; k <= n; k++) {
					if (i + j + k == x)cnt++;
				}
		cout << cnt << endl;
	}
}