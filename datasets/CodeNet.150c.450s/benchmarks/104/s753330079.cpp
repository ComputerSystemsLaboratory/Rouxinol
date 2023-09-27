#include <iostream>
#include <vector>
using namespace std;

int main() {
	int w; cin >> w; int n; cin >> n;
	vector<int> vec; vec.resize(w);	int a, b; char op;
	for (int i = 0; i < w; i++) vec[i] = i + 1;
	for (int i = 0; i < n; i++) {
		cin >> a >> op >> b; swap(vec[a - 1], vec[b - 1]);
	}
	for (int i = 0; i < w; i++) cout << vec[i] << endl;
	return 0;
}
