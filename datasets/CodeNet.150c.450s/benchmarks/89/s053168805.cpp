#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

bool isPrime(int num){	
	if (num < 2) return false;
	if (num == 2 ) return true;
	for (int i = 2; i <= sqrt(num) + 1; i++){
		if (num % i == 0) return false;
	}
	return true;
}
int main(){
	while(1){
		int a,d,n; cin >> a >> d >> n;
		int cnt = 0;
		int ans;
		if (a + d + n == 0) break;
		for (int i = a;;i += d){
			if (isPrime(i)){
				cnt++;
			}
			if (cnt == n){
				ans = i;
				break;
			}
		}
		cout << ans << endl;
	}
return 0;
}