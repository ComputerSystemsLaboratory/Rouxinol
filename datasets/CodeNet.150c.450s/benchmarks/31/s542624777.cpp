#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main() {
	long int n;
	cin >> n;
	long long int a,min,max;
	max = -1000000001;
	cin >> a;
	min = a;
	for (int i = 1;i < n;i++) {
		cin >> a;
		if (max <= a -min) {
			max = a - min;
		}
		if (min>=a) {
			min = a;
		}
	}
	cout << max << endl;
	return 0;
}