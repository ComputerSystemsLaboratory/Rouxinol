#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
//#include<algorithm>
//#include<cmath>
using namespace std;
int main() {
	int A[100];
	int i = 0;
	while (cin >> A[i]) {
		if (A[i] == 0) cout << A[--i] << endl;
		else i++;
	}
	return 0;
}