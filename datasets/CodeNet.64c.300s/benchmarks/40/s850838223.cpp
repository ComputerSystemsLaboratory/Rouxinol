#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
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
