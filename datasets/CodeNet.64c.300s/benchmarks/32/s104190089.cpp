#include <iostream>
using namespace std;

int main() {
	long n, a, min_a = 10000000, max_a = -10000000, sum_a = 0;
	cin >> n;
	cin >> a;
	min_a = a;
	max_a = a;
	sum_a = a;
	for (long i=1; i != n; ++i){
		cin >> a;
		sum_a += a;
		if (a > max_a){
			max_a = a;
		}else if (a < min_a){
			min_a = a;
		}
	}
	cout << min_a << ' ' << max_a << ' ' << sum_a << endl;
}