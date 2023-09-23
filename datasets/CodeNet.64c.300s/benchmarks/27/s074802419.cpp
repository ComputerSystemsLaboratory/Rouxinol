#include <iostream>
using namespace std;

int main() {
	int n,sum;
	while (cin >> n >> sum) {
		if (n == 0 && sum == 0) {
			break;
		}
		int count = 0;
		for (int i = 1;i != n-1;++i) {
			for (int j = i+1;j != n;++j) {
				for (int k = j+1;k != n+1;++k) {
					if (i + j + k == sum) {
						++count;
					}
				}
			}
		}
		cout << count << endl;
	}
}