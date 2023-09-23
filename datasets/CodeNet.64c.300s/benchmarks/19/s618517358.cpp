#include <iostream>

using namespace std;

int main()
{
	int a[5000];
	int left[5000], right[5000];
	int n;
	
	while (true) {
		cin >> n;
		if (n==0) break;
		
		bool existsPos = false;
		for (int i=0; i<n; i++) {
			cin >> a[i];
			if (a[i] > 0) existsPos = true;
		}
		
		int maximum;
		
		if (existsPos) {
			int left_max = a[0];
			int left_max_pos = 0;
			left[0] = a[0];
			for (int i=1; i<n; i++) {
				left[i] = left[i-1] + a[i];
				if (left[i] > left_max) {
					left_max = left[i]; left_max_pos = i;
				}
			}
			int right_max = a[n-1];
			int right_max_pos = n-1;
			right[n-1] = a[n-1];
			for (int i=n-2; i>=0; i--) {
				right[i] = right[i+1] + a[i];
				if (right[i] > right_max) {
					right_max = right[i]; right_max_pos = i;
				}
			}
			
			maximum = 0;
			for (int i = right_max_pos; i <= left_max_pos; i++) maximum += a[i];
		}
		else {
			maximum = -100000;
			for (int i=0; i<n; i++) {
				if (a[i] > maximum) maximum = a[i];
			}
		}
		
		cout << maximum << endl;
	}
		
	return 0;
}