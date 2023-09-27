#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int selection_sort(int n,vector<int> &vec);

int main() {
	int n,count;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	
	count=selection_sort(n, a);
	for (int i = 0; i < n; i++) {
		if (i)cout << " ";
		cout << a[i];
	}
	cout << "\n" << count << "\n";
}

int selection_sort(int n,vector<int> &vec) {
	int count = 0;
	int minj;
	for (int i = 0; i < n; i++) {
		minj = i;
		for (int j = i; j < n; j++) {
			if (vec[j] < vec[minj]) {
				minj = j;
			}
		}
		if (i != minj) {
			swap(vec[i], vec[minj]);
			count++;
		}
	}
	return count;
}
