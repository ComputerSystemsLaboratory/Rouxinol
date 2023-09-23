#include <iostream>
#include <cmath>

using namespace std;
int isPrime(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}
int main() {
	int n, t;
	int ans = 0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> t;
		if(isPrime(t)){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}