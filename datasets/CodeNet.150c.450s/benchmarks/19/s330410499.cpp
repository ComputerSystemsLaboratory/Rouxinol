#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <functional>
#include <iomanip>
using namespace std;

int main()
{
	int x, y;
	for (; ;) {
		cin >> x >> y;
		if (x == 0 && y == 0) {
			break;
		}
		else {
			if (x > y) cout << y << " " << x << endl;
			else cout << x << " " << y << endl;
		}
	}
}
