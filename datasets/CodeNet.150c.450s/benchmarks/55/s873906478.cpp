#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

#define MAX 26

int main(void)
{
	char c;
	int i, sum;
	int cnt[MAX] = {0};

	while (1) {
		sum = 0;
		while ((c = getchar()) != '\n') {
			sum += (c-'0');
		}
		if (sum == 0) {
			break;
		}
		else {
			printf("%d\n",sum);
		}
	}
	return 0;
}


