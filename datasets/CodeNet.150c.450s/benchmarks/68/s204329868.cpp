#include <iostream>
#include <cmath>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
	int n;
	cin >> n;
	
	while (n!=0) {
		std::vector<int> a(n);
		int r;
		int rn;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			for (int j = i+1; j < n; j++) {
				rn = std::abs(a[i] - a[j]);
				if (i==0 && j==1) {
					r = rn;
				} else {
					if (rn < r) {
						r = rn;
					}
				}
			}
		}
		cout << r << endl;
		cin >> n;
	}
	return 0;
}