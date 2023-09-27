#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<string>
using namespace std;


int main() {

	int n;

	int min;
	int d;
	int count;
	while (cin >> n) {
		if (n < 9) {
			min = n;
		}
		else {
			min = 9;
		}
		count = 0;

		for (int i = 0; i <= min; i++) {
			for (int j = 0; j <= min; j++) {
				for (int k = 0; k <= min; k++) {
					d = n - i - j - k;
					if (d >= 0 && d <= 9) count++;

				}
			}
		}

		printf("%d\n", count);
	}

	//system("pause");
	return 0;
}
