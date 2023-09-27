#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int M = -1000000000;
	int m;
	cin >> m;
	for(int i = 1; i < n; ++i){
		int r;
		cin >> r;
		M = max(M, r - m);
		m = min(m, r);
	}
	cout << M << endl;
	return 0;
}