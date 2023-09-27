#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define ran 101101

int n, q;
int cnt[ran];

int main() {
	i64 s = 0LL;
	
	scanf("%d", &n);
	for(int i=0;i<n;i++) {
		int x;
		scanf("%d", &x);
		
		s += x;
		cnt[x] ++;
	}
	scanf("%d", &q);
	for(int i=0;i<q;i++) {
		int a, b;
		scanf("%d%d", &a, &b);
		if(a!=b) {
			cnt[b] += cnt[a];
			s += 1LL * cnt[a] * (b-a);
			cnt[a] = 0;
		}
		printf("%lld\n", s);
	}
	
	return 0;
}