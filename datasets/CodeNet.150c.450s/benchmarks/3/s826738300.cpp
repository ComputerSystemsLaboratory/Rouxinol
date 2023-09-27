#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <list>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#define INF 2147483647

using namespace std;



int main()
{
	string str, tmp, res, p;
	int len, q, a, b;

	cin >> str;
	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> res;
		if(res == "print") {
			cin >> a >> b;
			for (int j = a; j <= b; j++)
				cout << str[j];
			cout << endl;
		}
		
		if(res == "reverse") {
			cin >> a >> b;
			tmp = str;
			for (int j = a; j <= b; j++)
				str[j] = tmp[(b + a) - j];
		}

		if(res == "replace") {
			cin >> a >> b >> p;
			str.replace(a, b - a + 1, p);
		}

	}

	return (0);
}