#include <iostream>

using namespace std;

int calc(int a, int b, int n) {
	int tmp = n-a-b;
	int count = 0;
	for (int c=0; c<10; c++) {
		for (int d=0; d<10; d++) {
			if (tmp == c+d)
				count++;
		}
	}
	return count;
}

void solve(int n) {
	int count = 0;
	for (int a=0; a<10; a++) {
		for (int b=0; b<10; b++) {
			count += calc(a,b,n);
		}
	}
	cout << count << endl;
}

int main() {
	int n;
	while (cin >> n) {
		solve(n);
	}
	return 0;
}