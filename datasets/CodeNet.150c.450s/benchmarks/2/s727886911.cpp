#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t; 
}

int partition(vector<int> &A, int p, int r) {
	int x = A[r];
	int i = p;
	for (int j = p; j < r; j++) {
		if (A[j] <= x) {
			swap(A[i], A[j]);
			i++;
		}
	}
	swap(A[i], A[r]);
	return i;
}

int main() {
	int n = 0;
	cin >> n;
	vector<int> v;
	v.resize(n);

	{
		vector<int>::iterator i = v.begin();
		copy(istream_iterator<int>(cin), istream_iterator<int>(), i++);
	}
	int p = partition(v, 0, n-1);
	
	for (int i = 0; i < n; i++) {
		if (i == p) {
			cout << "[" << v[i] << "] ";
		}
		else if (i == n - 1) {
			cout << v[i] << "\n";
		}
		else {
			cout << v[i] << " ";
		}
	}
	return 0;
}