#include<iostream>
#include<string>
using namespace std;
int main() {
	string a;
	int s = 0;
	while (true) {
		cin >> a;
		if (a == "0")break;
		int len = a.length();
		for (int i = 0; i < len; i++) {
			s += (int)a[i]-(int)'0';
		}
		cout << s << endl;
		s = 0;
	}
	return 0;
}