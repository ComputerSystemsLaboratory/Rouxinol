#include <iostream>
#include <string>

using namespace std;

int main() {
	int tarou = 0, hanako = 0, n;
	string t_card, h_card;

	cin >> n;

	for(int i = 0;i < n;i++) {
		cin >> t_card >> h_card;

		if(t_card == h_card) {
			tarou++;
			hanako++;
		} else if(t_card > h_card) {
			tarou += 3;
		} else {
			hanako += 3;
		}
	}

	cout << tarou << " " << hanako << endl;

	return 0;
}