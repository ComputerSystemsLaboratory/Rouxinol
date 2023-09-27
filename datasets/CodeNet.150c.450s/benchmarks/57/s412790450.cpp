#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
	int a, b;
	char op;
	for (int i = 0; i < 10000000; i++) {
		cin >> a >> op >> b;
		if (op == '?') break;
		else if (op == '+') cout << a + b << endl;
		else if (op == '-') cout << a - b << endl;
		else if (op == '*') cout << a * b << endl;
		else cout << a / b << endl;
	}
}
