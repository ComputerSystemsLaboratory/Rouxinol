#include <cstdio>
#include <iostream>
using namespace std;

int main(void) {
	for (;;) {
		int n;
		cin >> n;
		if (n == 0)
			break;

		int s[100];
		int max = 0, min = 1000;
		for (int i = 0; i < n; i++) {
			cin >> s[i];
			if (max < s[i]) {
				max = s[i];
			}
			if (min > s[i]) {
				min = s[i];
			}
		}

		bool flag_max = true;
		bool flag_min = true;
		int total = 0;
		for (int i = 0; i < n; i++) {
			if ((s[i] == max) && flag_max) {
				flag_max = false;
				continue;
			} else if ((s[i] == min) && flag_min) {
				flag_min = false;
				continue;
			} else {
				total += s[i];
			}
		}
		int ave = total / (n - 2);
		printf("%d\n", ave);
	}
	return 0;
}