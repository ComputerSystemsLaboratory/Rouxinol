#include<iostream>
using namespace std;
int a[200000], b[200000], c[200000];
long int all = 0;
void merge_sort(int left, int midle, int right) {
	for (int i = 0; i < midle - left; i++) {
		b[i] = a[i + left];
	}
	for (int i = 0; i < right - midle; i++) {
		c[i] = a[i + midle];
	}
	int j = 0;
	int k = 0;
	for (int i = left; i < right; i++) {
		if (k == right - midle || (j < midle - left && b[j] <= c[k]))
		{
			a[i] = b[j];
			j++;
		}
		else {
			a[i] = c[k];
			all += midle - left - j;
			k++;
		}
	}
}
void merge(int left, int right) {
	if (left+1 < right) {
		int midle = (left + right) / 2;
		merge(left, midle);
		merge(midle, right);
		merge_sort(left, midle,right);
	}
}
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	merge(0, n);
	cout << all<<endl;
}
