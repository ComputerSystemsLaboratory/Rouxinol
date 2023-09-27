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
		for (int j = 0; j < N -1-i; j++) {
			if (a[j] > a[j + 1]) {
				int tmp;
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				num++;
			}
		}
	}
	for (int i = 0; i < N-1; i++) {
		cout << a[i] << " ";
	}
	cout << a[N - 1] << endl;
	cout << num << endl;
}