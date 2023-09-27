#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	// aのほうが小さくなる
	if (a < b) {
		swap(a, b);
	}
	while (a != 0) {
		b = b % a;
		swap(a, b);
	}
	cout << b << endl;
	return 0;
}