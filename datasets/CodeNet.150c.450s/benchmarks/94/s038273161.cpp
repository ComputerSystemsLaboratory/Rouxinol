#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void solve(vector<int> vec) {
	int counter = 0;
	for (int i = 0; i < vec.size(); i++) {
		for (int j = vec.size()-1; j > i; j--) {
			if (vec[j] < vec[j - 1]) {
				swap(vec[j], vec[j - 1]);
				counter++;
			}
		}
	}

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i];
		if (i != vec.size() - 1) cout << " ";
		else cout << endl;
	}
	cout << counter << endl;
	return;
}

int main() {
	int n;cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) cin >> vec[i];
	solve(vec);
	return 0;
}