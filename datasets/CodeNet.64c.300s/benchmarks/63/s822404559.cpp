#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a, b;
	while(cin >> a >> b){
		cout << __gcd(a, b) << " " << (a * b) / __gcd(a, b) << endl;
	}
	return 0;
}