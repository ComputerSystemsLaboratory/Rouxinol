#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void print_vec(vector<int> vec) {
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i];
		i == vec.size() - 1 ? cout << endl : cout << " ";
	}
}

int main() {
	int n; cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)cin >> vec[i];
	print_vec(vec);
	int point = 0;
	for (int i = 1; i < n; i++) {
		int v = vec[i];
		int j = i - 1;
		while (j >= 0 && vec[j] > v) {
			vec[j + 1] = vec[j];
			j--;
			vec[j + 1] = v;
		}
		print_vec(vec);
	}
	return 0;
}