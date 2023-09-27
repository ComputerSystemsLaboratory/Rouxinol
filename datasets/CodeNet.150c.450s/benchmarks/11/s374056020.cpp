#include <stdio.h>

int main(void) {
	static bool cards[4][13];
	const int SPADE = 0;
	const int HEART = 1;
	const int DIA = 3;
	const int CLUB = 2;
	int n, suit, rank;
	char cSuit;

	scanf("%d\n", &n);

	for (int i = 0; i < n; i++) {
		scanf("%c %d\n", &cSuit, &rank);
		switch (cSuit) {
			case 'S':
				suit = SPADE;
				break;
			case 'H':
				suit = HEART;
				break;
			case 'D':
				suit = DIA;
				break;
			case 'C':
				suit = CLUB;
				break;
			default:
				break;
		}
		cards[suit][rank - 1] = true;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0;j < 13;j++) {
if (!cards[i][j]) {
			switch (i) {
				case SPADE:
					cSuit = 'S';
					break;
				case HEART:
					cSuit = 'H';
					break;
				case DIA:
					cSuit = 'D';
					break;
				case CLUB:
					cSuit = 'C';
					break;
				default:
					break;
			}
			rank = j+1;
			printf("%c %d\n", cSuit, rank);
		}
		
		}
	}
	return 0;
}