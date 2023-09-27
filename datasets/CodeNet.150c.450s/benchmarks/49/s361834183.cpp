#include <iostream>
using namespace std;

int main() {
	int n, s;
	int  i;
	int max, min;
	int sum;
	int avg;
	while(cin >> n, n != 0) {
		sum = max = 0;
		min = 11111;
		for(i=0;i<n;i++) {
			cin >> s;
			max = (s > max)?s:max;
			min = (s < min)?s:min;
			sum += s;
		}
		avg = (sum-max-min)/(n-2);
		cout << avg << endl;
	}
	return 0;
}