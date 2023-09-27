#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <unordered_map>
#include <math.h>
using namespace std;
#define _USE_MATH_DEFINES


int main() {
	int N, M;
	cin >> N >> M;
	vector<vector<int>> mata(N, vector<int>(M));
	vector<int> vecb(M, 0);
	int tmp;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> tmp;
			mata[i][j] = tmp;
		}
	}
	for (int i = 0; i < M; i++) {
		cin >> tmp;
		vecb[i] = tmp;
	}
	for (int i = 0; i < N; i++) {
		int c = 0;
		for (int j = 0; j < M; j++) {
			c += mata[i][j] * vecb[j];
		}
		cout << c << endl;
	}
	return 0;
}