#include <iostream>
#include <string>
using namespace std;

int main()
{
	string Card;
	int n = 0, t = 0;

	cin >> Card;

	while (Card != "-") {

		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> t;
			Card = Card.substr(t, Card.size() - t) + Card.substr(0, t);
		}

		cout << Card << endl;

		cin >> Card;
	}

    return 0;
}