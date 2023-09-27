#include <iostream>
#include <vector>
using namespace std;

int main (void) {

	while (1) {
		int n, m, p;
		cin >> n >> m >>p;
		if (n == 0 && m ==0 && p == 0) break;
		int x[n];
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> x[i];
			sum += x[i];
		}
		int gold = sum * 100;
		int rest = gold - (gold * p * 0.01);
		if (x[m-1] != 0) 
			cout << rest/x[m-1] <<endl;
		else
			cout << 0 <<endl;
	}
	return 0;
}

