#include <iostream>
using namespace std;
#define max(x, y) ((x) > (y) ? (x) : (y))
#define min(x, y) ((x) < (y) ? (x) : (y))

template<typename TYPE>
TYPE gcd(TYPE x, TYPE y){
	TYPE r = x % y;
	if (r == 0.0) return y;
	else return gcd(y, r);
}

template<typename TYPE>
TYPE lcm(TYPE x, TYPE y){
	return x * y / gcd(max(x, y), min(x, y));
}

int main()
{
	long long int x, y;
	while (cin >> x >> y){
		cout << gcd(max(x, y), min(x, y)) << ' ' << lcm(x, y) << "\n";
	}
	cout.flush();
	return 0;
}