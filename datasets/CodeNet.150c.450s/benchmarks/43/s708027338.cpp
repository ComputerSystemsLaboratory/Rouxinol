#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<string>
using namespace std;


int main() {

	int n;
	int a, b;
	int ascore = 0, bscore = 0;
	for (;;) {
		cin >> n;
		if (n == 0) break;

		for (int i = 0; i < n; i++) {
			cin >> a >> b;

			if (a > b) ascore += (a + b);
			else if (a < b)bscore += (a + b);
			else {
				ascore += a;
				bscore += b;
			}



		}

		printf("%d %d\n", ascore, bscore);
		ascore = 0;
		bscore = 0;
	}

	//system("pause");
	return 0;
}
