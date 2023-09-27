#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

	ll n;

	cin >> n;
	vector<ll> v(10001);
	ll val;
	for(int i = 1; i <= 100; i++){
		for(int j = 1; j <= 100; j++){
			for(int k = 1; k <= 100; k++){
				val = i*i + j*j + k*k + i*j + j*k + k*i;
				if(val > 10000){
					break;
				}
				v[val]++;		
			}
		}
	}

	for(int i = 1;  i <= n; i++){
		cout << v[i] << "\n";
	}


}
