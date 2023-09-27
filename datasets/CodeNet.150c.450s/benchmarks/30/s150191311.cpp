#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N; cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	int num = 0;

	for (int i = 0; i < N - 1; i++) {
		int min_idx = i;
		int min = a[i];
		for (int j = i; j < N; j++) {

			if (min > a[j]) {
				min_idx = j;
				min = a[j];
			}

			}
		if (i < min_idx) {
			int tmp;
			tmp = a[i];
			a[i] = a[min_idx];
			a[min_idx] = tmp;
			num++;
		}
	}
	for (int i = 0; i < N - 1; i++) {
		cout << a[i] << " ";
	}
	cout << a[N - 1] << endl;
	cout << num << endl;
}