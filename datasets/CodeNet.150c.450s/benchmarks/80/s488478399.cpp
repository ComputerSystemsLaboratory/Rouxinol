#include <bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 100000005
#define MAX 5001
using namespace std;
//__gcd(a,b), __builtin_popcount(a);

int main(){
	int t, a = 0, b = 0;
	for(int i = 0;i < 4;i++)scanf("%d", &t), a += t;
	for(int i = 0;i < 4;i++)scanf("%d", &t), b += t;
	printf("%d\n", max(a, b));
	return 0;
}