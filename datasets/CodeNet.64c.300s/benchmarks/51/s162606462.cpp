#include <iostream>

using namespace std;

long long fact(long long n);

int main(){
	long long n; cin >> n;
	cout << fact(n) << endl;

	return 0;
}

long long fact(long long n){
	if (n < 2) {
		return 1;
	} else {
		return n * fact(n-1);
	}
}