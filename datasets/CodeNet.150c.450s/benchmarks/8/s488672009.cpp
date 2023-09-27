#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, taro=0, hanako=0;
	cin >> n;
	string card1, card2;
	for (int i = 0;i < n;i++) {
		cin >> card1 >> card2;
		if (card1 > card2)
			taro += 3;
		else if(card1 < card2)
			hanako += 3;
		else {
			taro++;
			hanako++;
		}
	}
	cout << taro << " " << hanako << endl;
}