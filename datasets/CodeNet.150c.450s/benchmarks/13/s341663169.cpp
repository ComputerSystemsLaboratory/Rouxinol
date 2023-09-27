#include<iostream>

using namespace std;


bool Compare(const char*s, const char*p, int i, int sMax) {
	for (int j = 0; p[j] != '\0'; j++) {
		if (s[(i + j) % sMax] != p[j])return false;
	}
	return true;
}

int main() {
	char s[100];
	char p[100];
	int sMax;

	cin >> s >> p;

	for (sMax = 0; s[sMax] != '\0'; sMax++);

	for (int i = 0; i <= sMax; i++) {
		if (Compare(s, p, i, sMax)) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;

	return 0;
}