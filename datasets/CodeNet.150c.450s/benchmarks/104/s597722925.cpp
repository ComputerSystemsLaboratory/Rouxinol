#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int w;
	int n;
	cin >> w >> n;
	int* tate = new int[w];
	for (int i = 0; i < w; i++) {
		tate[i] = i + 1;
	}
	int* yoko_a = new int[n];
	int* yoko_b = new int[n];
	for (int i = 0; i < n; i++) {
		scanf("%d,%d", &yoko_a[i], &yoko_b[i]);
	}
	for (int i = 0; i < n; i++) {
		swap(tate[yoko_a[i]-1], tate[yoko_b[i]-1]);
	}
	for (int i = 0; i < w; i++) {
		cout << tate[i] << endl;
	}
}