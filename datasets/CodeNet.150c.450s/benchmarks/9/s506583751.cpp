#include <iostream>
#include<cstdio>
#include<string>
#include <string.h>
#include<stdio.h>
using namespace std;

int main() {
	string yamahuda;
	int shuful;
	int count = 0;
	
	int h;
	int temp[1000] = {};

	while (true) {

		cin >> yamahuda;
		cin >> shuful;

		if (yamahuda == "-") {
			break;
		}

		for (int i = 0; i < shuful; i++) {
			cin >> h;
			yamahuda = yamahuda.substr(h, yamahuda.size() - h)
				+ yamahuda.substr(0, h);
		}

		cout << yamahuda << endl;;

	}
	return 0;
}


