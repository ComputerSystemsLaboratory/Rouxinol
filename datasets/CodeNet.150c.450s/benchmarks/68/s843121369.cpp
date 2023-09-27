#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>

using namespace std;

int main() {
	int n;
	int mini;
	while (1) {
		cin >> n;
		if (n == 0)break;
		int* a = new int[n];
		for (int i = 0;i < n;i++) {
			cin >> a[i];
		}
		mini = INT_MAX;
		for (int i = 0;i < n;i++) {
			for (int j = i + 1;j < n;j++) {
				mini = min(abs(a[i] - a[j]), mini);
			}
		}
		cout << mini << endl;
	}
}

