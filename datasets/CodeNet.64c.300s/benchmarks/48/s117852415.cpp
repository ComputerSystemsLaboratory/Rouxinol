#include <iostream>
#include <cmath>
#define MAX 1000000
using namespace std;

int main() {
	int n, count;
	bool a[MAX];
	for (int i = 2;i < MAX;i++) { a[i] = true; }
	for (int i = 2;i < sqrt(MAX);i++) {
		if (a[i] ==true) {
			for (int j = 2;j*i < MAX;j++) { a[j*i] = false; }
		}
	}
	
	while (cin >> n) {
		count = 0;
		for (int i = 2;i <= n;i++) {
			if (a[i])
				count++;
		}
		cout << count << endl;
	}
}