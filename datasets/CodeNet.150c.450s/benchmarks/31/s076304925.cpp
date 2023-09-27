#include<iostream>
#include<algorithm>
using namespace std;
static const int MAX = 200000;


int main() {
	int R[MAX],n;
	
	cin >> n;
	
	int maxv = -2000000000;
	int minv;
	cin >> minv;

	for (int i = 1; i < n; i++) {
		int R;
		cin >> R;
		maxv = max(maxv, R - minv);
		minv = min(minv,R);
	}

	cout << maxv << endl;

	return 0;
}
