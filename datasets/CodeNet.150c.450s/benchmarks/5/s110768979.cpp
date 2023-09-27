#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, i, input;
	vector<int> v;
	vector<int>::iterator it;

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> input;
		it = v.begin();
		v.insert(it, input);
	}
	for (i = 0; i < n-1; i++) {
		cout << v[i] << " ";
	}
	cout << v[n-1] << endl;
}