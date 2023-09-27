#include<iostream>
#include<string>
using namespace std;

void Shuffle() {	
	int m, h,i;
	string  cards, str1, str2;
	while(1){
		cin >> cards; 
		if (cards == "-") break;
		cin >> m;
		for (i = 0; i < m; i++) {
			cin >> h;

			str1 = cards.substr(0, h);
			str2 = cards.substr(h, cards.size() - h);
			cards = str2 + str1;
		}
		cout << cards << endl;
	}

}

int main() {
	Shuffle();
	return 0;
}
