#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	
	int a, b, c, d, n;
	int i;
	int cnt;

	while (cin >> n) {
		cnt = 0;
		for (a = 0; a <= 9; a++) {
			for (b = 0; b <= 9; b++) {
				for (c = 0; c <= 9; c++) {
					for (d = 0; d <= 9; d++) {
						if (a + b + c + d == n) {
							cnt++;
						}
					}
				}
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}