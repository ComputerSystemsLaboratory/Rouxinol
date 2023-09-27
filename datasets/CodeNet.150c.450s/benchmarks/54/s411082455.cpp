#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	int n = 0;

	string w, t;


	cin >> w;
	transform(w.begin(), w.end(), w.begin(), ::toupper);


	while(1) {
		cin >> t;
		if (t == "END_OF_TEXT") {
			break;
		}
		transform(t.begin(), t.end(), t.begin(), ::toupper);
		

		if (t == w) {
			n++;
		}
		else {}
	}

	cout << n << endl;

	return 0;
}