#include<iostream>
#include<cstdio>
using namespace std;
#define int long long
signed main(){
	int a1,b1,c1,d1;
	scanf("%lld %lld %lld %lld",&a1, &b1, &c1, &d1);
	int a2,b2,c2,d2;
	scanf("%lld %lld %lld %lld",&a2, &b2, &c2, &d2);
	int ans1 = a1 + b1 + c1 + d1;
	int ans2 = a2 + b2 + c2 + d2;
	if (ans1 > ans2) cout << ans1 << endl;
	else cout << ans2 << endl;
	return 0;
}