#include<iostream>
#include<vector>
using namespace std;

void count_sort(vector<int>& a,vector<int>& b, int n, int k) {
	vector<int> c(k, 0);
	for (int i = 0; i < n; i++) {
		c[a[i]]++;
	}
	for (int i = 1; i < k; i++) {
		c[i] = c[i] + c[i - 1];
	}
	for (int i = 0; i < n; i++) {
		b[c[a[i]]-1] = a[i];
		c[a[i]]--;
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	int k = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > k)
			k = a[i];
	}
	k++;
	count_sort(a, b, n, k);
	for (int i = 0; i < n; i++) {
		if (i) cout << " ";
		cout << b[i];
	}
	cout << endl;
	return 0;
}