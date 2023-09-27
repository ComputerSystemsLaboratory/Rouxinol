#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int min, max, a, b;
	long int sum;
	cin >> b >> min;
	max = min;
	sum = min;
	for (int i = 2; i <= b; i++) {
		cin >> a;
		if (a < min)
			min = a;
		if (a > max)
			max = a;
		sum += a;
	}
	cout << min << " " << max << " " << sum << endl;
	return 0;
}
