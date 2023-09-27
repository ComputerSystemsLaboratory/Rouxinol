#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main() {
	string ch, x;
	int a = 0;
	cin >> ch;
	cin >> x;
	for (int i = 0;i < ch.size() && a == 0;i++) {
		if (ch[i] == x[0]) {
			for (int j = 0;j < x.size();j++) {
				int ss = i + j;
				if (ss >= ch.size())ss = ss - ch.size();
				//cout << j << ":" << x.size() << endl;
				if (ch[ss] == x[j]) {
					a = 1;
				}else {
					a = 0;
					break;
				}
			}
		}
	}
	if(a == 1)cout << "Yes" << endl;
	if (a == 0)cout << "No" << endl;

	return 0;
}