#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main() {
	string ch, x;
	int kai, shu;
	while (1) {
		cin >> ch;
		x = ch;
		if (ch == "-")break;
		cin >> kai;
		for (int i = 0; i < kai;i++) {
			cin >> shu;
			for (int j = 0; j < shu; j++) {
				x[j] = ch[j];
			}
			//cout << ch << endl;
			for (int j = 0; j < ch.size() - shu; j++) {
				ch[j] = ch[j + shu];
			}
			for (int j = 0; j < shu; j++) {
				ch[(ch.size() - shu) + j] = x[j];
			}
			//cout << ch << endl;
		}
		cout << ch << endl;
	}

	return 0;
}