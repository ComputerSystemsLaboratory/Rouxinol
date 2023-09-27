#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n, x, Min = INT_MAX, Max = INT_MIN;
	long long Sum = 0;

	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> x;
		Min = (Min > x) ? x : Min;
		Max = (Max < x) ? x : Max;
		Sum += x;
	}
	cout << Min << " " << Max << " " << Sum << endl;

	return 0;
}