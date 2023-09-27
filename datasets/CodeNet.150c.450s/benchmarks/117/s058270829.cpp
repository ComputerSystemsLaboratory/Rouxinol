#include<iostream>
using namespace std;

int s[500000], count = 0;

void margeSort(int left, int right, int mid){
	int index, i, j = mid, t[500000];
	index = i = left;
	while(i < mid && j < right){
		if (s[i] < s[j]) {
			t[index++] = s[i++];
		} else {
			t[index++] = s[j++];
		}
	}
	while (j < right) t[index++] = s[j++];
	while(i < mid) t[index++] = s[i++];
	j = left;
	for (int i = left; i < right; i++,j++) {
		s[i] = t[j];
	}
	count += right - left;
}

void marge(int left, int right) {
	if (right - 1 != left) {
		int mid = (left + right) / 2;
		marge(left, mid);
		marge(mid, right);
		margeSort(left, right, mid);
	}
}

int main(void) {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	marge(0, n);

	for (int i = 0; i < n; i++) {
		cout << s[i];
		if(i != n - 1) cout << " ";
	}
	cout << endl << count << endl;
	return 0;
}