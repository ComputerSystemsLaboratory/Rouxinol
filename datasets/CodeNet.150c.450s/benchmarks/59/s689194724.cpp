#include <iostream>
#include <vector>

using namespace std;

void insertSort(vector<int> v, int n) {

	for (int i=0; i<n; i++) {

		int k = v[i];
		int j = i-1;

		while (j>=0 && (v[j] > k)) {
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = k;

		for (int ii=0; ii<n; ii++) {
			char c = (ii == n-1) ? '\n' : ' ';
			cout << v[ii] << c;
		}
	}

}

int main() {

	int n, s;
	vector<int> v;

	cin >> n;

	for (int i=0; i<n; i++) {
		cin >> s; 
		v.push_back(s);
	}

	insertSort(v, n);
	return 0;
}