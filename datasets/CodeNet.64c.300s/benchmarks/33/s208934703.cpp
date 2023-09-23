#include <algorithm>
#include <climits>
#include <iostream>
#include <string>
#include<cstdio>
#include <vector>
#include<queue>
#include<limits.h>
#include<string.h>
#include<functional>
using namespace std;

signed main() {
	int a, c; char b;
	while (cin >> a >> b >> c,b!='?') {
		switch (b)
		{
		case '+':cout << a + c << endl; break;
		case '-':cout << a - c << endl; break;
		case '*':cout << a * c << endl; break;
		case '/':cout << a / c << endl; break;
		}
	}
}