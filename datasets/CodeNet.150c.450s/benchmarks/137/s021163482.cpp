#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_C

int gkey(char input[]) {
	int len = strlen(input);
	int sum = 0, p = 1;
	for (int i = 0; i < len; i++) {
		int res = 0;
		switch (input[i]) {
			case 'A':
				res = 1;
				break;
			case 'T':
				res = 2;
				break;
			case 'G':
				res = 3;
				break;
			case 'C':
				res = 4;
		}
		sum += p * res;
		p *= 5;
	}
	return sum;
}

int main() {
	int n;
	cin >> n;
	vector<bool> arr(20000000);

	for (int i = 0; i < 20000000; i++) arr[i] = false;
	for (int i = 0; i < n; i++) {
		char op[10], param[12];
		cin >> op >> param;
		switch (op[0]) {
			case 'i':
				arr[gkey(param)] = true;
				break;
				
			case 'f':
				int key = gkey(param);
				cout << (arr[key] == true ? "yes" : "no") << endl;
				break;
		}
	}
	return 0;
}