#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main() {
	string x, ch[500];
	int num = 0;
	cin >> x;
	for (int i = 0; i < x.size(); i++)x[i] = toupper(x[i]);
	for (int i = 0; i < 500; i++) {
		cin >> ch[i];
		if (ch[i] == "END_OF_TEXT")break;
		int a = 0;
		for (int j = 0; j < ch[i].size();j++) {
			ch[i][j] = toupper(ch[i][j]);
			//cout << ch[i][j] << endl;
		}
		if (ch[i] == x)num++;
		//cout << ch[i] << ":" << x << endl;
	}
	cout << num << endl;

	return 0;
}