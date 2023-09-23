#include <iostream>

using namespace std;

int main()
{
	int n, t, min, max;
	cin >> n;
	cin >> min;
	cin >> t;
	max = t - min;
	if (t < min)
		min = t;
	for (int i=0; i < n-2; i++) {
		cin >> t;
		if (t - min > max)
			max = t - min;
		if (t < min)
		        min = t;
	}
	cout << max << endl;
	
	return 0;
}