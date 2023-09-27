#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N; cin >> N;
	vector<long long> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	long long maxv = -1000000000;
	long long minv = a[0];
	for (int i = 1; i < N; i++) {
		maxv = max(maxv, a[i] - minv);
		minv = min(minv, a[i]);
	}
	cout << maxv << endl;
}