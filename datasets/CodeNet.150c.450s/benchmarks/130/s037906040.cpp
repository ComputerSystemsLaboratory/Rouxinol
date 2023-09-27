#include <iostream>
#include <algorithm>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <vector>
#include <functional>
#include <map>
using namespace std;

int n,m;
int list[100][100];
int list2[100];
int main(){
	cin >> n >> m;

	for (int y = 0; y < n; ++y) {
		for (int x = 0; x < m; ++x) {
			cin >> list[y][x];
		}
	}

	for (int x = 0; x < m; ++x)
		cin >> list2[x];

	for (int y = 0; y < n; ++y) {
		int buf = 0;
		for (int x = 0; x < m; ++x) {
			buf += list[y][x] * list2[x];
		}
		cout << buf << endl;
	}

	return 0;
}