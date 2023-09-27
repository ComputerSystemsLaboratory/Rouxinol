#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n; cin >> n;
	vector<int> target;
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		target.emplace_back(tmp);
	}
	for (int i = 0; i < n;i++){
		for (int j = 0; j < i; j++) {
			if (target[i] < target[j])swap(target[i], target[j]);
		}
		for (int j = 0; j < n - 1; j++) {
			cout << target[j] << " ";
		}
		cout << target[n-1] << endl;
	}
}