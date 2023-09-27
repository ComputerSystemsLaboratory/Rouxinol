#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;
typedef unsigned long long int lint;
const int num = 1000000007;
inline int prime(lint m, lint n) {
	int ans = 1;
	while (n != 0) {
		if(n % 2 == 1) ans = ans * m % num;
		m = m * m % num;
		n = n / 2;
	}
	return ans;
}
int main() {
	lint m, n;
	cin >> m >> n;
	cout << prime(m, n) << endl;
	return 0;
}