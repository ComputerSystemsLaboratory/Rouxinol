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

int a[4][3][10];
int main() {
	int b, r, f, v;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> b >> f >> r >> v;
		a[b - 1][f - 1][r - 1] += v;
	}
	for (int b = 0; b < 4; b++) {
		for (int f = 0; f < 3; f++) {
			for (int r = 0; r < 10; r++) {
				cout << " "; 
				cout << a[b][f][r];
			}
			cout << endl;
		}
		if(b<3)
		cout << "####################" << endl;
	}
}