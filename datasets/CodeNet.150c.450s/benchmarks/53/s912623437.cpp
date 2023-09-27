#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int n;

int factorization(int n){
	if(n==1) return 0;
	cout << n << ": ";
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			cout << i <<  " ";
			n = n / i;
			i = 1;
		}
	}
	cout << n << endl;
	return 0;
}

void solve(){
	cin >> n;
	factorization(n);
}

int main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
	solve();
	return 0;
}