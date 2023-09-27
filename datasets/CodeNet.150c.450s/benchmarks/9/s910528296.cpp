
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <climits>
#include <list>

using namespace std;

int main()
{
	string str, left, right;
	int m, num = 0;
	list<string> ans;
	while (cin >> str) {
		if (str == "-") break;
		num++;
		cin >> m;
		int *h = new int[m];
		for (int i = 0; i < m; i++) {
			cin >> h[i];
			left = str.substr(0, h[i]);
			right = str.substr(h[i], str.length() - h[i]);
			str = right + left;
		}
		ans.push_back(str);
	}
	for (auto itr = ans.begin(); itr != ans.end(); ++itr) {
		cout << *itr << "\n";
	}
	return 0;
}