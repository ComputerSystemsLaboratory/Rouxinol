#include<iostream>

using namespace std;

int partition(pair<char,int>* a, int p, int r) {
	int x = a[r - 1].second;
	int cnt = p - 1;
	for (int i = p;i < r;i++) {
		if (a[i].second <= x) {
			cnt++;
			swap(a[cnt], a[i]);
		}
	}
	return cnt;
}

void quicksort(pair<char, int>* a, int l, int r) {
	if (l < r) {
		int q = partition(a, l, r);
		quicksort(a, l, q);
		quicksort(a, q + 1, r);
	}
}

int main() {
	int n;
	cin >> n;
	pair<char,int>* a = new pair<char,int>[n];
	pair<char, int>* original = new pair<char, int>[n];
	for (int i = 0;i < n;i++) {
		cin >> a[i].first>>a[i].second;
		original[i].first = a[i].first;
		original[i].second = a[i].second;
	}

	quicksort(a, 0, n);
	bool flag = true;
	for (int i = 0;i < n - 1&&flag;i++) {
		if (a[i].second == a[i + 1].second) {
			for (int j = 0;j < n;j++) {
				if (original[j] == a[i])break;
				if (original[j] == a[i + 1]) {
					flag = false;
					break;
				}
			}
		}
	}
	if (flag)cout << "Stable\n";
	else cout << "Not stable\n";
	for (int i = 0;i < n;i++) {
		cout << a[i].first<<" "<<a[i].second <<endl;
	}
}
