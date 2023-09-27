#include <iostream>
#include <fstream>
using namespace std;

int N;

int main() {
	//freopen("test.inp", "r", stdin);
	while (cin >> N, N) {
		int count = 0;
		for (int i = 1; i <= N; i++) {
			int sum = i;
			for (int j = i + 1; j <= N; j++) {
				sum += j;
				if (sum == N) count++;
			}
		}
		cout << count << endl;
	}
}