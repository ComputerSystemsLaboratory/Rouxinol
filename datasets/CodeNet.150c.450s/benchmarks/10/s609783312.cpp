#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,m, i, j, k, l,o,p,q;
	int b[4][3][10] = {0};
	cin >> n;
	i = 1;
	o = 1;p = 1;q = 1;
	while (i<= n) {
		cin >> j >> k >> l >> m;
			b[j-1][k-1][l-1]= b[j - 1][k - 1][l - 1] +m;
		i++;
	}
	while (o <= 3) { 
		while (p <= 3) { 
			while (q <= 10) {
				printf(" %d", b[o-1][p-1][q-1]);
				q++; 
			}
			printf("\n");
			p++;
			q = 1;
		}
		printf("####################\n");
		o++;p = 1;
	}while (p <= 3) {
		while (q <= 10) {
			printf(" %d", b[3][p - 1][q - 1]);
			q++;
		}
		printf("\n");
		p++;
		q = 1;
	}
	return 0;
}
