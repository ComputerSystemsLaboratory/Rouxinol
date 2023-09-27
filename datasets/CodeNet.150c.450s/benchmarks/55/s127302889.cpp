#include<cmath>
#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cctype>
#include<cstring>
using namespace std;



int main() {
	char x[1001];
	while (1) {
		int sum = 0;
		cin >> x;
		if (x[0] == '0')break;
		for (int i = 0; x[i]; i++) {
			sum += (x[i] - '0');
		}
		cout << sum << endl;
	}
	
	return 0;
}