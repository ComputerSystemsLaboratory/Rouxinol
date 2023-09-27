#include <iostream>
using namespace std;

long n, k;
const long MAX = 100000;
long T[MAX];

long check(long p){
	long i = 0;
	for (long j = 0; j < k; j++){
		long s = 0;
		while (s + T[i] <= p){
			s += T[i];
			i++;
			if (i == n) return n;
		}
	}
	return i;
}

long solve(){
	long left = 0;
	long right = 100000 * 10000;
	while (left < right){
		long mid = (left + right) / 2;
		long v = check(mid);
		if (v >= n) right = mid;
		else left = mid + 1;
	}
	return right;
}

int main(){
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> T[i];
	long ans = solve();
	cout << ans << endl;
	return 0;
}