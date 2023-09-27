#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <unordered_map>
#include <math.h>
#include <cctype>
using namespace std;
#define _USE_MATH_DEFINES

int a[100];
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int ii = 0; ii < N; ii++) {
		cout << a[ii];
		if (ii != N - 1)
			cout << " ";
		else
			cout << endl;
	}
	for (int i = 1; i < N; i++) {
		int key = a[i];
		int j = i - 1;
		while (j >= 0 && a[j]>key) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
		for (int ii = 0; ii < N; ii++) {
			cout << a[ii];
			if (ii != N - 1)
				cout << " ";
			else
				cout << endl;
		}
	}
}