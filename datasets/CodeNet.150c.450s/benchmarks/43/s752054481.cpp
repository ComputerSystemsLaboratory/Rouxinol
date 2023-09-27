#include <iostream>
int main()
{

	while (1) {
		int card;
		std::cin >> card;
		if (card == 0) {
			break;
		}
		int a[10000], b[10000];
		int ascore = 0, bscore = 0;
		for (int i = 0; i < card; i++) {
			std::cin >> a[i] >> b[i];
			if (a[i] > b[i]) {
				ascore = ascore + (a[i] + b[i]);
			}
			else if (b[i] > a[i]) {
				bscore = bscore + (a[i] + b[i]);
			}
			else {
				ascore = ascore + a[i];
				bscore = bscore + b[i];
			}
		}
		std::cout << ascore << " " << bscore << std::endl;
	}
	return 0;
}