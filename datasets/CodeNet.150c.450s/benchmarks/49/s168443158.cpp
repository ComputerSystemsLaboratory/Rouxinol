#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	while(true){
	int n; cin >> n;
	if (n == 0) break;
	int ls[1024];
	for (int i = 0; i < n; ++i) {
		cin >> ls[i];
	}
	sort(ls, ls+n);
	long res = 0;
	for (int i = 1; i < n-1; ++i) {
		res += ls[i];
	}
	cout << long(res/(n-2)) << endl;
	}
	return 0;
}