#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;

ll ar[10005];

int main(){
	scanf("%lld", &n);
	for(int k = 1; k<= 100; k++){
		for(int s = 1; s<= 100; s++){
			for(int t = 1; t<= 100; t++){
				if(k*k + s*s + t*t + k*s + s*t + t*k <= 10000){
					ar[k*k + s*s + t*t + k*s + s*t + t*k ]++;
				}
			}
		}
	}
	for(int k = 1; k<= n; k++){
		printf("%lld\n", ar[k]);
	}
}