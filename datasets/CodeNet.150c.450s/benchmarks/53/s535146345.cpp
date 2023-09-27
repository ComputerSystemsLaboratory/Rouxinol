#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<string>
using namespace std;

int main() {

	int n;

	cin >> n;
	int max = n;
	printf("%d:", n);

	int i = 2;

	while (n != 1) {
		if (n % i == 0) {
			printf(" %d", i);
			n /= i;
		}
		else break;
	}
	i = 3;
	while (n != 1 && i * i <= max) {
		if (n % i == 0) {
			printf(" %d", i);
			n /= i;
		}
		else i += 2;
	}
	if (n != 1)printf(" %d",n);


	printf("\n");


	//system("pause");
	return 0;
}
