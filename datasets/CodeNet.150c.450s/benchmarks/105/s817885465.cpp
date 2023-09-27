#include <bits/stdc++.h>

using namespace std;
const int N = 220;

long long a[N];
set <long long> dp[N];


const int LOG = 60;

long long basis[LOG];

/* https://codeforces.com/blog/entry/68953 */
bool checkXor(long long mask) {
	for (int i = 0; i < LOG; i++) {
		if ((mask & (1LL << i)) == 0) continue;
 
		if (!basis[i]) return false;
 
		mask ^= basis[i];
	}
 
	return true;
}
void insertVector(long long mask) {
	for (int i = 0; i < LOG; i++) {
		if ((mask & (1LL << i)) == 0) continue;

		if (!basis[i]) {
			basis[i] = mask;
			
			return;
		}

		mask ^= basis[i];
	}
}

int main() {
	int t;
	cin >> t;

	for (int test = 0; test < t; ++test) {
		int n;
		cin >> n;
		for (int i = 0; i < LOG; ++i) {
			basis[i] = 0;
		}

		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			dp[i].clear();
		}
		dp[n].clear();

		string s;
		cin >> s;
		
		int ok = 1;

		for (int i = n-1; i >= 0; --i) {
			if(s[i] == '0') {
				insertVector(a[i]);
			} else {
				int find = checkXor(a[i]);
				
				if(find == 0) {
					ok = 0;
				}
			}
		}
		if(ok) {
			printf("0\n");
		} else {
			printf("1\n");
		}



	}


}