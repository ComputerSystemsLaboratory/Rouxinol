#include <iostream>
#include<cstdio>
#include<string>
#include <string.h>
#include<stdio.h>
using namespace std;

int main() {
	string Tarou,Hanako;
	int much;
	int Taro_p = 0, Hana_p = 0;

	cin >> much;
	for (int i = 0; i < much; i++) {
		cin >> Tarou >> Hanako;
		if (Tarou == Hanako) {
			Taro_p++;
			Hana_p++;
		}
		else if (Tarou > Hanako) {
			Taro_p += 3;
		}
		else {
			Hana_p += 3;
		}
	}
	
	cout << Taro_p << " " << Hana_p << endl;
	return 0;
}


