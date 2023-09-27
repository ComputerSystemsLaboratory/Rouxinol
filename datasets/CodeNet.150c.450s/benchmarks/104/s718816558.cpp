#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, w;
	cin >> n >> w;
	vector<int> v(n);

	for(int i = 0; i < n; i++) {
		v[i] = i+1;
	}

	int a, b;
	for(int i = 0; i < w; i++) {
		scanf("%d,%d", &a, &b);
		swap(v[a-1], v[b-1]);
	}

	for(int i = 0; i < n; i++) {
		cout << v[i] << endl;
	}		
}