#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <utility>
#include <vector>
#include <cmath>
#include <cctype>

using namespace std;

int main()
{
	char str[400];
	int m, h;

	while (1) {
		cin >> str;
		int len = strlen(str);
		if (strcmp(str, "-") == 0) break;
			cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> h;
			for (int j = 0; j < h; j++) {
				str[len + j] = str[j];
			}
			for (int j = 0; j < len; j++) {
				str[j] = str[j + h];
			}
		}
		str[len] = '\0';
		cout << str << endl;
	}

	return (0);
}