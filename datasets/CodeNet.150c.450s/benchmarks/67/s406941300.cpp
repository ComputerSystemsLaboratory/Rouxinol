#include<iostream>
using namespace std;

int main() {
	int i, j, n, sum, cnt;
	while (1) {
		cin >> n;
		if (n == 0)break;
		cnt = 0;
		for (i = 1; i < n; i++){
			j = i;
			sum = 0;
			while (sum < n) {
				sum += j;
				j++;
			}
			if (sum == n)cnt++;
		}
		cout << cnt << endl;
	}




	return 0;
}