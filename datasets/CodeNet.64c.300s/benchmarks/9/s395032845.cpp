

#include <algorithm>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;
int main()
{
	int a = 100000;
	int s;
	cin >> s;
	for (int i = 0; i < s; i++)
	{
		a *= 1.05;
		if (a % 1000 == 0) {
			a = a - (a % 1000);
		}
		else { a = a - (a % 1000) + 1000; }
	}
	cout << a << endl;
	return 0;
}