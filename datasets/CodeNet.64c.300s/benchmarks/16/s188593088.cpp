#include <iostream>
#include <climits>
using namespace std;

int main() {
	int N;
	cin >> N;

	int a[N], min, max;
	for (int i=0; i<N; i++)
		cin >> a[i];

	max = INT_MIN;
	min = a[0];

	for (int i=1; i<N; i++) {
		max = (max < a[i]-min)? a[i]-min: max;
		min = (min > a[i])? a[i]: min;
	}

	cout << max << endl;

	return 0;
}
