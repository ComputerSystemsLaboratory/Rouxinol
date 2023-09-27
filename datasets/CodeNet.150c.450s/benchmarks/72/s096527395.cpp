#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	string S;
	getline(cin, S);
	for (int i = 0; i < S.length(); i++) {
		if (islower(S[i]))
			S[i] = toupper(S[i]);
		else
			S[i] = tolower(S[i]);
	}
	cout << S << endl;
}