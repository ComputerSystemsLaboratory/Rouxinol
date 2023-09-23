#include<iostream>
using namespace std;

int Selection_sort(int a[], int n) {
	int i, j, min, counta = 0, hoge;
	for (i = 0; i < n; i++) {
		min = i;
		for (j = i+1; j < n; j++) {
			if (a[min] > a[j]) min = j;
		}
		if (min != i) {
			hoge = a[i];
			a[i] = a[min];
			a[min] = hoge;
			counta++;
		}
	}
	return counta;
}

void output(int a[],int n,int count) {
	for (int i = 0; i < n; i++) {
		if(i) cout << " ";
		cout << a[i];
	}
	cout << endl << count << endl;
	return;
}

int main() {
	int n, a[100], hoge;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	hoge = Selection_sort(a, n);
	output(a, n, hoge);
	return 0;
}
