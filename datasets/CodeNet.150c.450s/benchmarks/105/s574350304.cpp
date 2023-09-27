#include<bits/stdc++.h>
using namespace std;
const int maxn = 200 + 7, maxm = 63;
int Td, n;
long long A[maxm], B[maxm];
long long a[maxn];
char s[maxn];

void insert(long long *t, long long x) {
	for (int i = 62; ~i; --i) if(x & (1ll << (long long)i)) {
		if(t[i]) x ^= t[i];
		else {
			t[i] = x;
			break;
		}
	}
	for (int i = 1; i <= 62; ++i) if(t[i]) {
		for (int j = i - 1; ~j; --j) if(t[i] & (1ll << (long long)j)) 
			t[i] ^= t[j];
	} 
}

bool check() {
	for (int i = 62; ~i; --i) {
		long long x = B[i];
		if(x == 0) continue;
		for (int j = i; ~j; --j) if(x & (1ll << (long long)j)) {
			if(!A[j]) return 0;
			x ^= A[j];
		}
	}
	return 1;
}

int main() {
	scanf("%d", &Td);
	while(Td--) {
		scanf("%d", &n);
		for (int i = 0; i <= 62; ++i) A[i] = B[i] = 0;
		for (int i = 1; i <= n; ++i) scanf("%lld", &a[i]);
		scanf("%s", s + 1);
		int fl = 1;
		for (int i = n; i >= 1; --i) {
			if(s[i] == '0') insert(A, a[i]);
			else {
				insert(B, a[i]);
				if(!check()) {
					printf("1\n");
					fl = 0;
					break;
				}
			}
		}
		if(fl) printf("0\n");
	}
	return 0;
}