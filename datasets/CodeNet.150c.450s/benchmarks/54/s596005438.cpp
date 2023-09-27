#include <iostream>
#include <string>
using namespace std;
int main() {
	int x = 0;
	string W, T;
	cin >> W;
	while (cin >> T, T != "END_OF_TEXT") {
		for (int i = 0; i < T.size(); i++) T[i] = tolower(T[i]);
		if (W == T) x++;
	}
	cout << x << endl;
}