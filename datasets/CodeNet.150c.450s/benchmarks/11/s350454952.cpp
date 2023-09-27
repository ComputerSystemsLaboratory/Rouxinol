#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

#define MAX 4
int main(void)
{
	int n,i,j;
	char c;
	int num;
	unsigned short his[MAX] = {0};
	char c1[MAX];

	cin >> n;
	for (i=0; i<n; i++) {
		cin >> c;
		cin >> num;

		switch (c) {
		case 'S':
			his[0] |= (1 << (num-1));
			break;
		case 'H':
			his[1] |= (1 << (num-1));
			break;
		case 'C':
			his[2] |= (1 << (num-1));
			break;
		case 'D':
			his[3] |= (1 << (num-1));
			break;
		default:
			break;
		}
	}
	c1[0] = 'S';
	c1[1] = 'H';
	c1[2] = 'C';
	c1[3] = 'D';
	for (i = 0; i < MAX; i++) {
		for (j = 0; j < 13; j++) {
			if (((his[i]>>j) & 1) == 0) {
				cout << c1[i] << " " << j+1 << endl;
			}
		}
	}
	return 0;
}

