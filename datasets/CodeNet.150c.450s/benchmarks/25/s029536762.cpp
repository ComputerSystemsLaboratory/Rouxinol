#include <iostream>
using namespace std;

int main() {
	char ch;
	int counter[26] = { 0 };
	while (cin >> ch) {
		ch = tolower(ch);
		int num = ch - 'a';
		counter[num]++;
	}
	for (int i = 0;i < 26;i++)
		cout << (char)(i + 'a') << " : " << counter[i] << endl;
}