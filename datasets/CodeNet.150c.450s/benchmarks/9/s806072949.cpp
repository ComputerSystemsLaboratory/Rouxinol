#include <iostream>
#include<stdio.h>
#include<string>
#include<queue>
using namespace std;

int main()
{
	string moji, kari, ushiro, mae; int a = -1;
	while (cin >> kari) {
		a++;
		char c = kari[0];
		if (isdigit(c)) {
			int number = stoi(kari);
			ushiro = moji.substr(number);
			mae = moji.substr(0, number);
			moji = ushiro + mae; //cout << moji << endl;
		}
		else {
			if (a) {
				cout << moji << endl;
			}
			if (kari == "-") {
				break;
			}
			else {

		int z; cin >> z;
			}
			moji = kari;
		}
	}
	return 0;
}