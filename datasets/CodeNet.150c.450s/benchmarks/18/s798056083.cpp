#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <cmath>
#define PI 3.14159265359
using namespace std;

int main()
{
	int debt = 100000, n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		debt *= 1.05;
		debt += (debt % 1000) ? 1000 : 0;
		debt -= debt % 1000;
	}
	cout << debt << endl;
	return 0;
}