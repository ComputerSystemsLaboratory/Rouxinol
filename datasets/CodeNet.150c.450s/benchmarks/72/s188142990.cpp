#include<iostream>
#include<istream>
#include<string>
using namespace std;

int main(void) {
	string moji;
	int p;

	getline(cin, moji);
	p= moji.size();
	for (int i = 0; i <= p; i++) {
		if (moji[i] == '\n')break;
		if ((moji[i] >= 65) && (moji[i] <= 90)) {
			moji[i] += 32;
		}
		else if ((moji[i] >= 97) && (moji[i] <= 122)) {
			moji[i] -= 32;
		}
	}
		cout << moji<<"\n";
	return 0;
}