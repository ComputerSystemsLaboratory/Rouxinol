#include <iostream>
#include <cstdio>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
	int w, n;
	int change[30][2];
	int line[30];
	cin >> w >> n;
	for (int i = 0; i < n; ++i) {
		scanf("%d,%d", &change[i][0], &change[i][1]);
	}
	
	for (int i = 0; i < w; ++i) {
		line[i] = i + 1;
	}
	for (int i = 0; i < n; ++i) {
		swap(line[change[i][0] - 1], line[change[i][1] - 1]);
		//for (int i = 0; i < w; ++i) {
		//	cout << line[i] << " ";
		//}
		//cout << endl;
		//cout << "--------------------------" << endl;
	}
	for (int i = 0; i < w; ++i) {
		cout << line[i] << endl;;
	}
}
