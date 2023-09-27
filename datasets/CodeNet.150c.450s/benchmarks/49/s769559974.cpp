#include <iostream>
using namespace std;

const int MAX_N = 100;

int main() {
	int n,x;
	int score[MAX_N];

	while(cin >> n) {
		if(n == 0) return 0;

		int max = -1,max_i,min = 1001,min_i;
		for(int i = 0;i < n;i++) {
			cin >> x;
			score[i] = x;

			if(max < x) {
				max = x;
				max_i = i;
			}

			if(min > x) {
				min = x;
				min_i = i;
			}
		}

		//??¨??????????????°
		if(max_i == min_i) {
			cout << max << endl;
			continue;
		}

		int total = 0;
		for(int i = 0;i < n;i++) {
			if(i != max_i && i != min_i) total += score[i];
		}

		cout << total / (n - 2) << endl;
	}
}