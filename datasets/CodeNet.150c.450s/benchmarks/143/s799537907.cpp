#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ar[100005];
ll a, b,q, c, d;

int main(){
	scanf("%lld", &a);
	ll jum = 0;
	for(int k = 1; k<= a; k++){
		scanf("%lld", &b);
		ar[b]++;
		jum+=b;
	}
	scanf("%lld", &q);
	for(int k = 1; k<= q; k++){
		scanf("%lld %lld", &c, &d);
		if(ar[c]!=0){		
		jum+= ar[c]*(d-c);
		ar[d] +=ar[c];
		ar[c] = 0;
		}
		printf("%lld\n", jum);
	}
}