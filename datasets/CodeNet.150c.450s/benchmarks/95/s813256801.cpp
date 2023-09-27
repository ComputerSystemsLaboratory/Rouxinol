#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	//step=0 ru
	//step=1 lu
	//step=2 rd
	//step=3 ld

	int n, step, cnt;
	char in[3];
	while (1) {
		step = -1;
		cnt = 0;
		scanf("%d", &n);
		if (n == 0)
			break;
		for (int i = 0; i < n; i++) {
			if (i == n - 1)
				scanf("%s", &in);
			else
				scanf("%s ", &in);
			if (in[0] == 'r'&&in[1] == 'u') {
				if (step == 1) {
					cnt++;
					step = -1;
				}
				else
					step = 0;
			}
			if (in[0] == 'l'&&in[1] == 'u') {
				if (step == 0) {
					cnt++;
					step = -1;
				}
				else
					step = 1;
			}
			if (in[0] == 'r'&&in[1] == 'd') {
				if (step == 3) {
					cnt++;
					step = -1;
				}
				else
					step = 2;
			}
			if (in[0] == 'l'&&in[1] == 'd') {
				if (step == 2) {
					cnt++;
					step = -1;
				}
				else
					step = 3;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}
