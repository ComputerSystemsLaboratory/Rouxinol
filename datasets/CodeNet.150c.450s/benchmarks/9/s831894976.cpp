#include <string>
#include <iostream>
using namespace std;

int main() {
	while (true) {
		string cards;
		cin >> cards;
		if (cards == "-") {
			break;
		}
		int n;
		cin >> n;
		for (int i = 0;i != n;++i) {
			int h;
			cin >> h;
			for (int j = 0;j != h;++j) {
				char buttom = cards[0];
				cards.erase(0,1);
				cards.push_back(buttom);
			}
		}
		cout << cards << endl;
	}
}