#include <iostream>
#include <string>
using namespace std;
int main() {
	int count = 0;
	string W, T;
	cin >> W;
	for (int i = 0; i < W.size(); i++)
		W[i] = tolower(W[i]);
	while (cin >> T, T != "END_OF_TEXT") {
		for (int i = 0; i < T.size(); i++)
			T[i] = tolower(T[i]);
		if (W == T)
			count++;
	}
	cout << count << endl;
}