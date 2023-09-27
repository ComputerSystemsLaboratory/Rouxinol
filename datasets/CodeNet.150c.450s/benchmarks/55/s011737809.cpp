#include<iostream>
#include<string>
using namespace std;

int main(){
	string a,b;
	int i,c;
	while (1) {
		cin >> a;
		if (a == "0") {
			break;
		}
		c = 0;
		for (i = 0; i < a.size(); i++) {
			b = a.substr(i, 1);
			if (b == "1") {
				c += 1;
			}
			if (b == "2") {
				c += 2;
			}
			if (b == "3") {
				c += 3;
			}
			if (b == "4") {
				c += 4;
			}
			if (b == "5") {
				c += 5;
			}
			if (b == "6") {
				c += 6;
			}
			if (b == "7") {
				c += 7;
			}
			if (b == "8") {
				c += 8;
			}
			if (b == "9") {
				c += 9;
			}
		}
		cout << c << endl;
	}
	return 0;
}