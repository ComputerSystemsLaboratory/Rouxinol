#include <iostream>

using namespace std;
long a[(int)(2e+5)+1];
long MIN[(int)(2e+5) + 1];
long MAX[(int)(2e+5) + 1];

long max(long a, long b){
	return a > b ? a : b;
}
int main(){
	int n; cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];
	long tmp = a[0]; MIN[0] = a[0];
	for (int i = 1; i <= n-2; ++i){
		if (a[i] < tmp) tmp = a[i];
		MIN[i] = tmp;
	}
	tmp = MAX[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; --i){
		MAX[i] = tmp;
		if (a[i] > tmp) tmp = a[i];
	}
	tmp = MAX[0] - MIN[0];
	for (int i = 1; i <= n-2; ++i){
		tmp = max(tmp, MAX[i] - MIN[i]);
	}
	cout << tmp << '\n';
}