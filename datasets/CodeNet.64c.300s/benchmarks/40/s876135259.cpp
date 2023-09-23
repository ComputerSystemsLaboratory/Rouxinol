#include<iostream>
using namespace std;

int main() {
	char c;
	while (1) {
		cin.get(c);
		if (c == '\n')break;
		else if ('A' <= c && c <= 'Z')c += 'a' - 'A';
		else if ('a' <= c && c <= 'z')c -= 'a' - 'A';
		cout.put(c);
	}
	cout << endl;
		return 0;
}