#include<iostream>
#include<string>
using namespace std;

int main() {
	int n, cntt = 0, cnth = 0;
	string cardt, cardh;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> cardt >> cardh;
		if (cardt > cardh)
			cntt += 3;
		else if (cardt < cardh)
			cnth += 3;
		else {
			cntt++;
			cnth++;
		}
	}

	cout << cntt << " " << cnth << endl;

	return 0;
}