#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<vector>
#include<functional>
#include<algorithm>
#include<cstdio>
using namespace std;
int main() {
	int a, b;
	char c;
	while (cin >> a >> c >> b&&c != '?') {
		if (c == '+') cout << a + b << endl;
		else if (c == '/') cout << floor(a / b) << endl;
		else if (c == '*')cout << a*b << endl;
		else cout << a - b << endl;
	}
}