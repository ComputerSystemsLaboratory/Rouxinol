#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 52

int main(void)
{
	bool cards[4][13];
	int	n,rank;
	char stamp;

	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 13;j++) {
			cards[i][j] = false;
		}
	}

	do {
		cin >> n;
	} while (n < 0 || n > MAX);

	int i = 0;

	while (1) {

		cin >> stamp >> rank;

		switch (stamp) {
		case 'S':
			cards[0][rank - 1] = true;
			break;
		case 'H':
			cards[1][rank - 1] = true;
			break;
		case 'C':
			cards[2][rank - 1] = true;
			break;
		case 'D':
			cards[3][rank - 1] = true;
			break;
		default:
			break;
		}
		if (i++ == n - 1) break;
	}

	for (int j = 0;j < 4;j++) {
		for (int i = 0;i < 13;i++) {
			if (cards[j][i] == false) {
				switch (j) {
				case 0:
					printf("S ");
					break;
				case 1:
					printf("H ");
					break;
				case 2:
					printf("C ");
					break;
				case 3:
					printf("D ");
					break;
				default:
					break;
				}
				printf("%d\n", i + 1);
			}
		}
	}

	return 0;
}