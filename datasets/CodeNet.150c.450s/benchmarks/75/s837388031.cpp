#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int a[500001];
int all;
void MaxHeap(int n);

void buileMaxHeap(int n) {
	int k = n / 2;
	for (int i = k; i >= 1; i--) {
		MaxHeap(i);
	}
}
void MaxHeap(int n) {
	int left = n * 2;
	int right = n * 2 + 1;
	int largest;
	if (left <= all && a[left] > a[n]) largest = left;
	else largest = n;
	if (right <= all && a[right] > a[largest]) largest = right;
	if (largest != n) {
		swap(a[n], a[largest]);
		MaxHeap(largest);
	}
}
int main(void) {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	all = n;
	buileMaxHeap(n);
	for (int i = 1; i <= n; i++) {
		cout <<" "<<a[i];
	}
	cout << endl;
}
