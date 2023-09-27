#include <bits/stdc++.h>

using namespace std;

void maxheapify(vector<int> &a,int i) {
	int l = i * 2;
	int r = i * 2 + 1;
	int largest = i;
	if (l <= a.size()-1){
		if (a[l] > a[i]) {
			largest = l;
		}
		else {
			largest = i;
		}
	}

	if (r <= a.size()-1){
		if (a[r] > a[largest]) {
			largest = r;
		}
	}
	if (largest != i) {
		swap(a[i], a[largest]);
		maxheapify(a, largest);
	}

}

void buildmaxheap(vector<int> &a) {
	for (int i = (a.size()-1) / 2; i >= 1; i--) {
		maxheapify(a, i);
	}
}

int main() {

	int n;
	cin >> n;
	vector<int> a(n+1, 0);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	buildmaxheap(a);

	for (int i = 1; i <= n; i++) {
		cout << " " << a[i];
	}
	cout << endl;

}
