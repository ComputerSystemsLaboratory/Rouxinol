#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <string.h>
#include <stack>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int ary[3] = {a, b, c};
	sort(ary, ary + 3);

	cout << ary[0] << " " << ary[1] << " " << ary[2] << endl;
	return 0;
}