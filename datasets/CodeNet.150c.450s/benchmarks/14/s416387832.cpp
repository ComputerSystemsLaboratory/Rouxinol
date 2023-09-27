#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;


int main() {
	
	int n;
	int tmp;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			printf(" %d", i);
			
		}else {
			tmp = i;
			for (;;) {
				if (tmp == 0)break;
				if (tmp % 10 == 3) {
					printf(" %d", i);
					break;
				}
				tmp /= 10;
				

			}

			
		}
	}
	printf("\n");

	//system("pause");
	return 0;
}
