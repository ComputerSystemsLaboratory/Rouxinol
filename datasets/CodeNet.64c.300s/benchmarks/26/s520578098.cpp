#include <iostream>

using namespace std;

typedef long long int lli;

lli mod = 1e9 + 7;

lli solve(lli x, lli n){

	if( n == 0 )
		return 1;

	if( n % 2 == 0){		// ??¶??°
		return solve( (x * x) % mod , n / 2);
	}else{					// ?\???°
		return solve( (x * x) % mod , n / 2) * x % mod;
	}

}

int main(void){

	int x, n;
	cin >> x >> n;

	cout << solve(x, n)<< endl;

	return 0;
}