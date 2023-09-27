#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll n,error=0;
	cin >> n;
	ll f[10005];
	memset(f,0,sizeof(f));
	for(ll i=1;i<=100;i++){
		for(ll j=1;j<=100;j++){
			for(ll k=1;k<=100;k++){
				ll x=i*i+j*j+k*k+i*j+i*k+j*k;
				if(x<=10000){
					f[x]++;
				}
			}
		}
	}
	for(ll i=1;i<=n;i++){
		cout << f[i] << endl;
	}
}