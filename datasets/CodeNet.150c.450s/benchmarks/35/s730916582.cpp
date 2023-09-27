#include <iostream>
using namespace std;

int main() {
	int n;
	int max;
	while(1) {
		cin >> n;
		if(n == 0) break;
		int a[5010];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		max = a[0];
		for(int i = 0; i < n; i++) {
			int temp = 0;
			for(int j = i; j < n; j++) {
				temp += a[j];
				if(temp > max) max = temp;
			}
		}
		cout << max << endl;
	}
	return 0;
}