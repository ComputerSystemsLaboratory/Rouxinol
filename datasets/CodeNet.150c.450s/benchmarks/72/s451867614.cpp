#include<iostream>

using namespace std;


int main() {
	char String[1200];

	cin.getline(String, sizeof(String));

	for (int i = 0; String[i] != '\0'; i++) {
		if ('a' <= String[i] && String[i] <= 'z') {
			String[i] += 'A' - 'a';
		}
		else if ('A' <= String[i] && String[i] <= 'Z') {
			String[i] += 'a' - 'A';
		}
	}

	cout << String << endl;

	return 0;
}