
#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
const int MAX = 100;
int main() {
	int W, N;
	int t[MAX];

	cin >> W >> N;
	for (int i = 0; i < W; i++) {
		t[i] = i;
	}
	for (int i = 0; i < N; i++) {
		int a, b;
		scanf("%d,%d", &a, &b); a--; b--;
		swap(t[a], t[b]);
	}
	for (int i = 0; i < W; i++) {
		printf("%d\n", t[i] + 1);
	}
	return 0;
}