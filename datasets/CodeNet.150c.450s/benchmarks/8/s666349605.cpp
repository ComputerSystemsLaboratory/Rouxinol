#include <string>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int score_1 = 0,score_2 = 0;
	while (n--) {
		string card_1,card_2;
		cin >> card_1 >> card_2;
		if (card_1 == card_2) {
			++score_1;
			++score_2;
		} else if (card_1 > card_2) {
			score_1 += 3;
		} else {
			score_2 += 3;
		}
	}
	cout << score_1 << " " << score_2 << endl;
}