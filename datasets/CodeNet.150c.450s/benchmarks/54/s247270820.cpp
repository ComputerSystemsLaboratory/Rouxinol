#include<iostream>

using namespace std;


bool charcmpLS(char Char1, char Char2) {
	if ('a' <= Char1&&Char1 <= 'z')Char1 -= ('a' - 'A');
	if ('a' <= Char2&&Char2 <= 'z')Char2 -= ('a' - 'A');
	return Char1 == Char2 ? true : false;
}

bool strcmpLS(const char*Str1, const char*Str2) {
	while (*Str1 != '\0'||*Str2 != '\0') {
		if (!charcmpLS(*Str1, *Str2))return false;
		Str1++;
		Str2++;
	}
	return true;
}

bool strcmpNoLS(const char*Str1, const char*Str2) {
	while (*Str1 != '\0'||*Str2 != '\0') {
		if (*Str1 != *Str2)return false;
		Str1++;
		Str2++;
	}
	return true;
}

int main() {
	char W[11];
	char T[1001];
	int WNum = 0;

	cin >> W;

	while (true) {
		cin >> T;
		if (strcmpNoLS(T, "END_OF_TEXT"))break;

		if (strcmpLS(T, W))WNum++;
	}

	cout << WNum << endl;

	return 0;
}