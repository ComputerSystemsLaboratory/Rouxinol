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
	char tmpstr[20] = { NULL };

	cin >> tmpstr;
	int len = 0;
	while (tmpstr[len] != NULL) {
		++len;
	}

	for (int i = len - 1; i >= 0; --i) {
		cout << tmpstr[i];
	}
	cout << endl;

	return 0;
}