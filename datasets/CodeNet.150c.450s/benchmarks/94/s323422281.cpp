#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int bubble_sort(int n,vector<int> &vec);

int main() {
	int n,count;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	count=bubble_sort(n,a);
	for (int i = 0; i < n; i++) {
		cout << a[i];
		if (i != n - 1) { cout << " "; }
	}
	cout << "\n" << count << endl;


}

int bubble_sort(int n,vector<int> &vec) {
	int count = 0;
	bool flag = true;
	while (flag) {
		flag = false;
		for (int j = 1; j < n; j++) {
			if (vec[j] < vec[j - 1]) {
				swap(vec[j], vec[j - 1]);
				count++;
				flag = true;
			}
		}
	}
	return count;
}
