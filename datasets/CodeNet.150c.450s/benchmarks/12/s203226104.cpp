#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int H,a[250],i;
	cin>>H;
	
	for (i = 1;i <= H;i++)cin>>a[i];
	
	for (i = 1;i <= H;i++) {
		if (i / 2 == 0) {
			printf("node %d: key = %d, left key = %d, right key = %d, \n", i,a[i], a[2 * i], a[2 * i + 1]);
		}
		else if (2 * i > H) {
			printf("node %d: key = %d, parent key = %d, \n",i,a[i],a[i/2]);
		}
		else if (2 * i + 1>H) {
			printf("node %d: key = %d, parent key = %d, left key = %d, \n", i, a[i], a[i / 2], a[2 * i]);
		}
		else {
			printf("node %d: key = %d, parent key = %d, left key = %d, right key = %d, \n", i, a[i], a[i / 2], a[2 * i], a[2 * i + 1]);
		}
	}
	return 0;
}
