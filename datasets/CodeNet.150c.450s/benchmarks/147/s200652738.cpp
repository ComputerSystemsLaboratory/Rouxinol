#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main (){
	ll n;
	cin >> n;
	for(int i=1; i<=n; i++){
		ll z=2*i,jwb=0;
		for(int j=2; j<=sqrt(z); j++){
			for(int k=2; k*k+j*j<=z; k++){
				ll l=z-j*j-k*k;
				if(l>=4 && trunc(sqrt(l))==sqrt(l)){
					ll x=(j+k+sqrt(l))/2-sqrt(l),y=(j+k+sqrt(l))/2-k,z=(j+k+sqrt(l))/2-j;
					if(x>=1 && y>=1 && z>=1)jwb++;
				}
			}
		}
		cout << jwb << endl;
	}
	
}