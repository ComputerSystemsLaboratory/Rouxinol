#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <cstdlib>

using namespace std;

int main(void){

	int a, b;
	char op;

	while (cin >> a >> op >> b) {
		if (op == '?')
			break;
		else if (op == '+')
			cout << a + b << endl;
		else if (op == '-')
			cout << a - b << endl;
		else if (op == '*')
			cout << a * b << endl;
		else
			cout << a / b << endl;
	}

	return 0;
}